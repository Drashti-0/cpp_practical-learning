#include<iostream>
using namespace std;

class rectangel{
   private:
   double length;
   double width;

   public:

   void setdata(double l,double w){
      length = l;
      width = w;
   }

   double area(){
     return length * width;
   }

   double perimeter(){
      return 2 * (length + width);
   } 

   void display(int index){
      cout<<"Index is = "<<index<<endl;
      cout<<"Length = "<<length<<endl;
      cout<<"Width = "<<width<<endl;
      cout<<"Area is = "<<area()<<endl;
      cout<<"Perimeter is = "<<perimeter()<<endl;
      cout<<"----------------------"<<endl;
   }
};

int main(){
    rectangel rec[10];
    int choise;
    int count = 0;
    int index;
    double l,w;

    do{
        cout<<"1. Add rectangle"<<endl;
        cout<<"2. Update rectangle"<<endl;
        cout<<"3. Display rectangle"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter your choise: ";
        cin>>choise;

        if(choise == 1){
            if(count < 10){
                cout<<"Enter rectangle length and width: ";
                cin>>l>>w;
                rec[count].setdata(l,w);
                count++;
            }else{
                cout<<"Rectangle limit full!"<<endl;
            }
        }

        else if(choise == 2){
            cout<<"Enter index to update: ";
            cin>>index;
            if(index >= 0 && index < count){
                cout<<"Enter new length and width: ";
                cin>>l>>w;
                rec[index].setdata(l,w);
            }else{
                cout<<"Invalid index!"<<endl;
            }
        }

        else if(choise == 3){
            for(int i=0;i<count;i++){
                rec[i].display(i);
            }
        }

    }while(choise != 4);

    cout<<"Thank you using system !!"<<endl;
}
