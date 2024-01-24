#include <iostream>
using namespace std;
class rectangle
{
public:
    int length, breadth, height;
    int cp, ca, cu;
    void calperi(int l, int b)
    {
        length = l;
        breadth = b;
        cp = 2 * (l + b);
    }
    void calarea(int l, int b)
    {
        length = l;
        breadth = b;
        ca = l * b;
    }
    void calvolume(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
        cu = l * b * h;
    }
    void display()
    {
        cout << "The perimeter is : \n"
             << cp << "\n";
        cout << "The area is : \n"
             << ca << "\n";
        cout << "The volume is : \n"
             << cu << "\n";
    }
};
int main()
{
    rectangle r;
    r.calperi(10, 3);
    r.calarea(10, 3);
    r.calvolume(10, 3, 5);
    r.display();
}
