#include<iostream>
#include<stack>
using namespace std;


int main()
{
    char s[100000];
    cin>>s;
    stack<char >st;
    int i=0;
    while(s[i]!='\0')
    {
        char ch=s[i];
        switch(ch)
        {
            case '(': st.push(ch);
                    break;
            case ')':if(!st.empty() && st.top()=='(')
                        {
                            st.pop();
                            break;
                        }
                        else
                        {
                            cout<<"No";
                            return false;
                        }

        }
        i++;
    }
    cout<<"Yes";
    return st.empty();
}
