include<iostream>
using namespace std;

class salary
{

    string name;
    int basicsalary;
    int bonusamount;
    int totalsalary;

public :
    salary()
    {
        name = "abc";
        basicsalary = 0;
    bonusamount = 0;



    }

    salary(string n,int bs,int ba)
    {

        name = n;
        basicsalary = bs;
        bonusamount = ba;


    }
    inline int salarycal()
    {
        totalsalary = basicsalary + bonusamount;
        return totalsalary;
    }


    void display()
    {

        cout<<"********DETAILS***********"<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"BASIC SALARY : "<<basicsalary<<endl;
        cout<<"BONUS AMOUNT : "<<bonusamount<<endl;
        cout<<"TOTAL SALARY : "<<totalsalary<<endl;

    }

};

int main()
{

    //salary s[2];
    string name;
    int basicsalary;
    int bonusamount;
    //salary s3;
    salary *s = new salary[1];
    for(int i=0;i<1;i++)
    {
        cout<<"Entering salary details of -- "<<(i+1)<<" account"<<endl;
        cin>>name;
        cin>>basicsalary;
        cin>>bonusamount;
        s[i] = salary(name, basicsalary, bonusamount);
s[i].display();
    }
salary  s1;
salary sb("dhruti",200000,500);

    sb.salarycal();
    sb.display();

    s1.salarycal();
    s1.display();
}include<iostream>
using namespace std;

class salary
{

    string name;
    int basicsalary;
    int bonusamount;
    int totalsalary;

public :
    salary()
    {
        name = "abc";
        basicsalary = 0;
    bonusamount = 0;



    }

    salary(string n,int bs,int ba)
    {

        name = n;
        basicsalary = bs;
        bonusamount = ba;


    }
    inline int salarycal()
    {
        totalsalary = basicsalary + bonusamount;
        return totalsalary;
    }


    void display()
    {

        cout<<"********DETAILS***********"<<endl;
        cout<<"NAME : "<<name<<endl;
        cout<<"BASIC SALARY : "<<basicsalary<<endl;
        cout<<"BONUS AMOUNT : "<<bonusamount<<endl;
        cout<<"TOTAL SALARY : "<<totalsalary<<endl;

    }

};

int main()
{

    //salary s[2];
    string name;
    int basicsalary;
    int bonusamount;
    //salary s3;
    salary *s = new salary[1];
    for(int i=0;i<1;i++)
    {
        cout<<"Entering salary details of -- "<<(i+1)<<" account"<<endl;
        cin>>name;
        cin>>basicsalary;
        cin>>bonusamount;
        s[i] = salary(name, basicsalary, bonusamount);
s[i].display();
    }
salary  s1;
salary sb("dhruti",200000,500);

    sb.salarycal();
    sb.display();

    s1.salarycal();
    s1.display();
}