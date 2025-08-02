#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n , check , ans  = 0 , lastdig , count = 0 ;
    cout<<"Enter the Number: ";
    cin>>n;

    int temp = n;
    check = n ;

    while(temp){
        count++;
        temp /= 10;
    }

    while(n){
        lastdig = n % 10 ;
        ans = pow(lastdig , count) + ans ;
        n /= 10 ;
    }
    if(ans == check ) cout<<"Armstrong Nomber";
    else cout<<"Not Armstrong Number";
}