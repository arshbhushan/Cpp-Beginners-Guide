/*
Create 2 classes :
1. simpleCalculator - Takes input of 2 numbers using a utility
function and perform +,-,*,/ and display the results using another function.
2. ScientificCalculator - Take input of 2 numbers using utility function and perform any four
scintific operations of your choice and displays the results using another function.

Create another HybridCalculator
*/



#include<iostream>
#include <cmath>
using namespace std;
class simplecalc
{
protected:
    int a, b, c;

public:
    int addition(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a + b;
        return c;
    }
    int subtraction(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a - b;
        return c;
    }
    int multiplication(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a * b;
        return c;
    }
    int division(void)
    {
        cout << "Enter two numbers " << endl;
        cin >> a >> b;
        c = a / b;
        return c;
    }
};