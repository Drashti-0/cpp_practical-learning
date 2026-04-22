#include <iostream>
#include <iomanip>
using namespace std;

ostream& currency(ostream& out) {
    out << "rs ";
    return out;
}

int main() {
    string name[5] = {"ram", "shyam", "rita", "geeta", "mohan"};
    int marks[5] = {85, 90, 78, 88, 92};
    float fees[5] = {1200.5, 1500.75, 1100.25, 1300.0, 1400.6};

    cout << setw(10) << "name"
         << setw(10) << "marks"
         << setw(15) << "fees" << endl;

    for(int i = 0; i < 5; i++) {
        cout << setw(10) << name[i]
             << setw(10) << marks[i]
             << setw(10) << currency << fixed << setprecision(2) << fees[i]
             << endl;
    }

    return 0;
}