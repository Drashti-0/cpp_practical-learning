#include<iostream>
using namespace std;

class person{

    protected:
    string name;
    int age;

public:
    void PersonData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;
    }

};
class student : public person{
    private:
    int roll;
    float marks;

    public:
    void StudentData()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Marks: ";
        cin >> marks;
    }
    void result(){
        if(marks>=80){
            cout<<":: A GRADE :: "<<endl;
        }
        else if(marks >=60){
            cout<<" ::B GRADE :: "<<endl;
        }
        else{
            cout<<"::  FAIL  ::"<<endl;
        }
    }
    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name  : " << name << endl;   
        cout << "Age   : " << age << endl;    
        cout << "Roll  : " << roll << endl;
        cout << "Marks : " << marks << endl;
       result();
    }

};
int main(){

    student s1;
    s1.PersonData();
    s1.StudentData();
    s1.display();
}