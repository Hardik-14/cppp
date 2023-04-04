#include<iostream>
using namespace std;
main()
{
	
	int i,n;
	cout<<"enter the size of string";
	cin>>n;
	
	char a[n];
	
	 for (int i = 0; i <=n; i++)
	  {
	  	cin>>a[i];
	  }
	\
	  for(i=0; i<=n;i++)
	  {
	  	if(a[i]>64 && a[i]<91)
		  {
		  	a[i]+=32;
		  	cout<<a[i];
		  	}
			else
			{
				a[i]-=32;
				cout<<a[i];
				
				  }  	
	  }
    
}
