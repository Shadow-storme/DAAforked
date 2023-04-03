#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return;
}
 void insertionsort(int arr[], int n){
    for (int k = 1; k < n; k++){
        int temp = arr[k];
        int j = k - 1; 
        while(j >= 0 && temp <= arr[j]){
            arr[j] = arr[j + 1];
            j = j - 1; 
        }
        arr[j + 1] = temp; 
    }
 }
 
int main(void)
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    cout << "Unsorted array : \n";
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
   

  //  bubblesort(arr, n);
    insertionsort(arr, n);
    cout << "Sorted array : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
}