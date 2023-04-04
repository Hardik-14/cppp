// WAP to create a class to read and add two times.
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
            cout << "Enter hours: ";
            cin >> hours;
        
		    cout << "Enter minutes: ";
            cin >> min;
        
		    cout << "Enter seconds: ";
            cin >> sec;
        }
       
	    void showTime() 
		{
            cout << "Time = " << hours << ":" << min << ":" << sec << endl;
        }
        
		void addTime(Time t1, Time t2)
		 {
            sec = t1.sec + t2.sec;
        
		    min = t1.min + t2.min + (sec/60);
        
		    hours = t1.hours + t2.hours + (min/60);
        
		    min %= 60;
        
		    sec %= 60;
        }
};

main()
 {
    Time t1, t2, t3;

    cout << "Enter 1st time: " << endl;
    t1.getTime();

    cout << "Enter 2nd time: " << endl;
    t2.getTime();
    t3.addTime(t1, t2);

    cout << "Total time: ";
    t3.showTime();

    return 0;
}

