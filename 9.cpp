/*A company has following details of their employees in the file 'emp.dat'
a. Emp Id
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age
Write a C++ program to read the above file. Create a new file such as Adm.dat,
Sal.dat, Pro.dat, IT.dat respectively to store the employee details according to their
department.
*/
#include <iostream>
using namespace std;
class Company
{
private:
    char EmpId[5], Name[20], Address[20], Department[11], Phone[11], Age[2];

public:
    void AddRecord()
    {
        cout << "Enter Employee ID:   ";
        cout << "Enter Name:  ";
        cout << "Enter address: ";
    }
};
int main()
{

    return 0;
}
