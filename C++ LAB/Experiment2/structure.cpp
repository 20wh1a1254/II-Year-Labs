#include <iostream>
#include <string>
using namespace std;
struct student
{
    string name;
    int roll_no;
    char grade;
}s;
int main()
{
    cout<<"Enter Name:";
    cin>>s.name;
    cout<<"Enter Roll number:";
    cin>>s.roll_no;
    cout<<"Enter grade:";
    cin>>s.grade;
    cout<<"Name of the student:"<<s.name<<endl;
    cout<<"Roll No:"<<s.roll_no<<endl;
    cout<<"Grade:"<<s.grade<<endl;
    return 0;
}
