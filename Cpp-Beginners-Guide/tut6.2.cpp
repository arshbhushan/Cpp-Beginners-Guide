# include <iostream>

 using namespace std;

   int main() {
       int a = 5 , b = 4 ;
       cout<<"Operators in c++:"<<endl;
       cout<<"Folowing are the types of operators in C++"<<endl;
       
       // Arithmetic Operators
	    
       cout<<"The value of a+b is "<<(a+b)<<endl; 
       cout<<"The value of a-b is "<<(a-b)<<endl;
       cout<<"The value of a*b is "<<(a*b)<<endl;
       cout<<"The value of a/b is "<<(a/b)<<endl;
       cout<<"The value of a%b is "<<(a%b)<<endl;
       cout<<"The value of a ++ is "<<(a++)<<endl;
       cout<<"The value of a -- is "<<(a--)<<endl;

      // Assignement Operators --> Used to assign value to variables 
      //  int a=3 , b=9 
      // char d='d';


      // Comparison operators
	   
        cout<<"The value of a == b is "<<(a==b)<<endl;
        cout<<"The value of a != b is "<<(a!=b)<<endl;
        cout<<"The value of a >= b is "<<(a>=b)<<endl;
        cout<<"The value of a <= b is "<<(a<=b)<<endl;
        cout<<"The value of a > b is  "<<(a>b)<<endl;
        cout<<"The value of a < b is  "<<(a<b)<<endl;
        
       // Logical Operators 
	   cout<<"Following are the logical operators in C++"<<endl;
	   cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b)) 
	   <<endl;
	   cout<<"The value of this logical or operator (!(a==b) && (a<b)) is:" <<(!(a==b) ||(a<b)) 
	   <<endl; 
  
  return 0;
   } 
