#include<iostream>
using namespace std;

int main(){
    int n , lastdig , ans = 0;
    cout<<"Enter Number: ";
    cin>>n; 

    while(n){
        lastdig = n % 10;
        ans = ( ans * 10 ) + lastdig;
        n /= 10;
    }
    cout<<ans;
}