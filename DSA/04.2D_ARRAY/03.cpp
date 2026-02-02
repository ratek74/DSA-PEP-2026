#include <iostream>
#include <climits>
using namespace std;
void rowSum(int arr[3][3], int row , int col){
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
       sum += arr[i][j];
}   
  cout << sum << endl;
 }
 
}
int maxRowSum(int arr[3][3], int row, int col){
    int maximum =INT_MIN;
    int rowIdx = -1;
    for(int i = 0; i < 3; i++){
     int sum = 0;
     for(int j = 0; j < 3; j++){
        sum += arr[i][j];
     }
     if(sum > maximum){
        maximum = sum;
        rowIdx=i;
     }
    }
    return rowIdx;
}

int main(){
  int arr[3][3] = {6,2,5,1,7,9,4,8,3};
  rowSum(arr,3,3);
  cout << maxRowSum(arr, 3,3);
}