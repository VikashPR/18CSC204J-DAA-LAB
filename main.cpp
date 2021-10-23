#include <iostream>
using namespace std;
class myProfile
{
public:
    void Profile(string name, string designation, int age, string course)
    {
        cout << "Enter the userName:";
        cin >> name;
        cout << "\nEnter the designation:";
        cin >> designation;
        cout << "\nEnter the course:";
        cin >> course;
        cout << "\nEnter the age:";
        cin >> age;
        cout << "\n"
             << name << " " << designation << " " << course << " " << age << "\n\n";
    }
};
int main()
{
    myProfile p1, p2;
    p1.Profile("Vikash2806", "Student", 18, "B.tech CSE");
    p2.Profile("Vikash2806", "Student", 18, "B.tech CSE");
}