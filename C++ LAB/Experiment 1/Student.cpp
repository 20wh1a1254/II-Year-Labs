#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int roll_no;
    char grade;
    public:
    void read()
    {
        cout<<"Enter name:";
	cin>>name;
	cout<<"Enter roll.no:";
	cin>>roll_no;
	cout<<"Enter grade:";
	cin>>grade;
    }
    void display()
    {
        cout<<"Name of the Student:"<<name<<endl;
	cout<<"Roll.No:"<<roll_no<<endl;
	cout<<"Grade:"<<grade<<endl;
    }
};
int main()
{
    Student s[3];
    int i;
    for(i=0;i<3;i++)
    {
        s[i].read();
    }
    for(i=0;i<3;i++)
    {
        s[i].display();
    }
    return 0;
}



	    
