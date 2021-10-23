#include <iostream>
using namespace std;
class myProfile
{
public:
    string name;
    string designation;
    int age;
    string course;
    void Profile(string name, string designation, int age, string course)
    {
        cout << "Enter the userName:";
        cin >> name;
        cout << "\nEnter the designation:";
        cin >> designation;
        cout << "\n Enter the course:";
        cin >> course;
        cout << "\n Enter the age:";
        cin >> age;
        cout << name << " " << designation << " " << course << " " << age << " \n";
    }
};
int main()
{
    myProfile p1, p2;
    p1.Profile("Vikash2806", "Student", 18, "B.tech CSE");
    p2.Profile("Vikash2806", "Student", 18, "B.tech CSE");
}