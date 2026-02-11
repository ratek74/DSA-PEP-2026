
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size(); 
        stack<int> st;
        vector<int> nge(n);
        for(int i = n - 1; i >= 0; i--){
            // remove all elements smaller than or equal to current elements
            while(!st.empty() && st.top() <= arr[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i] = -1;
            }else {
                nge[i] = st.top();
            }
            st.push(arr[i]);
        }
        return nge;
    }
};