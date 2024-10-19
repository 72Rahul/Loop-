//WAP to print the number in reverse order.

#include<iostream>
using namespace std;
int main(){
    int n, tem, lastdigit, sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    tem=n;
    while(n>0){
        lastdigit = n%10;
        sum = sum*10 + lastdigit;
        n = n/10;
    }
    cout<<"Reverse number is "<<sum;
    return 0;
}