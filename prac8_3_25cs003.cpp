#include <iostream>
using namespace std;

string logarr[50];
int idx = 0;

void addlog(string s)
{
    logarr[idx++] = s;
}

class bankaccount
{
    float balance;

public:
    bankaccount(float b = 0)
    {
        balance = b;
    }

    void deposit(float amt)
    {
        addlog("enter deposit");

        if (amt <= 0)
            throw "invalid deposit";

        balance += amt;

        addlog("exit deposit");
    }

    void withdraw(float amt)
    {
        addlog("enter withdraw");

        if (amt > balance)
            throw "insufficient balance";

        balance -= amt;

        addlog("exit withdraw");
    }

    float get()
    {
        return balance;
    }
};

void transaction(bankaccount &b)
{
    addlog("enter transaction");

    b.deposit(100);
    b.withdraw(500);

    addlog("exit transaction");
}

int main()
{
    bankaccount b(200);

    try
    {
        addlog("enter main");

        transaction(b);

        addlog("exit main");
    }
    catch (const char* msg)
    {
        addlog("exception caught");
        cout << msg << endl;
    }

    cout << "logs:" << endl;

    for (int i = 0; i < idx; i++)
        cout << logarr[i] << endl;

    return 0;
}