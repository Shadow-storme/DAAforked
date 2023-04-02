#include<iostream>
using namespace std;
int find(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 1 + i; j < n; j++){
            if(arr[i]= arr[j]){
                cout<<arr[i]<<"\t";
                break; 
            }
        }
    }
    cout << "No duplicates found \n"; 
}
 void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << "\t"; 
    }
     
 }
 int main(){
    int arr[5] = {5, 4, 3, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    find(arr, n); 
    print(arr, n); 
    
 }