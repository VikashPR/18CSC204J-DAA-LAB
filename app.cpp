#include <iostream>
using namespace std;
class Student : public Assingment
{
};
class Assingment
{
public:
    int num;
    void get()
    {
        cin >> num;
    }
    void display()
    {
        int count = 0;
        while (num != 0)
        {
            count++;
            num = num / 10;
        }
        cout << count;
    }
};
int main()
{
    Student obj;
    obj.get();
    obj.display();
    return 0;
}