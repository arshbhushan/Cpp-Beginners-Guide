// Maps
// Map is an assocviative array

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Naruto"] = 2;
    marksMap["Kakashi"] = 89;
    marksMap["Pain"] = 75;

    // To insert in
    marksMap.insert({{"Kozume", 59}, {"Sakura", 2}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    // How to find the size of the map
    cout << " The size is: " << marksMap.size() << endl;

    return 0;
}