#include <iostream>
using namespace std;
int climbprblm(int n){
    if(n == 0) return 1;
    return climbprblm(n) + climbprblm(n - 1);
}
int main(){
    int n = 3;
    cout << climbprblm(n);
}