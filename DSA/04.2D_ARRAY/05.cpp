#include <iostream>

using namespace std;

void spiralPrint(int arr[][4], int row, int col){
    int topRow = 0;
    int bottomRow =row - 1;
    int leftCol = 0;
    int rightCol = col - 1;
    while(topRow <= bottomRow && leftCol <= rightCol){
        //print top Row
   for(int i = leftCol; i <= rightCol; i++){
    cout << arr[topRow][i] << " ";
   }
   topRow++;
   //print Right col
   for(int i =  topRow; i <= bottomRow; i++ ){
    cout << arr[i][rightCol] << " ";
   }
   rightCol--;
   //print bottom Row
   for(int i = rightCol; i >= leftCol; i--){
    cout << arr[bottomRow][i] << " ";
   }
   bottomRow--;
   //print left col
   for(int i =bottomRow; i >= leftCol; i--){
    cout <<arr[]
   }
}

}
int main(){
  int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  spiralPrint(arr,4,4);
}