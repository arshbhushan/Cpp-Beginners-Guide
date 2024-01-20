// Initialization List in Constructors
/*
Syntex for initialization list in Constructors:
Constructor (argument-list): initilization-section
 {
  assignement + other code;
 }

 class Test{
     int a;
     int b;
     public:
     Test(int i , int j ) : a(i), b(j )
 }
*/

#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j) {
         cout << " Constructor excecuted "; 
    cout<<" Constructor excicuted"<<endl;
    cout<<" value of a is "<<a<<endl;
    cout<<" Value of b is "<<b<<endl;
}
};
int main()
{
    Test t(4,6);

    return 0;
}