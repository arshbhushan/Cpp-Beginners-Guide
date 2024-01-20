//Exercise solution
// making different Calculators


#include<iostream>
#include<cmath>
using namespace std;



class SimpleCalculator{
    int a , b ;
    public :
    void getData(){
        cout<<"Enter the value a "<<endl;
        cin>>a;
        cout<<"Enter the value b "<<endl;
        cin>>b;
    }

    void performOperations() {
        cout<<" The value of a + b is  "<<a+b<<endl;
        cout<<" The value of a * b is  "<<a*b<<endl;
        cout<<" The value of a - b is  "<<a-b<<endl;
        cout<<" The value of a / b is  "<<a/b<<endl;
    }


};

class ScientificCalculator{
     

};

int main(){
    
SimpleCalculator calc;
calc.getData();
calc.performOperations();
return 0;
}