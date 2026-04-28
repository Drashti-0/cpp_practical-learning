#include <iostream>
using namespace std;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    float add(int a, float b)
    {
        return a + b;
    }

    float add(float a, int b)
    {
        return a + b;
    }
};

int main()
{
    calculator c;

    int r1 = c.add(5, 3);
    float r2 = c.add(2.5f, 3.5f);
    float r3 = c.add(5, 2.5f);
    float r4 = c.add(3.5f, 2);

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;

    return 0;
}