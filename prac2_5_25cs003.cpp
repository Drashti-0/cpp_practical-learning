#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class loan
{
private:
    int loanid;
    string name;
    double totalamt;
    double interestamt;
    int tenurmonth;

public:
    loan()
    {
        loanid = 0;
        name = "person";
        totalamt = 0;
        interestamt = 0;
        tenurmonth = 0;
    }

    loan(int id, string uname, double tamt, double intamt, int utenur)
    {
        loanid = id;
        name = uname;
        totalamt = tamt;
        interestamt = intamt;
        tenurmonth = utenur;
    }
    double calculateEMI()
    {
        double r = interestamt / (12 * 100);

        int t = tenurmonth;

        double emi = (totalamt * r * pow(1 + r, t)) / (pow(1 + r, t)-1);
        return emi;
    }

    void display()
    {   
        cout << "Loan id= " << loanid<<endl;
        cout << "Loan name= " << name<<endl;
        cout << "Tootal amount = " << totalamt<<endl;
        cout << "Interest bamount = " << interestamt << "%"<<endl;
        cout << "Tenur " << tenurmonth << " Months"<<endl;
        cout << "Monthly EMI= " << calculateEMI() << endl;
    }
};

int main()
{

    loan l1;

    int id;
    string name;
    double tamt;
    double iamt;
    int tenur;

    cout << "Enter your Loan id: ";
    cin >> id;
    cin.ignore();

    cout << "Enter your loan person name: ";
    getline(cin, name);

    cout << "Enter youre acctual amount: ";
    cin >> tamt;

    cout << "Enter your interst value (in %)";
    cin >> iamt;

    cout << "Enter your tenure monthly : ";
    cin >> tenur;
    l1.display();

    l1 = loan(id, name, tamt, iamt, tenur);

    cout << "**************summry*******************";
    l1.display();
}