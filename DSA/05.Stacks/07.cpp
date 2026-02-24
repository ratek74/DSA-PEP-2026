//This is Sum of Subarray Minimums (very famous stack problem).
#include <bits/stdc++.h>
using namespace std;

int sumSubarrayMins(vector<int>& arr) {
    const int MOD = 1e9 + 7;
    int n = arr.size();
    
    vector<int> left(n), right(n);
    stack<int> st;

    // find distance to previous smaller element
    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[st.top()] > arr[i])
            st.pop();
        
        left[i] = st.empty() ? i + 1 : i - st.top();
        st.push(i);
    }

    while(!st.empty()) st.pop();

    // find distance to next smaller or equal element
    for(int i = n-1; i >= 0; i--) {
        while(!st.empty() && arr[st.top()] >= arr[i])
            st.pop();
        
        right[i] = st.empty() ? n - i : st.top() - i;
        st.push(i);
    }

    long long ans = 0;

    // contribution of each element
    for(int i = 0; i < n; i++) {
        long long contrib = (long long)arr[i] * left[i] * right[i];
        ans = (ans + contrib) % MOD;
    }

    return (int)ans;
}