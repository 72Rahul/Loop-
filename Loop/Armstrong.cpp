//WAP to check the number is Armstrong number or not.

#include<iostream>
using namespace std;
int main(){
    int n, lastdigit, sum = 0;
    cout<<"Enter the number : ";
    cin>>n;
    int tem =n;
   
    while(n>0){
        lastdigit = n%10;
        sum = lastdigit*lastdigit*lastdigit + sum;
        n = n/10;
    }
    if(tem == sum){
    cout<<"Armstrong number";
    }
    else{
        cout<<"Not Amstrong Number";
    }
    return 0;
}