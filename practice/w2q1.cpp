#include<bits/stdc++.h>
using namespace std;
void findekey(int arr[], int n, int key){
    int count = 0;
    int index = 0;
    for (int i = 0; i < n; i++){
        index ++;
        if(arr[i]== key){
            count++; 
            cout << "found \n";
            cout << "index" << index << endl;
            cout << "copies " << count << endl;
            return ;                                  
        }

    }
    cout << "not found" << endl;
}
int main(void){
    int arr[5] = {5, 4, 3, 1, 1};
    int key = 1;
    int n = sizeof(arr) / sizeof(arr[0]);
    findekey(arr, n, key);
    return 0;
}