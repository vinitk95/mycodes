/*Take as input str, a string. We are concerned with all the possible subsequences of str. E.g.
a. Write a recursive function which returns the count of subsequences for a given string.
 Print the value returned.

b. Write a recursive function which prints all possible subsequences for a “abcd” has
 following subsequences “”, “d”, “c”, “cd”, “b”, “bd”, “bc”, “bcd”, “a”, “ad”, “ac”, “acd”, “ab”, “abd”, “abc”,“abcd”.
given string (void is the return type for function).
*/
#include<iostream>
#include<stack>
using namespace std;
#include<string>
stack <string> g;
int b = 0;
void subseq ( char* in, char* out, int i, int j)
{
	if(in[i] == '\0' ) {
		out[j] = '\0';
		b++;
		g.push(out);
		return;
	}
	out[j] = in[i];
	subseq( in, out, i + 1 ,j +1 );
	subseq( in, out, i + 1, j);

}

int main()
{

	char a[100];
	cin >> a;
	char out[100];
	subseq(a,out,0,0);
	cout << b << endl;
	for(int k = 0; k < b; k++)
	{
		cout << g.top() << " ";
		g.pop();
	}
	return 0;
}
