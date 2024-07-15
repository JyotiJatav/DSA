#include<iostream>
using namespace std;
class Person
{
	char name[30];
	
	public:
	void getdata(void)
	{
		cout<<"Enter Name:";
		cin>>name;
	}
	void display(void){
		cout<<"Name:"<<name<<endl;
	}
};

class Student:public Person
{
	char course[50];
	int marks;
	int year;
	
	public:
	void getdata(void)
	{
		cout<<"Enter Course:";
		cin>>course;
		cout<<"Enter Marks:";
		cin>>marks;
		cout<<"Enter Year:";
		cin>>year;
	}
	void display(void){
		cout<<"Course:"<<course<<endl;
		cout<<"Marks:"<<marks<<endl;
		cout<<"Year:"<<year<<endl;
	}
};

class Employee:public Person
{
	char department[50];
	float salary;
	
	public:
	void getdata(void)
	{
		cout<<"Enter department:";
		cin>>department;
		cout<<"Enter Salary:";
		cin>>salary;
	}
	void display(){
		cout<<"Department:"<<department<<endl;
		cout<<"Salary:"<<salary<<endl;
	}
};

int main()
{
	Person p;
	p.getdata();
	p.display();
	
	Student s;
	s.getdata();
	p.display();
	
	Employee e;
	e.getdata();
	e.display();
	
	
	return 0;
}
