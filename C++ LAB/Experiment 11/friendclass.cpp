#include <iostream>
using namespace std;
class xyz
{
    private:
    char ch = 'A';
    int num = 11;
    public:
    friend class ABC;
};
class ABC
{
    public:
    void display(xyz obj1)
    {
	cout<<obj1.ch<<endl;
	cout<<obj1.num<<endl;
    }
};
int main()
{
    ABC obj;
    xyz obj1;
    obj.display(obj1);
    return 0;
}
