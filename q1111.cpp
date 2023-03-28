#include<iostream>
using namespace std; 
int main(){
    int k = 5, index = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++){
        index++;
        if(arr[i]== k){
            
            
            cout << "Element found : " <<index<< endl;
            break;
        }else{
            cout << "element not found" << endl;
        }
    }
    return 0;

}