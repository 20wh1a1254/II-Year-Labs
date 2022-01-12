#include <iostream>
#include <string>
using namespace std;
class Employee
{
    string name;
    int id;
    float basic;
    float DA;
    float IT;
    float Net_salary;
    public:
    void read()
    {
	cout<<"Enter the name of employee: ";
	cin>>name;
	cout<<"Enter the ID of employee: ";
	cin>>id;
	cout<<"Enter the Basic Salary: ";
	cin>>basic;
	cout<<"Enter the DA: ";
	cin>>DA;
	cout<<"Enter the IT: ";
	cin>>IT;
    }
    void display()
    {
	cout<<"Name of the employee: "<<name<<endl;
	cout<<"ID of the employee: "<<id<<endl;
	cout<<"Basic Salary of the employee: "<<basic<<endl;
	cout<<"DA is : "<<DA<<endl;
	cout<<"IT is: "<<IT<<endl;
	cout<<"Net Salary of the employee: "<<basic+DA-IT<<endl;
    }
};
int main()
{
    Employee e;
    e.read();
    e.display();
    return 0;
}
