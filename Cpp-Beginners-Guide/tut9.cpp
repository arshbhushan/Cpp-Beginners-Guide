#include<iostream>
using namespace std;

int main(){
//cout<<"This is tutorial 9";
//C++ Control Structures , If else


int age;
cout<<"Tell me your age "<<endl;
cin>>age;

//if((age<18)&&(age>0)){
//cout<<"Can't come"<<endl;
//}
//else if(age==18){
//cout<<"Can come"<<endl;
//}
//else{
//    cout<<"You Can Come"<<endl;
//}



   //C++ Control Structures Switch case structures
    
    switch (age)
{
    case 18:
    cout<<"You are 18"<<endl;
     break;
     case 22:
    cout<<"You are 22"<<endl;
    case 2:
    cout<<"You are 2"<<endl;
    break;
    default:
    cout<<"No special Cases"<<endl;
    break;



    }
    return 0;
}