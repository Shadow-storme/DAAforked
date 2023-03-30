#include<iostream>
using namespace std;
 int main(){
     int i, j, temp;
     int arr[6] = {-3,3,-2, 2,-1,1};
     for (int i = 0; i< 6; i++){
         cout << arr[i] << " \t"; 
     }
     cout << endl;
     for (int i = 0; i < 6; i++){
         for (int j = i + 1; j < 6; j++){
             if(arr[j]< arr[i]){
                  temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp; 
             }
         }
     }
     cout << "The sorted array is : \n";
     for (int i = 0; i < 6; i++){
         cout << arr[i]<<" \t"; 

     }
     return 0; 

 }