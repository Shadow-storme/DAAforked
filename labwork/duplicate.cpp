#include<iostream>
using namespace std; 
int main(){
    int arr[10] = {1, 2, 3, 5, 5, 5, 7, 8, 9, 10};
    int count = 0;
    int key = 2; 
    cout << "the array is :\n";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "\t"; 
    }
    cout << endl;

    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if(arr[i] == arr[j] && arr[i] == key ){
                cout << "Duplicate element found " << arr[i] << endl;
                count++;
                return false; 
            }
        }
    }
    cout << "no duplicates found " << endl;
    return 0; 
}