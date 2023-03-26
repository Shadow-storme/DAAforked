#include<iostream> 
using namespace std; 
int main(){
    int i, j, temp;
    int arr[8] = {
        12, 3, 1, 5, 18, 10, 7, 35};
    cout << "Unsorted array : \n";
    for (int i = 0; i < 8; i++){
        cout << arr[i] << "\t"; 
    }
    cout << endl;
    for (int i = 0; i < 8; i++){
        for (int j = i+1 ; j < 8; j++){
             if(arr[j+1] < arr[i]){
                 temp = arr[i];
                 arr[i] = arr[j+1];
                 arr[j+1] = temp;
             }
        }
    }
    cout << "Sorted Array: \n";
    for (int i = 0; i < 8; i++){
        cout << arr[i] << "\t"; 
    }
    return 0;
}
