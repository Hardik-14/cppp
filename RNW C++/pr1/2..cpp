#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Leap years from 2000 to 3000:";
    for(year = 2000; year <= 3000; year++) 
	{
        if(year % 4 == 0)
		 {
            if(year % 100 != 0 || year % 400 == 0)
			 {
                cout << year ;
            }
        }
    }
  
}

