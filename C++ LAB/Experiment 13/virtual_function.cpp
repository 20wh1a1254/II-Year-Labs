#include<iostream>
using namespace std;
class Baseclass
{
    int a = 7;
    public:
    virtual void display()
    {
        cout<<a<<endl;
    }
};
class Derivedclass:public Baseclass
{
    int b = 8;
    public:
    void display()
    {
        cout<<b<<endl;
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
