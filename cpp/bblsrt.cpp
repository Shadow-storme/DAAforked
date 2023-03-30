#include<iostream>
using namespace std; 
int main(){
    int arr[6] = {6, 5, 4, 3, 2, 1};
    cout << "Unsorted array : \n";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << "\t"; 
    }
    cout << endl;
    for (int i = 0; i < 6; i++){
        for (int j = i + 1; j< 6; j++){
            if(arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Sorted Array: \n";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << "\t"; 
    }
    return 0;
}