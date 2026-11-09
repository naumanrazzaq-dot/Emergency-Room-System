#include<iostream>
#include<list>
#include <vector>
#include<queue>
#include<stack>
using namespace std;
int main(){
    // sb se choti value uper ur uss se choti uss se niche rakhne k liye
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(1);
    pq.push(8);
    pq.push(5);
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    };
};