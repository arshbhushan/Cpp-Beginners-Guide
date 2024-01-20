// Using while loop in file I/O

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample60.txt");
    out << "this is me" << endl;
    out << "this is mine" << endl;
    out << "this is a cat" << endl;
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60b.txt");
    // in>>st>>st2>>
    // cout<<st<<st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}