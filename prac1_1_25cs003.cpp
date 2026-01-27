#include <iostream>
using namespace std;

class wallet
{

private:
    int id;
    string name;
    double balance;

public:
    void loadmoney(double amt)
    { balance=balance+amt;
    }
    void tranfermoney(wallet &x,double amt)
    {
        if(balance>amt){
            balance=balance-amt;
            x.balance=balance+amt;
        }

        else{
            cout<<"Error"<<endl;
        }
    }

    void disdata()
    {
        cout << "Id =" << id << endl
             << "user name= " << name << endl
             << "user balance" << balance << endl;
    }
    void setdata(int uid, string uname, double uamt){
        id=uid;
        name=uname;
        balance=uamt;

    }
};
int main()
{
    wallet w1,w2;

    w1.setdata(1,"drashti",5000);
    w1.disdata();
    w2.tranfermoney(w1,1000);
    w2.disdata();
}