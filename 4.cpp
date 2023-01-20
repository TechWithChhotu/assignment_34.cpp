/*Write a program to copy the contents of one text file to another while changing the
case of every alphabet.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fin, fout;
    char Ch = '0';
    fin.open("C:/FileHandlinginc++/First.txt");
    fout.open("C:/FileHandlinginc++/second.txt", ios::app);

    if (!(fin and fout))
        cout << "Error! File contents are not copyed " << endl;
    else
    {
        do
        {
            fin >> Ch;
            toupper(Ch);
            fout << Ch;
        } while (!fin.eof());
        cout << "\nFile contents are copyed successfully" << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
