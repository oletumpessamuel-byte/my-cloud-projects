#include <iostream>
using namespace std;

class ODD
{
public:
    int x;
    void read()
    {
        cout << "Enter a integer = "<<endl;
        cin >> x;
    }

    void check()
    {
        if (x % 2 == 0)
            cout << "the integer is even"<<endl;
        else
            cout << "the integer is odd"<<endl;
    }
};

int main()
{
    ODD shape;
    shape.read();
    shape.check();
    return 0;
}
