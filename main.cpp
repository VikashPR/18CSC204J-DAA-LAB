#include <iostream>
using namespace std;
class myProfile
{
public:
    string name;
    string designation;
    int age;
    string course;
};
int main()
{
    myProfile p1;
    cout << "Enter the userName:";
    cin >> p1.name;
    cout << "\nEnter the designation:";
    cin >> p1.designation;
    cout << "\n Enter the course:";
    cin >> p1.course;
    cout << "\n Enter the age:";
    cin >> p1.age;
    cout << p1.name << " " << p1.designation << " " << p1.course << " " << p1.age << " ";
}