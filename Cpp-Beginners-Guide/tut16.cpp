#include<iostream>
using namespace std;


//call by value

int sum(int a, int b){
  int c= a+b;
  return c;
}

//This will not swap a and b

//{

//void swap(int a, int b){ //temp a b
 //int temp=a;             //4    4 5
 //a=b;                     //4    5 5
                         //4    5 4  
 //b=temp;

//}


//Call by reference using pointers

//{
   // void swapPointer(int* a, int* b){ //temp a b
 //int temp=*a;             //4    4 5
 //*a=*b;                     //4    5 5
                         //4    5 4  
 //*b=temp;

//}



//Call by reference using c++ reference Variables



    void swapReferenceVar(int &a, int &b){ //temp a b
 int temp=a;             //4    4 5
 a=b;                     //4    5 5
                         //4    5 4  
 b=temp;


}
 
int main(){
    int a=4,b=5;
    //cout<<"The sum of 4 and 5 is "<<(sum4,5);
  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
  //swap(a,b);//This will,not swap a and b
  //SwapPointer(&a , &b); // This will swap a and b using pointer reference
  //swapPointerVar(&a , &b); // This will swap a and b using pointer variables
  swapReferenceVar(a,b);//766;  //This will swap a andb using reference variables
  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl; 
return 0;
}