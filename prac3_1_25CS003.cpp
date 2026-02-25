#include <iostream>
using namespace std;

// employ* emp= new employ[n];
// first interger add thy gyo hoy ane pchi string hoy to ignore lkhvanu dairect string hoy to jruri nthi

class employee
{
private:
    string name;
    double basicsalary;
    double bonus;

public:
    // defult counstructor+parameterized counstructor....
    employee(string n = "Drashti", double basic = 0.0, double b = 5000)
    {
        name = n;
        basicsalary = basic;
        bonus = b;
    }

    double calculatesalary()
    {
        return basicsalary + bonus;
    }

    void display()
    {
        cout << "Employe name = " << name << endl;
        cout << "Employee basic salary = " << basicsalary << endl;
        cout << "Employee Bonus = " << bonus << endl;
        cout << "Employee TOtalsalary = " << calculatesalary() << endl;
        cout << "----------------" << endl;
    }
};

int main()
{
    int n;
    cout << "Enter your Employee member count: " << endl;
    cin >> n;

    employee *emp = new employee[n];

    string name;
    double basicsalary;
    double bonus;
    char choice;

    for (int i = 0; i < n; i++)
    {
        cout << "Employe : " << i + 1 << endl;

        cout << "Enter your Employee name: " << endl;
        cin >> name;

        cout << "Enter your Employee Basic salary: " << endl;
        cin >> basicsalary;

        cout << "You can Change your bonus integer:(yes or no) " << endl;
        cin >> choice;

        if (choice == 'y' || choice == 'Y')
        {
            cout << "Enter your bonus: ";
            cin >> bonus;
            emp[i] = employee(name, basicsalary, bonus);
        }
        else
        {
            emp[i] = employee(name, basicsalary);
        }
    }
    cout << "\n------ Employee Details -------" << endl;
    for (int i = 0; i < n; i++)
    {
        emp[i].display();
    }
    // free memory
    delete[] emp;
}