#include <iostream>
using namespace std;

bool binarySearch(int arr[], int left, int right, int key){
    int mid = left + (right - left)/2;
    if(left > right) return false;
    if(arr[mid]  == key) return true;
    else if(arr[mid] < key){
       return binarySearch(arr, mid + 1, right, key);
    }else {
        return binarySearch(arr, left, mid - 1, key);
    }
}
int main(){
   int n = 7;
   int arr[7] = {2,4,6,8,10,12,14};
   int key = 6;
   int left = arr[0];
   int right = n -  1;
   cout << binarySearch(arr,left,right,key);
}