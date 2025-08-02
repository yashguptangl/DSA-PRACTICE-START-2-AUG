#include <iostream>
#include <list>
#include<vector>
#include<deque>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main(){
    map<string , int> m;
    m["tv"] = 50;
    m["lp"] = 100;
    m["ac"] = 80;

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

}