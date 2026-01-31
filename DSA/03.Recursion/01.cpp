#include <iostream>
using namespace std;

  void printRecursion(int n){
    if(n == 0) return;
    printRecursion(n - 1);
      if(n%2 == 0){
      cout << n << endl;
      }
    }
  int factorial(int n){
    if(n == 0 || n == 1) return 1;

    return n * factorial(n - 1);
  }
    
  int calPower(int x, int n){
    if(n == 0) return 1;

    return x * calPower(x, n - 1);
  }

  int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n - 2);
  }
  
int main(){
    int n = 5;
    int x = 2;
    printRecursion(n);
    cout << factorial(n) << endl;
    cout << calPower(x, n) << endl;
    cout << fib(n);
}