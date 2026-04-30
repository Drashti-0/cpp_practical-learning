#include <iostream>
using namespace std;

int main()
{
    int a, b;

    try
    {
        if (!(cin >> a))
            throw "invalid input";

        if (!(cin >> b))
            throw "invalid input";

        if (b == 0)
            throw "divide by zero";

        cout << a / b << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}