//Vectors and it's types 

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << " Displaying this vector " << endl;
    for (int i = 0; i < v.size(); i++)

    {
        cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{

    // vector<int> vec1;
    // int element, size;
    // cout << " Enter the size of your vector" << endl;
    // cin >> size;
    //
    // for (int i = 0; i < size; i++)
    //{
    //     cout << " Enter element to add to this vector " << endl;
    //    cin >> element;
    //    vec1.push_back(element);
    //}

    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter + 2, 566);
    // display(vec1);

    // WAYS TO CREATE A VECTOR

    // vector<int> vec1;        // zero length integer
    // vector<char> vec2(4);    // 4-element char vector
    // vector<char> vec3(vec2); // 4-element char vector from vec2
    // vec2.push_back('5');

    vector<int> vec4(4, 13); // 6-element vector 0f 3s
    display(vec4);
    cout << vec4.size();

    int element, size = 5;

    return 0;
}