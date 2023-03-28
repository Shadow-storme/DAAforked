#include<iostream>
using namespace std;
int main(){
    int arr[6] = {6, 5, 4, 3, 2, 1}; 
    cout<<"Unsorted array: \n";
    for (int i = 0; i< 6; i++){
        cout << arr[i] << "\t"; 

    }
    for (int k = 1; k < 6; k++){
        int temp = arr[k];
        int j = k - 1;
        while(j >= 0 && temp <= arr[j]){
            arr[j + 1] = arr[j];
            j = j - 1; 

        }
        arr[j +1] = temp; 
    }
     cout<<"Sorted array : \n";
     for (int i = 0; i < 6; i++){
        cout << arr[i] << "\t"; 
     }
}