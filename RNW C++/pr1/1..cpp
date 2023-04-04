#include<iostream>
#include<string.h>

using namespace std;
main()
{
	char a[50];
	int i,c=0;
	
	cin>>a;
	for(i=0 ; i<strlen(a) ; i++ )
	{
		if(a[i]>=48 && a[i]<=57)
		{
			c++;
			
		}
	}
	if(c!=0)
	{
		cout<<"numeric";
		
	}
	else
	{
		cout<<"not numeric";
	}
	
}
