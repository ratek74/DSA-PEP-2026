#include <iostream>
using namespace std;

string reverseString(string &s){
    int l = 0; int r = s.length()- 1;
    while(l < r){
        swap(s[l++] , s[r--]);
    }
    return s;
}
int countGoodSubstrings(string s) {
    int n = s.size();
    int count = 0;

    for(int i = 0; i + 2 < n; i++){
        char a = s[i];
        char b = s[i+1];
        char c = s[i+2];

        if(a != b && b != c && a != c)
            count++;
    }

    return count;
}
int main{
  
};

