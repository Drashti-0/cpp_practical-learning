#include <iostream>
using namespace std;


//https://sites.google.com/charusat.ac.in/ceuc102-oopc/lab-manual-practical-list


class library
{
private:
    int id;
    string name;
    string author;
    int acopy;

public:
    void addbook(int uid,string uname,string uauthor, int uacopy)
    {  
        id=uid;
        name=uname;
        author=uauthor;
        acopy=uacopy;
    }

    void issuebook(int uid,int buy)
    {   id=uid;
        acopy=acopy-buy;
    }

    void returnbook(int uid,int r)
    {    id=uid;
         acopy=acopy+r;
    }

    void totalbook()
    {
        cout << "Book id = " <<id<< endl
             << "Book Name = " <<name<< endl
             << "Book Author name = " <<author<< endl
             << "Books available copies = " <<acopy<< endl;
    }

    void setdata(int uid,string uname,string uauthor, int uacopy)
    {
        id=uid;
        name=uname;
        author=uauthor;
        acopy=uacopy;
    }
};

int main()
{   library l1;

    l1.setdata(25,"rd sharma","harihansh",5);
    l1.totalbook();

    l1.addbook(5,"abhi ","xses",10);
    l1.totalbook();

    l1.issuebook(4,2);
    l1.totalbook();

    l1.returnbook(2,4);
    l1.totalbook();

}