

#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << " how are you ? " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << " how do you do ? " << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
    Base1:
        greet();
    }
};

class B {
    public:
    void say(){
        cout<<" Hello World "<<endl;
    }//
};

class D: public B {
    int a ;
    // D's new say() method will override base class's say () method
    public:
    void say()
    {
        cout<<"Hello homies "<<endl;
    }
};

int main()
{

    //Ambibuity 1

    //Base1 base1obj;
    //base1obj.greet();

    //Base2 base2obj;
    //base2obj.greet();

    //Derived d;
    //d.greet();

    B b;
    b.say();

    D d;
    d.say();


    return 0;
}