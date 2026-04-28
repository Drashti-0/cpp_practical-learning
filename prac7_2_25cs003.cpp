#include <iostream>
using namespace std;

class complex
{
    float real, imag;

public:
    complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    complex operator+(complex c)
    {
        return complex(real + c.real, imag + c.imag);
    }

    complex operator-(complex c)
    {
        return complex(real - c.real, imag - c.imag);
    }

    void show()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    complex c1(3, 2), c2(1, 4);

    complex c3 = c1 + c2;
    complex c4 = c1 - c2;

    c3.show();
    c4.show();

    return 0;
}