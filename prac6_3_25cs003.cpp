#include <iostream>
#include <vector>
using namespace std;

class fuel {
protected:
    string ftype;

public:
    fuel(string f) {
        ftype = f;
    }

    void showfuel() {
        cout << "fuel: " << ftype << endl;
    }
};

class brand {
protected:
    string bname;

public:
    brand(string b) {
        bname = b;
    }

    void showbrand() {
        cout << "brand: " << bname << endl;
    }
};

class car : public fuel, public brand {
    int id;

public:
    car() : fuel("none"), brand("none") {
        id = 0;
    }

    car(string f, string b, int i) : fuel(f), brand(b) {
        id = i;
    }

    int getid() {
        return id;
    }

    void showcar() {
        cout << "id: " << id << endl;
        showbrand();
        showfuel();
    }
};

int main() {
    int n;
    cout << "enter number of cars: ";
    cin >> n;

    vector<car> v;

    for(int i = 0; i < n; i++) {
        string f, b;
        int id;

        cout << "enter id fuel brand: ";
        cin >> id >> f >> b;

        car c(f, b, id);
        v.push_back(c);
    }

    cout << "all cars:" << endl;
    for(int i = 0; i < v.size(); i++) {
        v[i].showcar();
        cout << endl;
    }

    int searchid;
    cout << "enter id to search: ";
    cin >> searchid;

    for(int i = 0; i < v.size(); i++) {
        if(v[i].getid() == searchid) {
            cout << "found:" << endl;
            v[i].showcar();
        }
    }

    int m;
    cout << "enter number for static: ";
    cin >> m;

    car s[100] = {
        car("petrol","toyota",1),
        car("diesel","ford",2),
        car("electric","tesla",3)
    };

    cout << "static data:" << endl;
    for(int i = 0; i < m; i++) {
        s[i].showcar();
        cout << endl;
    }

    return 0;
}