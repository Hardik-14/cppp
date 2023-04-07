#include<iostream>
using namespace std;

class employe
{
	private :
	
		int id,salary,age;
		string name,role,exp,cname;
		static string city;

	public :

		void setter()
		{
			cout << "Enter ID : ";
			cin >> id;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter Role : ";
			cin >> role;
			cout << "Enter Salary : ";
			cin >> salary;
			cout << "Enter Experience : ";
			cin >> exp;
			cout << "Enetr city : ";
			cin >> city;
			cout << "Emter Company name : ";
			cin >> cname;
		}

		void getter()

		{
			cout << id << "\t" << name << "\t" << age << "\t" << role 
				 << "\t" << salary << "\t" << exp << "\t" << city << "\t" << cname << endl;
		}
	
};
 string employe :: city ="surat";

int main()
{

	int n,i;
	cout<<"Enter the details:";
	cin>>n;
	
	employe e[n];
	
	for(i=0;i<n;i++)
	{
		e[i].setter();
		e[i].getter();
	
}
}

