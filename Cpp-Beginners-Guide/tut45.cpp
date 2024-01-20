// Virtual Base Class

#include <iostream>
using namespace std;

/*
student-->test [Done]
student-->sports
test-->result
sports-->result
*/

class Student{
    protected:
    int roll_no;

    public:
    void set_number(int a){
        roll_no = a;
    }
    void print_number(void){
        cout<<" Your roll no is "<<roll_no<<endl;
    }

};

class Test: virtual public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1 ;
        physics = m2 ;
    } 

    void print_marks(void){
        cout<<" Your result is here: "<<endl;
        cout<<" Maths "<<maths<<endl;
        cout<<" Physics "<<physics<<endl;
    }

};

class Sports: virtual public Student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc ;  

    }
    void print_score(void){
        cout<<" Your PT score is "<<score<<endl; 
    }
};

class result : public Test , public Sports{
private :
float total ;
public:
void display(void){
    total = maths + physics + score ;
    print_number();
    print_marks();
    print_score();
    cout<<" Your total score is:  "<<total<<endl;
    }
};

int main()
{
    result arsh;
    arsh.set_number(2748);
    arsh.set_marks(66.7 , 69.7);
    arsh.set_score(9);
    arsh.display();


    return 0;
}