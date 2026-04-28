#include <iostream>
using namespace std;

class fahrenheit;

class celsius
{
    float temp;

public:
    celsius(float t = 0)
    {
        temp = t;
    }

    operator fahrenheit();

    bool operator==(celsius c)
    {
        return temp == c.temp;
    }

    float get()
    {
        return temp;
    }
};

class fahrenheit
{
    float temp;

public:
    fahrenheit(float t = 0)
    {
        temp = t;
    }

    operator celsius()
    {
        return celsius((temp - 32) * 5 / 9);
    }

    bool operator==(fahrenheit f)
    {
        return temp == f.temp;
    }

    float get()
    {
        return temp;
    }
};

celsius::operator fahrenheit()
{
    return fahrenheit((temp * 9 / 5) + 32);
}

int main()
{
    celsius c1(25), c2(30);
    fahrenheit f1, f2;

    f1 = c1;
    c1 = f2;

    cout << f1.get() << endl;
    cout << c1.get() << endl;

    if (c1 == c2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    celsius arr[3];
    arr[0] = c1;
    arr[1] = c2;
    arr[2] = celsius(10);

    for (int i = 0; i < 3; i++)
        cout << arr[i].get() << endl;

    fahrenheit q[3];
    int front = 0, rear = -1;

    q[++rear] = f1;
    q[++rear] = fahrenheit(100);
    q[++rear] = fahrenheit(32);

    while (front <= rear)
    {
        cout << q[front].get() << endl;
        front++;
    }

    return 0;
}