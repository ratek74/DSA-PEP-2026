// we write a block of code for reusability;
// void - doesn't return anything;
// non void - doesn;t return anything

#include <iostream>
using namespace std;

float sub(float a, float b){
    return a - b;
}

int main() {
    cout << sub(10.3,5);
}
