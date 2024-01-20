// Copy Constructors

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // If no copy constructor is found ,
    // compiler supplies it's own Copy Constructor.

    Number(Number &obj)
    {
        cout << "Copy Constructor called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << " The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x); // Copy Constructor invoked.
    z1.display();
    // z1 should exactly resemble z or x or y
    return 0;
}