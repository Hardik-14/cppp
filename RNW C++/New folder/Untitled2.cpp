#include<iostream>
using namespace std;

class hotel {
	int hotel_id,hotel_establish_year,hotel_staff_quantity,hotel_room_quantity;
	string hotel_name,hotel_location;
	static string hotel_type,hotel_rating;
	public:
	void setter()
	{
		cout<<"Enter the id :";
		cin>>hotel_id;
		cout<<"Enter the name:";
		cin>>hotel_name;
		cout<<"Enter the establish year :";
		cin>>hotel_location;
		cout<<"Enter the staff quantity :";
		cin>>hotel_establish_year;
		cout<<"Enter the staff quantity:";
		cin>>hotel_staff_quantity;
		cout<<"Enter the room quantity:";
		cin>>hotel_room_quantity;
		cout<<"***********************";
				
	}
	void getter()
	{
				cout<<"Enter the :"<<hotel_name <<endl;		
				cout<<"Enter the :"<<hotel_id<<endl;		
				cout<<"Enter the :"<<hotel_location<<endl;		
				cout<<"Enter the :"<<hotel_establish_year<<endl;		
				cout<<"Enter the :"<<hotel_staff_quantity<<endl;		
				cout<<"Enter the :"<<hotel_room_quantity<<endl;		
				cout<<"Enter the :"<<hotel_type<<endl;		
				cout<<"Enter the :"<<hotel_rating<<endl;		
				cout<<"**************************";		
	}
};
 
 string hotel :: hotel_type ="motel";
 string hotel :: hotel_rating ="4 star";

main()
{
	int n,i;
	cout<<"Enter the hotels:";
	cin>>n;
	
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setter();
		h[i].getter();
	}
}


