#include<iostream>
using namespace std;

class student{

    private:
    int id;
    float m1,m2,m3;
    string name;
    
    public:
    student(){
        id=0;
        name="shruti";
        m1=m2=m3=50;
    }

    student(int uid,float um1,float um2,float um3,string uname){
        id=uid;
        m1=um1;
        m2=um2;
        m3=um3;
        name=uname;

    }

   float avg() {
        return (m1 + m2 + m3) / 3;
    }

    void display(){
        cout<<"id = "<<id<<endl<<"sub1 marks = "<<m1<<"sub2 mark = "<<m2<<endl<<"Sub3 mark = "<<m3<<endl<<"name = "<<endl;
        cout<<"Avrage mark = "<<avg()<<endl;
    }

};

int main(){

student st[3];

st[0]=student();

int roll_no;
string name;
float x,y,z;

for(int i=0;i<3;i++){
    cout<<"Enter student details"<<i+1<<endl;
    cout<<"Roll no. ";
    cin>>roll_no;
    cin.ignore();
    getline(cin,name);
    cout<<"Enter your marks: ";
    cin>> x>>y>>z;

     st[i] = student(roll_no, x, y, z, name);
}

for (int i = 0; i < 3; i++) {
        st[i].display();
    }






}