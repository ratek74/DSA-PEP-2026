#include <iostream>
using namespace std;

string reverseString(string &s){
    int l = 0; int r = s.length()- 1;
    while(l < r){
        swap(s[l++] , s[r--]);
    }
    return s;
}
int main{
  
};