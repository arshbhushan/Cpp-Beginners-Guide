// files--> #include<fstream>
// getline(in , st2);

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st2 = " Arsh file";
    // opening files using Constructorsand writing it.

    // ofstream out("sample60.txt"); //Write operation
    // out<<st;

    ////opening files using Constructorsand reading it.
    ifstream in("sample60b.txt");
    // in>>st2;
    getline(in, st2);
    getline(in, st2);
    cout << st2;

    return 0;
}