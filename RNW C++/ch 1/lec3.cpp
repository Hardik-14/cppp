#include <iostream>
using namespace std;

int main() 
{
	int a[1010];
	int i;
	int j;
	
	cout<<"leep year \n";
	for(j=0,i=2020;i<=3030;i++,j++)
	{
		a[j]=i;
		if(a[j]%4==0)
		{
			cout<<a[j]<<"\n";
		}
		}	
}

