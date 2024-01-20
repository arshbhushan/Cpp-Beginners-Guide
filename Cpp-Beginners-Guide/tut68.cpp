// MEMBER FUNCTION TEMPLATES &
// OVERLOADING TEMPLATE FUNCTIONS

#include <iostream>
using namespace std;

template <class T>
class Arsh
{
public:
    T data;
    Arsh(T a)
    {
        data = a;
    }
    void display();
};
template <class T>
void Arsh<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout << " I am  func() " << a << endl;
}
template <class T>
void func(T a)
{
    cout << " I am templastised func() " << a << endl;
}
template <class T>
void func1(T a)
{
    cout << " I am lkdfhdj func() " << a << endl;
}

int main()
{
    // Harry<float>h(5.7);
    // Harry<char>h('c');

    // Arsh<int> h(87);
    // cout<<h.data<<endl;
    // h.display();

    func(4); // Exact match takes the highest priority
    func1(4);
    return 0;
}