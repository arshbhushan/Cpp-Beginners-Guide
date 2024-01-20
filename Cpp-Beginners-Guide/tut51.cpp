//Pointers to objects arrow operator

#include<iostream>
using namespace std;

class Complex{
    int Real , imaginary;
    public:
    void getData(){
        cout<<" The real part is "<<Real<<endl;
        cout<<" The imaginary part is "<<imaginary<<endl;
    }

    void setData(int a , int b){
        Real=a;
        imaginary = b;

    }
};
int main(){
    //Complex c1;
   // Complex *ptr = &c1;
   Complex *ptr = new Complex;
    // (*ptr).setData(1,54); is exactly same S
    ptr->setData(1,54);

   //(*ptr).getData(); is as good as 
    ptr->getData();

    // Array of objects
    cout<<" Array objects "<<endl;
    
     Complex *ptr1 = new Complex[4];
     ptr1->setData(7,27);
     ptr1->getData();

return 0;
}