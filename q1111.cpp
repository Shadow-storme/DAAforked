#include<iostream>
using namespace std; 
int main(){
    int k = 2, index = 0;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++){
        if(arr[i]== k){
            
            index++;
            cout << "Element found : " <<index<< endl;
            break;
        }else{
            cout << "element not found" << endl;
        }
    }
    return 0;

}