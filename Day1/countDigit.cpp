#include<bits/stdc++.h>
using namespace std;

int main(){
    int count = 0 , num , lastdig;
    cout<<"Enter Number: ";
    cin>>num;

    while(num){
        lastdig = num % 10;
        count++;
        num = num / 10;
    }
    cout<<count;

}