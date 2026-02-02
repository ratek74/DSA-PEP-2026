#include <iostream>

using namespace std;
void wavePrint(int arr[][4], int row, int col){
        for(int c = 0; c < 4; c++){
            if(c%2 ==0){
                for(int r = 0; r < 3; r++){
                    cout << arr[r][c] << " ";
                }
            }
            else{
                for (int r = 2; r >=0; r--){
                    cout << arr[r][c]<< " ";
                }
            }
        }
    }
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    wavePrint(arr,3,4);
    
}