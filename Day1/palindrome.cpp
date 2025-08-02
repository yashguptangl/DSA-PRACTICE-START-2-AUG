#include<iostream>
using namespace std;
int main(){
    int n , check , lastdig , ans = 0;
    cout<<"Enter Number: ";
    cin>>n;

    check = n ;

    while(n){
        lastdig = n %10;
        n /= 10;
        ans = ( ans * 10 ) + lastdig;
    }
    if(check == ans){
        cout<<"True palindrome";
    }else{
        cout<<"False Palindrome";
    }
}