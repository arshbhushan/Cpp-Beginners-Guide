#include<iostream>
using namespace std;

//basic examples of Function.

//int sum(int a, int b){
  //int c= a+b;
  //return c;
//}



//Example of function Prototype.
//type function-name (arguments);
int sum(int a , int b); //--> Acceptable 
//int sum(int a ,  b); //--> Not Acceptable 
//int sum(int  , int ); //--> Acceptable 

//void g(void);-->acceptable
void g();//-->acceptable

int main(){
    int num1,num2 ;

    cout<<"enter first number here"<<endl; 
    cin>>num1;
    cout<<"enter second number here"<<endl; 
    cin>>num2;
    //num1 and num2 are actual parameters.
    cout<<" the sum is "<<sum( num1 , num2 ); 
    g();
    return 0;
}
int sum(int a, int b){
    //Formal Parameters a and b will be taking values from 
    //actual parameters num1 and num 2
  int c= a+b;
  return c;
}
void g(){
    cout<<"\nhello,sup?";
}