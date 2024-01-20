// There are two types of header files:
// 1. Syspem Header file : It comes with the compiler.

# include <iostream>
// 2. User defined header file : The programmer writes them.
// #include "this.h" --> This will produce an error if "this.h" is not present in the current directory

 using namespace std;

   int main() {
       cout<<"This is Hello Word";
  
  return 0;
   }