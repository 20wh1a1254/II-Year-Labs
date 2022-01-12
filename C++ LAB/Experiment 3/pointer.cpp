#include <iostream>
#include <string>
using namespace std;
class Employee
{
    string name;
    int id;
    float salary;
    public:
    void read()
    {
        cout<<"Enter the name of employee: ";
	cin>>name;
	cout<<"Enter the ID of employee: ";
	cin>>id;
	cout<<"Enter the Salary: ";
	cin>>salary;
    }
    void display()
    {
        cout<<"Name of the employee: "<<name<<endl;
	cout<<"ID of the employee: "<<id<<endl;
	cout<<"Salary of the employee: "<<salary<<endl;
    }
};
int main()
{
    Employee e;
    Employee *ptr;
    ptr = &e;
    ptr->read();
    ptr->display();
    return 0;
}
