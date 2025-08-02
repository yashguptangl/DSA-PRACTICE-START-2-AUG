#include<bits/stdc++.h>
using namespace std;
void print1(int a){
    for(int i = 1 ; i<=a ; i++){
        for(int j = 1 ; j <= a; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int a){
    for(int i = 1 ; i <= a ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int a){
    for(int i = 1 ; i <= a ; i++){
        for(int j = 1; j <= i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int a){
    for(int i = 1 ; i<= a  ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int a){
    for(int i = 1 ; i <= a ; i++){
        for(int j = 5 ; j >= 1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print6(int a){
    for(int i = 1 ;  i <= a ; i++){
        for(char j = 'a' ; j <= 'e' ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int a){
    int count = 1;
    for(int i = 1 ; i <= a; i++){
       for(int j = 1 ; j<= a ; j++){
        cout<<count<<" ";
        count++;
       }
       cout<<endl;
    }
} 
void print8(int a){
    for(int i = 1 ; i<= a ; i++){
        char name = 'a'+ (i-1);
        for(int j = 1 ; j <= a ;j++){
            cout<<name<<" ";
        }
        cout<<endl;
    }
}
void print9(int a){
    for(int i = 1 ; i <= a ; i++){
        for(int j = 1 ; j<= i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print10(int a){
    for(int i = 1 ; i <= a ; i++){
        for(int j = 1 ; j<= i ; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print11(int a){
    for(int i = 1 ; i <= a ; i++){
        for(int j = i ; j >= 1 ; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print12(int a){
    for(int i = 1 ; i<=a ; i++){
        for(int j = 1 ; j<= i ; j++){
            char name = 'a' + (i-1);
            cout<<name<<" ";
        }
        cout<<endl;
    }
}
void print13(int a){
    for(int i = 1 ; i<=a ; i++){
        for(int j = 1 ; j <= 5-(i-1) ; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print13(n);
   
}