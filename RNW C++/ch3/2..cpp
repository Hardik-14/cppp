//2. WAP to get and display 4 Cars information
//using class and object by including below
//mentioned attributes:
//- car_id
//- car_company_name
//- car_color
//- car_model
//- car_release_year


#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void display() {
        cout << "Car ID: " << car_id << endl;
        cout << "Company: " << car_company_name << endl;
        cout << "Color: " << car_color << endl;
        cout << "Model: " << car_model << endl;
        cout << "Release Year: " << car_release_year << endl;
        cout << endl;
    }
};

int main() {
    Car car1, car2, car3, car4;

    cout << "Enter information for Car 1:\n";
    cout << "Car ID: ";
    cin >> car1.car_id;
    cout << "Company: ";
    cin >> car1.car_company_name;
    cout << "Color: ";
    cin >> car1.car_color;
    cout << "Model: ";
    cin >> car1.car_model;
    cout << "Release Year: ";
    cin >> car1.car_release_year;
    cout << endl;

    cout << "Enter information for Car 2:\n";
    cout << "Car ID: ";
    cin >> car2.car_id;
    cout << "Company: ";
    cin >> car2.car_company_name;
    cout << "Color: ";
    cin >> car2.car_color;
    cout << "Model: ";
    cin >> car2.car_model;
    cout << "Release Year: ";
    cin >> car2.car_release_year;
    cout << endl;

    cout << "Enter information for Car 3:\n";
    cout << "Car ID: ";
    cin >> car3.car_id;
    cout << "Company: ";
    cin >> car3.car_company_name;
    cout << "Color: ";
    cin >> car3.car_color;
    cout << "Model: ";
    cin >> car3.car_model;
    cout << "Release Year: ";
    cin >> car3.car_release_year;
    cout << endl;

    cout << "Enter information for Car 4:\n";
    cout << "Car ID: ";
    cin >> car4.car_id;
    cout << "Company: ";
    cin >> car4.car_company_name;
    cout << "Color: ";
    cin >> car4.car_color;
    cout << "Model: ";
    cin >> car4.car_model;
    cout << "Release Year: ";
    cin >> car4.car_release_year;
    cout << endl;

    cout << "Car Information:\n";
    car1.display();
    car2.display();
    car3.display();
    car4.display();

    return 0;
}

