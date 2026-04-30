#include <iostream>
#include <cmath>
using namespace std;

class negativenumberexception
{
};

int main()
{
    float n;

    try
    {
        if (!(cin >> n))
            throw "invalid input";

        if (n < 0)
            throw negativenumberexception();

        cout << sqrt(n) << endl;
    }
    catch (negativenumberexception)
    {
        cout << "negative number not allowed" << endl;
    }
    catch (const char* msg)
    {
        cout << msg << endl;
    }

    return 0;
}