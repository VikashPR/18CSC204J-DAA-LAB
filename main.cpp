#include <iostream>
using namespace std;
class Triangle
{
public:
    int length, breath, height;
    // Constructor
    Triangle(int l, int b, int h)
    {
        length = l;
        breath = b;
        height = h;
    }
    void printAP()
    {
        cout << "Area: " << length * breath * height << "\n";
        cout << "Perimeter: " << (length + height + breath) / 2 << "\n";
    }
};
int main()
{
    Triangle t(4, 6, 10);
    t.printAP();

    return 0;
}