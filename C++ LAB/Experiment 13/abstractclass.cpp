#include<iostream>
using namespace std;
class Baseclass
{
    int a = 10;
    public:
    virtual void display() = 0;
};
class Derivedclass:public Baseclass
{
    int b = 20;
    public:
    void display()
    {
        cout<<"Derived class: b = "<<b<<endl;
    }
};
int main()
{
    Baseclass *x;
    Derivedclass y;        
    x = &y;
    x-> display();
    return 0;
}
