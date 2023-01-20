/*Write a C++ program to merge the two files.
 */
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string Content;
    fstream fin1("C:/FileHandlinginc++/first.txt"), fin2("C:/FileHandlinginc++/second.txt"), fout;
    fout.open("C:/FileHandlinginc++/MergedFile.txt", ios::app);
    if (!(fin1 and fin2 and fout))
        cout << "Merged Error!" << endl;
    else
    {
        do
        {
            getline(fin1, Content);
            fout << Content;
        } while (!fin1.eof());
        do
        {
            getline(fin2, Content);
            fout << Content;
        } while (!fin2.eof());

        cout << "File Merge successfully" << endl;
    }

    return 0;
}
