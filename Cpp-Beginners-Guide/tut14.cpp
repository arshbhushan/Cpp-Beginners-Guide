#include<iostream>
using namespace std;

typedef struct employee
{

  int eId;
  char fav;
  float salary;


    
}ep;


  int eId;
  char fav;
  float salary;


int main(){
ep harry;
ep arsh;
ep khushi;
harry.eId=1;
harry.fav= 'c';
harry.salary=12000000;


cout<<"the value is "<<harry.eId<<endl;
cout<<"the value is "<<harry.fav<<endl;
cout<<"the value is "<<harry.salary<<endl;

cout<<"arsh"<<endl;

arsh.eId=2;
arsh.fav='b';
arsh.salary=10;



cout<<"the value is "<<arsh.eId<<endl;
cout<<"the value is "<<arsh.fav<<endl;
cout<<"the value is "<<arsh.salary<<endl;


cout<<"khushi"<<endl;

khushi.eId=2;
khushi.fav='a';
khushi.salary=15000000000000;



cout<<"the value is "<<khushi.eId<<endl;
cout<<"the value is "<<khushi.fav<<endl;
cout<<"the value is "<<khushi.salary<<endl;

return 0;
}