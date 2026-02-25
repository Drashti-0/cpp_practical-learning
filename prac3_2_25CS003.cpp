#include<iostream>
using namespace std;


//recurssive
int recurssivesum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }

    else
    {
        return arr[n-1]+recurssivesum(arr,n-1);
    }

}

int iterativesum(int arr[],int n)
{
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    return sum;
}



int main()
{

    int n;
    cout<<"Enter your array size: "<<endl;
    cin>>n;

    int *arr= new int[n];

    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<"sum using recurssion: "<<
    recurssivesum(arr,n)<<endl;

    cout<<"Sum using iterative: "<<
    iterativesum(arr,n)<<endl;
  delete[] arr;

}