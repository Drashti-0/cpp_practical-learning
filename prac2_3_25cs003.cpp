#include <iostream>
using namespace std;

class bank {
private:
    int id;
    string name;
    double bal;

public:
//without parameter syntex
    bank() {
        id = 3;
        name = "drashti";
        bal = 10000;
    }
//parameter syntex
    bank(int uid, string uname, double ubal) {
        id = uid;
        name = uname;
        if (ubal >= 0)
            bal = ubal;
        else
            bal = 0;
    }

    void depositemoney(double amt) {
        if (amt <= 0) {
            cout << "invalid deposit amount" << endl;
        } 
        else if(bal<amt){
            cout<<"ERROR"<<endl;
        }
        else {
            bal = bal + amt;
            cout << "money deposited successfully" << endl;
        }
    }

    void withdraw(double amt) {
        if (amt <= 0) {
            cout<< "invalid withdrawal amount" <<endl;
        } else if (amt > bal) {
            cout<<"amount greater than balance" <<endl;
        } else {
            bal = bal - amt;
            cout << "withdrawal successful" <<endl;
        }
    }

    void display() {
        cout << "account id: " <<id<<endl;
        cout << "name: " <<name<<endl;
        cout << "balance: " <<bal<<endl;
        cout << "----" << endl;
    }
};

int main() {
    bank b1;
    bank b2(12, "vishva", 5000);

    b1.depositemoney(2000);
    b1.withdraw(1500);

    b1.withdraw(20000);
        b1.display();

    b2.depositemoney(1000);
    b2.display();

    return 0;
}