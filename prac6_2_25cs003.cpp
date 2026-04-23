#include <iostream>
#include <vector>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    person() {
        name = "none";
        age = 0;
    }

    person(string n, int a) {
        name = n;
        age = a;
    }

    void showperson() {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
    }
};

class employee : public person {
protected:
    int id;

public:
    employee() : person() {
        id = 0;
    }

    employee(string n, int a, int i) : person(n, a) {
        id = i;
    }

    void showemployee() {
        showperson();
        cout << "id: " << id << endl;
    }

    int getid() {
        return id;
    }
};

class manager : public employee {
    string dept;

public:
    manager() : employee() {
        dept = "none";
    }

    manager(string n, int a, int i, string d) : employee(n, a, i) {
        dept = d;
    }

    void showmanager() {
        showemployee();
        cout << "department: " << dept << endl;
    }
};

int main() {
    int n;
    cout << "enter number of managers: ";
    cin >> n;

    vector<manager> v;

    for(int i = 0; i < n; i++) {
        string name, dept;
        int age, id;

        cout << "enter name age id department: ";
        cin >> name >> age >> id >> dept;

        manager m(name, age, id, dept);
        v.push_back(m);
    }

    cout << "all managers:" << endl;
    for(int i = 0; i < v.size(); i++) {
        v[i].showmanager();
        cout << endl;
    }

    int searchid;
    cout << "enter id to search: ";
    cin >> searchid;

    for(int i = 0; i < v.size(); i++) {
        if(v[i].getid() == searchid) {
            cout << "found:" << endl;
            v[i].showmanager();
        }
    }

    int m;
    cout << "enter number for static: ";
    cin >> m;

    manager s[100];

    s[0] = manager("a",20,1,"hr");
    s[1] = manager("b",25,2,"it");
    s[2] = manager("c",30,3,"sales");

    cout << "static data:" << endl;
    for(int i = 0; i < m && i < 3; i++) {
        s[i].showmanager();
        cout << endl;
    }

    return 0;
}