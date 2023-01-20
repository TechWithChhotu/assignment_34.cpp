/*Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    try
    {
        fout.open("C:/FileHandlinginc++/First.txt");
        if (!fout)
            throw "Error! file is not created or not able to open";
        cout << "File created successfully" << endl;
        fout << "File created successfully";
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    fout.close();
    return 0;
}
