
#include<iostream>
using namespace std; 
void findkey(int arr[], int n,int key ){
    int index = 0;
    for (int i = 0; i < n; i++){
        index++;
        if(arr[i]==key){
            cout << "Found at :" << index << "\t"<<arr[i] << endl;
            return ;
        }
    }
    cout << "Not found"; 
}

int main(){
    int arr[5] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    findkey(arr, n, key);
    return 0;
}