#include <iostream>
using namespace std;

class shape
{
public:
    virtual float area()
    {
        return 0;
    }
};

class rectangle : public shape
{
    float l, w;

public:
    rectangle(float a, float b)
    {
        l = a;
        w = b;
    }

    float area()
    {
        return l * w;
    }
};

class circle : public shape
{
    float r;

public:
    circle(float a)
    {
        r = a;
    }

    float area()
    {
        return 3.14 * r * r;
    }
};

int main()
{
    shape* s;

    rectangle r1(5, 3);
    circle c1(4);

    s = &r1;
    cout << s->area() << endl;

    s = &c1;
    cout << s->area() << endl;

    shape* dyn[5];
    int n = 0;

    dyn[n++] = new rectangle(2, 3);
    dyn[n++] = new circle(2);
    dyn[n++] = new rectangle(4, 5);

    for (int i = 0; i < n; i++)
        cout << dyn[i]->area() << endl;

    shape* stat[3];

    stat[0] = &r1;
    stat[1] = &c1;
    stat[2] = new circle(3);

    for (int i = 0; i < 3; i++)
        cout << stat[i]->area() << endl;

    return 0;
}