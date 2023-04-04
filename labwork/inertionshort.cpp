#include<iostream> 
using namespace std; 

void insert(int arr[], int n){
    for (int k = 1; k < n; k++){
        int temp = arr[k];
        int j = k - 1; 
        while(j >= 0 && temp <= arr[j]){
            arr[j+1] = arr[j];
            j = j - 1; 
        }
        arr[j + 1] = temp; 
    }
}
int main(void){
   
    int arr[ ] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
     int n = sizeof(arr) / sizeof(arr[0]);
    insert(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t"; 
    }
    return 0; 
}