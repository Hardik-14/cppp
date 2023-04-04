#include<iostream>

using namespace std;

class stu {
	private:
    
	int stu_id,stu_age;
    string stu_name,stu_course,stu_email,stu_city,stu_college;
	
	public:
	
	  setter( 	int stu_id, int stu_age, string stu_name, string stu_course, string stu_email, string stu_city, string stu_college) 
	  {
     stu_id = stud_id;
     stu_name = name;
     stu_age = age;
     stu_course = course;
     stu_email = email;
     stu_city = city;
     stu_college = college;
    }
    
    getter()
    {
		cout<<"The Id of Student :"<<stu_id;
		cout<<"The Name of Student :"<<stu_name;
		cout<<"The Age of Student :"<<stu_age;
		cout<<"The Course of Student :"<<stu_course;
		cout<<"The Email of student :"<<stu_email;
		cout<<"The City of student :"<<stu_email;
		cout<<"The College of student :"<<stu_college;
	}
  };
  
main(){
	
	int stu_id,stu_age;
    string stu_name,stu_course,stu_email,stu_city,stu_college;
	
	int i;
	stu s[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"The Id of Student :";
		cin>>stu_id;
		
		cout<<"The Name of Student :";
		cin>>stu_name;
		
		cout<<"The Age of Student :";
		cin>>stu_age;
		
		cout<<"The Course of Student :";
		cin>>stu_course;
		
		cout<<"The Email of student :";
		cin>>stu_email;
		
		cout<<"The City of student :";
		cin>>stu_email;
		
		cout<<"The College of student :";
		cin>>stu_college;
		
		s[i].setter( stu_id, stu_age, stu_name, stu_course, stu_email, stu_city, stu_college);
		
		cout<<"The Id of Student :"<<stu_id<<endl;
		cout<<"The Name of Student :"<<stu_name<<endl;
		cout<<"The Age of Student :"<<stu_age<<endl;
		cout<<"The Course of Student :"<<stu_course<<endl;
		cout<<"The Email of student :"<<stu_email<<endl;
		cout<<"The City of student :"<<stu_email<<endl;
		cout<<"The College of student :"<<stu_college<<endl;
	}
} 
