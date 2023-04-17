//write a c++ program to implement method overriding by following
//below mentioned criteria:
//- Class Cricket -> Class T20Match
//- Class Cricket -> Class TestMatch
//- override getTotalOvers() method in both classes 

#include<iostream>
using namespace std;

class cricket {
	public :
		int a,b;
		public:
			void gettotalvoers(){
				cout<<"Enter A :";
				cin>>a;
				cout<<"Enter b :";
				cin>>b;
				
			}
};

class t20match : public cricket
{
	public :
		void gettotalovers(){
			cout<<"T20 match overs is :"<<a<<endl;
			
		}
};

class testmatch : public cricket
{
	public :
		void gettotalovers(){
			cout<<"test match per day overs is :"<<b<<endl;
			
		}
};

main(){

	
	t2.cricket::gettotalvoers();
	t2.t20match::gettotaloverss();
	t2.gettotalvoers();
}
