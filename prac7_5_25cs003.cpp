#include <iostream>
using namespace std;

class grading
{
protected:
    float marks;

public:
    grading(float m)
    {
        marks = m;
    }

    virtual char grade() = 0;
};

class ug : public grading
{
public:
    ug(float m) : grading(m) {}

    char grade()
    {
        if (marks >= 80) return 'a';
        else if (marks >= 60) return 'b';
        else if (marks >= 40) return 'c';
        else return 'f';
    }
};

class pg : public grading
{
public:
    pg(float m) : grading(m) {}

    char grade()
    {
        if (marks >= 85) return 'a';
        else if (marks >= 70) return 'b';
        else if (marks >= 50) return 'c';
        else return 'f';
    }
};

int main()
{
    grading* s[5];
    int n = 0;

    s[n++] = new ug(75);
    s[n++] = new ug(35);
    s[n++] = new pg(90);
    s[n++] = new pg(60);

    for (int i = 0; i < n; i++)
        cout << s[i]->grade() << endl;

    return 0;
}