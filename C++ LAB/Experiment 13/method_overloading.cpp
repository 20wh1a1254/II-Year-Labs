#include<iostream>
#include<string>
using namespace std;
void display(int i)
{
    cout<<"Integer value is: "<<i<<endl;
}
void display(double f)
{
    cout<<"Float value is: "<<f<<endl;
}
void display(string s)
{
    cout<<"String: "<<s<<endl;
}
int main()
{
    display(12);
    display(34.5639);
    display("Twelve");
    return 0;
}

