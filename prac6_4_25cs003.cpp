#include <iostream>
#include <vector>
using namespace std;

class account {
protected:
    int accno;
    double balance;
    vector<string> history;

public:
    account(int a, double b) {
        accno = a;
        balance = b;
    }

    void deposit(double amt) {
        balance += amt;
        history.push_back("deposit " + to_string(amt));
    }

    void withdraw(double amt) {
        if(balance >= amt) {
            balance -= amt;
            history.push_back("withdraw " + to_string(amt));
        }
        else {
            cout << "insufficient balance" << endl;
        }
    }

    void showhistory() {
        for(int i = 0; i < history.size(); i++) {
            cout << history[i] << endl;
        }
    }

    void undo() {
        if(history.size() == 0) return;

        string last = history.back();
        history.pop_back();

        if(last.find("deposit") != string::npos) {
            double amt = stod(last.substr(8));
            balance -= amt;
        }
        else if(last.find("withdraw") != string::npos) {
            double amt = stod(last.substr(9));
            balance += amt;
        }
    }

    void showaccount() {
        cout << "account no: " << accno << endl;
        cout << "balance: " << balance << endl;
    }

    ~account() {
    }
};

class savings : public account {
    double rate;

public:
    savings(int a, double b, double r) : account(a, b) {
        rate = r;
    }

    void addsinterest() {
        double i = balance * rate / 100;
        balance += i;
        history.push_back("interest " + to_string(i));
    }

    void show() {
        showaccount();
        cout << "rate: " << rate << endl;
    }

    ~savings() {
    }
};

class current : public account {
    double limit;

public:
    current(int a, double b, double l) : account(a, b) {
        limit = l;
    }

    void withdraw(double amt) {
        if(balance + limit >= amt) {
            balance -= amt;
            history.push_back("withdraw " + to_string(amt));
        }
        else {
            cout << "limit exceeded" << endl;
        }
    }

    void show() {
        showaccount();
        cout << "limit: " << limit << endl;
    }

    ~current() {
    }
};

int main() {
    savings s(101, 5000, 5);
    current c(102, 3000, 2000);

    s.deposit(1000);
    s.withdraw(500);
    s.addsinterest();

    c.deposit(2000);
    c.withdraw(4000);

    cout << "savings:" << endl;
    s.show();
    s.showhistory();

    cout << "undo last in savings" << endl;
    s.undo();
    s.showaccount();

    cout << endl;

    cout << "current:" << endl;
    c.show();
    c.showhistory();

    cout << "undo last in current" << endl;
    c.undo();
    c.showaccount();

    return 0;
}