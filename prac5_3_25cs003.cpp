#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    int choice;

    do {
        cout << "\n1 add item";
        cout << "\n2 view items";
        cout << "\n3 search item";
        cout << "\n4 exit";
        cout << "\nenter choice: ";
        cin >> choice;

        if(choice == 1) {
            ofstream file("inventory.txt", ios::app);

            string name;
            int quantity;
            float price;

            cout << "enter name: ";
            cin >> name;

            cout << "enter quantity: ";
            cin >> quantity;

            cout << "enter price: ";
            cin >> price;

            file << name << " " << quantity << " " << price << endl;

            file.close();
        }

        else if(choice == 2) {
            ifstream file("inventory.txt");

            string name;
            int quantity;
            float price;

            while(file >> name >> quantity >> price) {
                cout << name << " " << quantity << " " << price << endl;
            }

            file.close();
        }

        else if(choice == 3) {
            ifstream file("inventory.txt");

            string searchname;
            cout << "enter name to search: ";
            cin >> searchname;

            string name;
            int quantity;
            float price;
            int found = 0;

            while(file >> name >> quantity >> price) {
                if(name == searchname) {
                    cout << "found: " << name << " " << quantity << " " << price << endl;
                    found = 1;
                }
            }

            if(found == 0) {
                cout << "item not found";
            }

            file.close();
        }

    } while(choice != 4);

    return 0;
}