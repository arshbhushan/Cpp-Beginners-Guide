// Multiple Inheritance Deep Dive
// With Code Examples

#include <iostream>
using namespace std;

// Syntex for inheriting in multiple inheritane
// class DerivedC : visibility-mode base1,visibility-mode base2
//{
//  Class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Derived : public Base1, public Base2
{

public:
    void show()
    {
        cout << " The value of base1 is " << base1int << endl;
        cout << " The value of base2 is " << base2int << endl;
        cout << " The sum of base1 and base2 is " << base1int + base2int << endl;
    }
};

/* The derieved class will look something like this:
Data members:
base1int-->protected
base2int-->protected
Member functions:
set_base1int() ---> public 
set_base2int() ---> public
set_show() ---> public
*/
int main()
{

    Derived arsh;
    arsh.set_base1int(23);
    arsh.set_base2int(21);
    arsh.show();
    return 0;
}