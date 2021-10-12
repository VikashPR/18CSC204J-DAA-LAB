#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string Name;
    string Company;
    int Age;
    void intro()
    {
        cout << "Yo " << Name << " Wasupp ?\n";
        cout << "Age - " << Age << "\n";
        cout << "Company - " << Company << "\n";
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee1 = Employee("Vikash", "Webilicious", 18);
    employee1.intro();

    return 0;
}