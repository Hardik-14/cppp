 //WAP to create a class to read and add two distance. (e.g. 8 feet 16 inch + 4 feet 14 inch = 14 feet 6 inch)
#include<iostream>
using namespace std;

class dis{
    private:
        int feet;
        int inches;
    public:

        void getdis() 
		{
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }
        void getshowdis() 
		{
            cout << "Distance = " << feet << " feet " << inches << " inches" << endl;
        }
        void adddis(dis d1, dis d2) 
		{
            inches = d1.inches + d2.inches;
            feet = d1.feet + d2.feet + (inches/12);
            inches %= 12;
        }
};

int main() 
{
    dis d1, d2, d3;
 
    cout << "Enter 1st distance: " << endl;
    d1.getdis();
 
    cout << "Enter 2nd distance: " << endl;
    d2.getdis();
    d3.adddis(d1, d2);
 
    cout << "Total distance: ";
    d3.getshowdis();
    return 0;
}

