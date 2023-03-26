#include<iostream>
using namespace std; 
int main(){
    int n, arr[n], i, index, key;
    cout << "enter the number of the elements of the array" << endl;
    cin >> n;
    cout << "enter the n elements" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i]; 
    }
    cout << "enter the element to serach" << endl;
    cin >> key;
    for (int i = 0; i < n; i++){

         if(arr[i]== key){
            index = i;
            break; 
         }
    }
    cout << "element found at index" << index << endl;
    return 0;
}