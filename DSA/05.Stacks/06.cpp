#include <iostream>
#include <stack>
using namespace std;
int precedence(char c){
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
}
int toPostfix(string s){
    string ans = " ";
    stack<char> st;
    for(char c : s){
        if(isalnum(c)){
          ans += c;
        } else if(c =='('){
            st.push(c);
        } else if (c == ')'){
            st.push(c);
        } else if (c == ')'){
            while(!st.empty() && st.top() != '('){
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && precedence(st.top()) >= precedence(c) && (c == '^' && st.top() == '^')){
                ans += st.top();
                st.pop();
            }
             st.top();
        }
        
    }
    while(!st.empty()){
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main(){

}