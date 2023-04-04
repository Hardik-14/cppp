#include <iostream>
#include <string>

using namespace std;

class Customer {
private:
    int cust_id;
    string cust_name;
    int cust_age;
    string cust_telecome_brand_name;
    string cust_mobile_number;
    string cust_city;
    int cust_simcard_validity;

public:
    
    setter(int id, string name, int age, string brand_name, string mobile_number, string city, int simcard_validity) {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_telecome_brand_name = brand_name;
        cust_mobile_number = mobile_number;
        cust_city = city;
        cust_simcard_validity = simcard_validity;
    }
   
    getter()
    {
		cout<<"The Id of customer :"<<cust_id;
		cout<<"The Name of customer :"<<cust_name;
		cout<<"The Age of customer :"<<cust_age;
		cout<<"The Course of customer :"<<cust_brand_name;
		cout<<"The Email of customer :"<<cust_ mobile_number;
		cout<<"The City of customer :"<<cust_city;
		cout<<"The College of customer :"<<cust_college;
	}
    
};

int main() {
    int id, age, simcard_validity;
    string name, brand_name, mobile_number, city;

        for (int i = 1; i <= 5; i++) 
		{
	        cout << "Enter information for customer " << i << endl;
	        
			cout << "ID: ";
	        cin >> id;
	        
			cout << "Name: ";
	        cin.ignore();
	        
	        cout << "Age: ";
	        cin >> age;
	        
			cout << "Telecom Brand Name: ";
	        cin.ignore();
	        
	        cout << "Mobile Number: ";
	        cin >> mobile_number;
	        
			cout << "City: ";
	        cin >> city;
	        
			cout << "Simcard Validity (in years): ";
	        cin >> simcard_validity;

        Customer setter(id, name, age, brand_name, mobile_number, city, simcard_validity);

		cout<<"The Id of customer :"<<cust_id;
		cout<<"The Name of customer :"<<cust_name;
		cout<<"The Age of customer :"<<cust_age;
		cout<<"The Course of customer :"<<cust_course;
		cout<<"The Email of customer :"<<cust_email;
		cout<<"The City of customer :"<<cust_email;
		cout<<"The College of customer :"<<cust_college;
    }

    return 0;
}

