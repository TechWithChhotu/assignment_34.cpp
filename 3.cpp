/*Write a C++ program to open an output file 'a.txt' and append data to it.
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("C:/FileHandlinginc++/First.txt", ios::app);
    fout << "\nHello, How are you";
    fout.close();
    return 0;
}
