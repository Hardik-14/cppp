#include <iostream>
#include<string.h>
using namespace std;

int main() 
{
	char a[20];
    int i;
    cin>>a;
    for(i = 0; i<strlen(a); i++) 
	{
        if(a[i>=65 && a[i]<=90])
		 {
            a[i]+=32;
            
        }
        else
        {
        	a[i]-=32;
		}
    }
  puts(a);
}

