#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    // (max heap)
    priority_queue<int> pq_max;
    
    // (min heap)
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_max.push(10);
    pq_max.push(5);
    pq_max.push(20);

    cout << pq_max.size() << endl;

    while(!pq_max.empty()){
        cout << pq_max.top() << endl;
        pq_max.pop();
    }
}