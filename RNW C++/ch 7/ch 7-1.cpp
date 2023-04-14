//write a c++ program to perform all basic arithmetic operations such
//like +, -, *, and / operations by implementing method
//overloading using total 2 classes.
//- use only one method named calculate() in child
//class
//- if you pass 2 arguments, perform division
//- if you pass 3 arguments, perform subtraction
//- if you pass 4 arguments, perform multiplication
//- if you pass 5 arguments, perform addition   take value from user.

#include<iostream>
using namespace std;
 class A {
 	public:
 		int a,b,c,d,e;
 		void input() {
 			cout <<"Enter A:";
 			cin>> a ;
 			cout <<"Enter B:";
 			cin>> b ;
 			cout <<"Enter C:";
 			cin>> c;
 			cout <<"Enter d:";
 			cin>> d;
 			cout <<"Enter E:";
 			cin>> e;
		 }
 };
 
class B : public A
{
	public :
		void calculate(float a,float b){
			cout<<"\ndivision is :"<<a/b;
		}
		void calculate(int a,int b, int c){
			cout<<"\nsubstaction is :"<<a-b-c;
		}
		void calculate(int a,int b,int c,int d){
			cout<<"\nmultiplication is :"<<a*b*c*d;
		}
		void calculate(int a,int b,int c, int d , int e){
			cout<<"\naddition is :"<<a+b+c+d+e;
			}	
		};
		
main(){
	B b1;
	b1.input();
	b1.calculate(b1.a,b1.b);
	b1.calculate(b1.a,b1.b,b1.c);
	b1.calculate(b1.a,b1.b,b1.c,b1.d);
	b1.calculate(b1.a,b1.b,b1.c,b1.d,b1.e);
	
}

