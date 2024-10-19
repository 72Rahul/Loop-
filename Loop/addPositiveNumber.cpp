//Program to add only positive numbers.
#include<iostream>  
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int sum = 0;
    while(n >=0){
        sum+=n;
        cout<<"Enter the number : ";
        cin>>n;

    }
    cout<<"\nSum is "<<sum;
}