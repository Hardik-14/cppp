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
		void gettotalovers(int a){
			cout<<"T20 match overs is :"<<a<<endl;
			
		}
};

class testmatch : public cricket
{
	public :
		void gettotalovers(int b){
			cout<<"test match per day overs is :"<<b<<endl;
			
		}
};

main(){
	cricket c1;
	t20match t1;
	testmatch t2;
	c1.gettotalvoers();
	t1.gettotalovers(c1.a);
	t2.gettotalovers(c1.b);
}
