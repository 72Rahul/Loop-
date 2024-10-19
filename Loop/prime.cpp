// WAP to check the number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"Enter the starting number: ";
    cin>>n;
    cout<<"Enter the end number: ";
    cin>>m;
    int i, j;
    for(j = n; j<=m; j++){
    for( i = 2; i<=j; i++){
        if(j%i==0){
            break;
        }  
        
    }
     if(i==j){
     cout<<"Prime Number is "<<j<<"\n";
    }
    }
   
    return 0;
    //  int n;
    // cout<<"Enter the number: ";
    // cin>>n;
    // int i;
    // int flag = 0;
    // for( i = 2; i<n; i++){
    //     if(n%i==0){
    //         flag=1;
    //         break;
    //     }  
        
    // }
    //  if(flag==0){
    //  cout<<"Prime Number\n";
    // }
    // else {
    //     cout<<"Non Prime Number\n";
    // }
   
    // return 0;
}