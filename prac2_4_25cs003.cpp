#include <iostream>
using namespace std;

class store
{
private:
    int id;
    string name;
    float price;
    int stock;

public:
    store()
    {
        id = 003;
        name="Drashti";
        price = 500;
        stock = 5;
    }

    store(int uid,string uname, float uprice, int ustock)
    {
        id = uid;
        name = uname;
        price = uprice;
        stock = ustock;
    }

    void incresing(int add)
    {
        cout << "shipment add iteam :" << endl;
        stock = stock + add;
    }

    void decresing(int qty)
    {
        if(qty<0){
            cout<<"ERROR"<<endl;
        }
        else if(qty>>stock){
            cout<<"This iteam are less then "<<endl;
        }
        else{
        cout << "shipment loss the iteam: " << endl;
        stock = stock - qty;
        }
    }

    void display()
    {
        cout << "Iteam ID =" << id << endl
             << "Iteam Name = " << endl
             << "Iteam price = " << endl
             << "Iteam Stock =" << endl;
    }
};
    int main()
    {
        store s1[3];

        s1[0]=store();
        int id;
        string name;
        float price;
        int stock;

        for(int i=1;i<3;i++){
               cout<<" iteam = "<<i<<endl;
               cout<<"Enter iteam id: ";
               cin>>id;
               cin.ignore();
               cout<<"Enter the name: ";
               getline(cin,name);

               cout<<"Enter the Iteam price: ";
               cin>>price;

               cout<<"Enter the stock : ";
               cin>>stock;

               s1[i]=store(id,name,price,stock);
        }
       

    s1[1].incresing(2);
    s1[2].incresing(4);
    s1[1].decresing(5);
    s1[2].decresing(4);


    for(int i=0;i<3;i++){
        s1[i].display();
    }

    }