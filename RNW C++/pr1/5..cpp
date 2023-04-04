#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,i,j;
    cout << "Enter N: ";
    cin >> n;
  
    int arr[n];
    
    for( i = 0; i < n; i++)
	 {
	 	cout<<"a["<<i<<"] :";
        cin >> arr[i];
    }
    
		for( i = 0; i < n; i++) 
		{
        cout << (arr[i]) ;
    	}
			for( i = 0; i < n; i++) 
			{
				for( j = 1; j <a[i] ; j++) 
				{
					if(j*j==a[i])
					{
						cout<<"A["<<i<<"]:"<<"\n";
					}
				}
			}
	
    return 0;
}

