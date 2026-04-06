#include<iostream>
using namespace std;

class account{

    private:
    int accountnumber;
    string name;
    double balance;

    public:
    static int totalaccount;

    //counstructir defualt
    account(int accno,string nname,double bal){
        accountnumber=accno;
        name=nname;
        balance=bal;
        totalaccount++;  
    }

    int getaccountnumber(){
        return accountnumber;
    }

    void updatename(string upname){
        name=upname;
    }
    
    double getbalance(){
        return balance;
    }

    void deposite(double amount){
        balance+=amount;
    }

    bool withdraw(double amount){
        if(amount>balance){
            cout<<"Insufficient Balance! "<<endl;
            return false;  
        }

        balance-=amount;
        return true;
    }

    void display(){
cout<<endl;
cout<<"--------------------------------------------"<<endl;
        cout<<"Account number: "<<getaccountnumber()<<endl;
        cout<<"Accounter name: "<<name<<endl;
        cout<<"Current balance: "<<balance<<endl;
    }

};

int account::totalaccount=0;

account* findaccount(account* accounts[],int count,int accno){
    for(int i=0;i<count;i++){
        if(accounts[i]->getaccountnumber()==accno){
            return accounts[i];
        }
    }
    return NULL;
}

void tmoney(account* acccounts[],int count){
    int from_acc;
    int to_acc;
    double amount;

    cout<<"Enter from account number: ";
    cin>>from_acc;

    cout<<"Enter to account number: ";
    cin>>to_acc;

    cout<<"Enter amount: ";
    cin>>amount;

    account* sender=findaccount(acccounts,count,from_acc);
    account* reciver = findaccount(acccounts,count,to_acc);

    if(sender==NULL || reciver==NULL){
        cout<<"Invalied account number: "<<endl;
        return;
    }

    if(sender->withdraw(amount)){
        // sender ma paisa hase te mathi withdraW thase...
        reciver->deposite(amount);
        // reciver ma jama thase te kyare jyare withdraw thya hse tyare j deposite thase...........

        cout<<"Transfer successfully"<<endl;
    }
}

int main(){
        
    const int max=100;
    account* accounts[max];
    int count =0;
    int choice;

    do{

    cout<<"1.add account: "<<endl;
    cout<<"2.update name: "<<endl;
    cout<<"3.transfermoney: "<<endl;
    cout<<"4.display all data: "<<endl;
    cout<<"5.how many account: "<<endl;
    cout<<"0.Exit: "<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice==1){
        cout<<"Add account process: "<<endl;
        int accno;
        string name;
        double bal;

        cout<<"Enter accounmt number: ";
        cin>>accno;

        cin.ignore();
        cout<<"Enter accounter name: ";
        getline(cin,name);

        cout<<"Enter Balance: ";
        cin>>bal;

        accounts[count]=new account(accno,name,bal);
        count++;
    }

    else if(choice==2){
        int accno;

        cout<<"Enter your acount number: ";
        cin>>accno;

        account* acc=findaccount(accounts,count,accno);

        if(acc!= NULL){
            string name;
cin.ignore();
            getline(cin,name);
            acc->updatename(name);
        }
    }

    else if(choice==3){
        tmoney(accounts,count);
    }

    else if(choice==4){
        int accno;

        cout<<"Enter account number: ";
        cin>>accno;

        account* acc=findaccount(accounts,count,accno);

        if(acc!=NULL){
            acc->display();
        }
    }

    else if(choice==5){
        cout<<count<<endl;
    }

    }while(choice!=0);

    for(int i=0;i<count;i++){
        delete accounts[i];   
    }

}