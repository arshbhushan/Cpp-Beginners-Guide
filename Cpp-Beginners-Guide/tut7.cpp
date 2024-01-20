#include<iostream>
using namespace std;

int c=45;

int main(){
// int a , b, c;
//cout<<"Enter the value of a:"<<endl;
//cin>>a;
//cout<<"Enter the value of b"<<endl;
//cin>>b; 
//c=a+b; 
//cout<<"The sum is "<<c<<endl;
//cout<<"The global c is "<<::c;

//*********** Float Double and long double literals**********

//float d=34.4;
//long double e = 34.4;
//cout<<"The value of d is"<<d<<endl<<"The value of e is "<<e; 

//**********Referance Variables************
// Used to call one thing with various names
  //float x = 455;
  //float & y = x; 
  //cout<<x<<endl; 
  //cout<<y<<endl;

  //********TypeCasting********//
  int a=45;
  float b = 45.46;
  cout<<"The value of a is "<<(float)a<<endl;
  cout<<"The value of a is "<<float(a)<<endl;

  cout<<"The value of b is "<<(int)b<<endl;
  cout<<"The value of b is "<<int(b)<<endl;
int c = int(b);

cout<<"The expression is "<<a + b<<endl;
cout<<"The expression is "<<a + int(b)<<endl;
cout<<"The expression is "<<a + (int)b<<endl;

return 0;    
}
