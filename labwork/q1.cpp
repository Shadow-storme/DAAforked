#include<iostream>
using namespace std; 
int main(){
    int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int index = 0;
    int key = 2;
    cout << "The array is : \n";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "\t"; 
    }
    for (int i = 0; i < 10; i++){
        index++;
        if(arr[i] == key){
            cout << "The key is present in the array" << endl;
            cout << "The index is :" << index  << "\n"; 
        }
    }
    return 0; 
}