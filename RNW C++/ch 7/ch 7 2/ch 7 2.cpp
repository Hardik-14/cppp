#include<iostream>
using namespace std;

class A{
	int a,b,c;

	public : 
	void input()
	{
		cout<<"Enter a :- ";
		cin>>a;
	}
	void input1()
	{
		cout<<"Enter b :- ";
		cin>>b;
	}
	A operator < (A hr)
	{
		A i;
		if(a<hr.b)
		{
			cout<<"B is big";
		}
		else
		{
			cout<<"A is big";
		}
		return i;
	}

};

main()
{
	A a1;
	a1.input();
	A a2;
	a2.input1();
	A a3;
	a3=a1<a2;
}
