#include <iostream>

using namespace std;

int main() {
	int n;
	
	cout<<"enter size :- ";
	cin>>n;
	
    int arr[n];
    int i;
    cout<<"elements of array";
  
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	cout<<"Even number is "; 
    for (i = 0; i < n; i++) 
	{
        if (arr[i] % 2 == 0) 
		{
            cout <<" "<< arr[i];
        }
    }

}

