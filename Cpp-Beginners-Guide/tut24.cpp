// Static Data Members & Methods.

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << " Enter the Id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << " The Id of the employee is " << id << " and this is the employee number "<<count<<endl;
    }

    static void getCount(void)
    {
        cout << " The value of count is " << count << endl;
    }
};

// Count is the static data member of class Empoyee
int Employee ::count; // Default value is zero

int main()
{
    Employee harry, rohan, lovish;

    // harry.id = 1 ;
    // harry.count = 1 ; //Cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}