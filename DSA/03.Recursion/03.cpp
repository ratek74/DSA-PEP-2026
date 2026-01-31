#include <iostream>
using namespace std;
 bool isSorted(int arr[], int n){
   if(n == 0 || n == 1) return true;
   if (arr[0] > arr[1]) return false;
   isSorted (arr+1, n - 1);
 }

 int isAddition(int arr[], int n){
    int sum = arr[0];
    if(n == 0) return 0;
    return sum +  isAddition(arr+1,n -1);
    
 }

 bool isKey(int arr[], int key, int n){
    if(n == 0) return false;
    if(arr[0] == key) return true;
   return  isKey(arr + 1,key, n - 1);
 }
int main(){
    int arr[5] = {1,2,3,4,5};
    int key = 4;
    isSorted(arr, 5);
    cout << isAddition(arr, 5) << endl;
    cout << isKey(arr,key,5);

}

//bool binarySearch(){
  //using recursion

  //int main(){

  
  //}
//}