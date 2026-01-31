#include <iostream>
using namespace std;
   void merge(int *arr, int start, int end){
      int mid = (start + end / 2);
      //find the length of left splitted array, adding 1 because while cal the index we suntract 1
    //    now to find size we add 1
    int length1 = mid - start + 1;
    // find length2 of the right splitted array
    int length2 = end - mid;
    
    // creating two new array
    int*arr1 = new int[length1];
    int*arr2 = new int[length2];

    // copy values from start -> mid in the first array
    int k = start;
    for(int i = 0; i < length1; i++){
        arr1[i] = arr[k++];
    }

    // copy values from mid + 1 till the end in second array
    k = mid + 1;
    for(int i = 0; i < length2; i++){
        arr2[i] = arr[k++];
    }
    // after the values are copied, now we sort and merge two arrays
    int i = 0;
    int j = 0;
    k = start;
    while(i < length1 && j < length2){
        if(arr1[i] < arr2[j]){
            arr[k++] = arr[i++];
        }
        else {
            arr[k++] = arr2[j++];
        }
    }
    // need to check for remaining elements
    while(i < length1){
        arr[k++] = arr1[i++];
    }
    while(j < length2){
   
        arr[k++] = arr2[j++]; 
    }
    delete []arr1;
    delete []arr2;

   }

 void mergeSort(int arr[], int start, int end){
        if(start >= end) return;
        int mid = (start + end / 2);
        mergeSort(arr,start,mid);

        mergeSort(arr,mid + 1,end);

        merge(arr,start,end);
    }
int main(){
    // int n = arr.size();
   
    int arr[] = {2,5,6,7,3,10};
    int n = 7;
    mergeSort(arr, 0, n - 1);
    for(int i : arr){
        cout << i << " ";
    }

}