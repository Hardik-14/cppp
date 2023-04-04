//WAP to create class to read time in seconds and convert into time in (HH:MM:SS) format.
#include<iostream>
using namespace std;

class Time 
{
    private:

        int hours;
        int min;
        int sec;

    public:
        void getTime() 
		{
            cout << "Enter time in seconds: ";
            cin >> sec;
        }

        void showTime()
		 {
            cout << "Time = " << hours << ":" << min << ":" << sec << endl;
        }
    
	    void convertTime() 
		{
            min = sec / 60;
            hours = min / 60;
            min %= 60;
            sec %= 60;
        }
};

int main() {
    Time t;
   
    t.getTime();
   
    t.convertTime();
   
    t.showTime();
   
    return 0;
}

