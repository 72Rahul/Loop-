//WAP to print the number which are not divisible by 3.

#include<iostream>
using namespace std;
int main(){
    for(int i = 1; i<=50; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<"\t";
    }
    return 0;
}