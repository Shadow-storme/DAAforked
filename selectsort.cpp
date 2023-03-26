#include<iostream>
using namespace std; 
void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;

}
void display(int *array, int size){
    for (int i = 0; i < size; i++)
        cout << array[i] << " \t";
    cout << endl; 

}
 void selectionsort(int *array, int size){
    int i, j, imin;
    for (i = 0; i < size - 1; i++){
        imin = i;
        for (j = i + 1; j < size; j++)
        if(array[j]< array[imin])
            imin = j;
        swap(array[i], array[imin]);
    }
 }
 int main(){
    int n;
    cout << "Enter the number of the elements" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements " << endl;
    for (int i = 0; i < n; i++){
        cin>>arr[i]; 
    }
    cout << "Array before sorting ";
    display(arr, n);
    selectionsort(arr, n);
    cout << "Array after sorting"; 
    display(arr, n);
    return 0; 
 }