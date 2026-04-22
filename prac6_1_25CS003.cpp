#include <iostream>
#include <vector>
using namespace std;

class shape {
protected:
    double radius;

public:
    void setradius(double r) {
        radius = r;
    }

    double getradius() {
        return radius;
    }
};

class circle : public shape {
public:
    double area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    int n;
    cout << "enter number of circles: ";
    cin >> n;

    vector<circle> d;

    for(int i = 0; i < n; i++) {
        circle c;
        double r;
        cout << "enter radius: ";
        cin >> r;
        c.setradius(r);
        d.push_back(c);
    }

    cout << "areas :" << endl;
    for(int i = 0; i < d.size(); i++) {
        cout << d[i].area() << endl;
    }

    int m;
    cout << "enter number of circles for static: ";
    cin >> m;

    circle s[100];

    for(int i = 0; i < m; i++) {
        double r;
        cout << "enter radius: ";
        cin >> r;
        s[i].setradius(r);
    }

    cout << "areas (static):" << endl;
    for(int i = 0; i < m; i++) {
        cout << s[i].area() << endl;
    }

    return 0;
}