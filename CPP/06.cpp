#include <iostream>
using namespace std;

int linearSearch(int arr[], int key)
{

    int value;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            if (key > 5)
            {
                value = key * 2;
            }
            else
            {
                value = key / 2;
            }
        }
       
    }
    return value;
}

int main()
{
    int arr[5] = {3, 1, 6, 4, 2};
    cout << linearSearch(arr, 6);
}