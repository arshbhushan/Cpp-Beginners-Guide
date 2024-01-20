// CLASS TEMPLATES WITH DEFAULT PARAMETERS

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Arsh
{
public:
    T1 a;
    T2 b;
    T3 c;
    Arsh(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{
    Arsh<> h(4, 6.4, 'c');
    h.display();
    cout << endl;
    Arsh<float, char, char> g(4, 'f', 'c');
    h.display();

    return 0;
}