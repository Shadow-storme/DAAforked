#include<iostream>
using namespace std; 
int divide(int arr[], int start, int end){
    int pivot = arr[end]; 
    int index = start; 
    for (int i = start; i < end; i++)
    {
        if(arr[i]< pivot){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp; 
        }
    }
    return index; 

}
 void quick(int arr[], int start, int end){
    if(start< end){
        int d = divide(arr, start, end); 
        quick(arr, start,(d-1));
        quick(arr, (d + 1), end);
    }
 }
 int main(){
    int num;
    int i;
    int arr[10];
    cout << "Enter the number of the element";
    cin >> num;
    cout << "Enter the element ";
    for (int i = 0; i < num; i++){
        cin >> arr[i]; 
    }
    quick(arr, 0, (num - 1));
    cout << "After sorting \n";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << "\t"; 
    }
    return 0;
 }