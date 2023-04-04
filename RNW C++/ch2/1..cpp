#include <iostream>

using namespace std;

inline int factorial(int num)
 {
    int result = 1;
    for(int i = 1; i <= num; ++i) 
	{
        result *= i;
    }
    return result;
}

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    
    for(int i = 0; i < n; i++)
	 {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Factorials of the elements in the array: ";
  
    for(int i = 0; i < n; i++) 
	{
        cout << factorial(arr[i]) << "\n ";
    }
}

