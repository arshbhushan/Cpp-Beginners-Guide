//Parameterized &
//Default Constructors 

#include<iostream>
using namespace std;

class Complex{
    int a , b ; 
    public:
    //Creating a costructor
    Complex(int , int ); //Constructor declaration
    
    void printNumber()
    {
        cout<< " Your number is  " << a << " + " << b << "i" <<endl;
    }
};

Complex :: Complex(int x , int y ) //---> This is an paramterized constructor
{
    a=x;
    b=y;    
}


int main(){
    //Implicit Call
    Complex a(4,6);

    //Exlicit Call
   Complex b = Complex(5,7); 

 
    a.printNumber();
    b.printNumber();

return 0;
}