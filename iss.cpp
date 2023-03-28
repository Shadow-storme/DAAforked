#include<iostream>
using namespace std;
int findsmal(int[], int);
int main(){
    int arr[5] = {12, 45, 8, 5, 16};
    int pos, temp;
    for (int i = 0; i < 5; i++){
        cout << arr[i] << "\t"; 
    }
    for (int i = 0; i < 5; i++){
        pos = findsmal(arr, i);
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp; 
    }
    for (int i = 0; i < 5; i++){
         cout<<"Sorted Array: ";
         cout << arr[i] << "\t"; 
    }
    cout << endl;
    return 0; 
}
 int findsmal(int arr[], int i){
    int ele, position, j;
    ele = arr[i];
    position = i;
    for (j = 0; j < 5; j++){
        if(arr[i]<ele){
            ele = arr[j];
            position = j; 
        }
    }
    return position; 
 }