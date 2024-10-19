
//Write a program to display all factors of a number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factor of "<<n<<endl;
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            cout<<i<<"\t";
        }
    }
    return 0;
}