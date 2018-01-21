#include <stdio.h>
#include <string.h>
int main(void) {
	int T;
	scanf("%d",&T);
	int i;
	for(i=1; i<=T; i++)
	{
	    int w;
	    char day[5];
	    scanf("\n%d %s",&w,day);
	    int d;

	    if(!strcmp(day,"mon")) d = 0;
	    else if(!strcmp(day,"tues")) d = 1;
	    else if(!strcmp(day,"wed")) d = 2;
	    else if(!strcmp(day,"thurs")) d = 3;
	    else if(!strcmp(day,"fri")) d = 4;
	    else if(!strcmp(day,"sat")) d = 5;
	    else if(!strcmp(day,"sun")) d = 6;
	    int arr[7] = {0,0,0,0,0,0,0};
	    int j;
	    for(j=1; j<=w; j++)
	    {
	        arr[(d+j-1)%7]+=1;
	    }
	    for(j=0; j<7; j++)
	        printf("%d ",arr[j]);
	   printf("\n");
	}
	return 0;
}
