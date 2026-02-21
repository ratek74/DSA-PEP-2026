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

// new variant
class Solution {
public:
    static int countPrimeSetBits(int left, int right) {
        int prime[]={2, 3, 5, 7, 11, 13, 17, 19};
        bitset<21> isPrime=0;
        for(int p: prime) isPrime[p]=1;
        int sum=0;
        for(unsigned i=left; i<=right; i++){
            int b=popcount(i);
            if (isPrime[b]) sum++;
        }
        return sum;
    }
};