#include <iostream>
using namespace std;
class xyz
{
    private:
    int num = 100;
    char ch = 'Z';
    public:
    friend void display(xyz obj);
};
void display(xyz obj)
{
    cout<<obj.num<<endl;
    cout<<obj.ch<<endl;
}
int main()
{
    xyz obj;
    display(obj);
    return 0;
}
