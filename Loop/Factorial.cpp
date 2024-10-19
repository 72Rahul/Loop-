
//Write a program to find the factorial of a given number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int fact =1;
    for(int i = 1; i<=n; i++){
    fact *=i;
    }
    cout<<"The factorial is "<<fact<<endl;
    return 0;
}