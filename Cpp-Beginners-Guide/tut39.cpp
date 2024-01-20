// Protected Access Modifier

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*
for a protected member:
                       Public Derivation   Private Derivation   Protected Derivation
1. Private members     not inherited       not inherited        not inherited
2. Protected members   Protected           Private              Protected
3. Public members      Public              Private              Protected
*/

class Derived : protected Base
{
};
int main()
{
    Base b;
    Derived d;
    cout << d.a; // will not work because a is protected...
    return 0;
}