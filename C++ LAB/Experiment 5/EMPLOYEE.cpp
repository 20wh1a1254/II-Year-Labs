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
    float net_salary;
    public:
    void read()
    {
	cout<<"Enter the name of employee: ";
	cin>>name;
	cout<<"Enter the ID of employee: ";
	cin>>id;
	cout<<"Enter the Basic Salary: ";
	cin>>basic;
    }
    void display()
    {
        DA = 0.52*basic;
	IT = 0.30*(basic+DA);
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
    Employee e[3];
    int i;
    for(i=0;i<3;i++)
    {
	e[i].read();
    }
    for(i=0;i<3;i++)
    {
	e[i].display();
    }
    return 0;
}
