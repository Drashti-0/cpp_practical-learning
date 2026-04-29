#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point()
    {
        x = 0;
        y = 0;
    }

    point(int a, int b)
    {
        x = a;
        y = b;
    }


    point* move(int dx, int dy)
    {
        x = x + dx;
        y = y + dy;
        return this;
    }

    void display()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

void update(point *p)
{
    p->move(5, 5);   
}

int main()
{
    point p(1, 2);

    cout << "original point:\n";
    p.display();

    p.move(2, 3)->move(-1, 4);

    cout << "after move:\n";
    p.display();

    update(&p);

    cout << "after update function:\n";
    p.display();

    return 0;
}