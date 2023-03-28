#include<iostream>
using namespace std;
int main(){
   int arr[6]={18, 17,16,15,14,13}; 
   cout<<"Unsorted array: \n";
   for (int i = 0; i< 6; i++){
       cout << arr[i] << "\t"; 
   }
   cout << endl;
   for (int k = 1; k < 6; k++)
   {
       int temp = arr[k];
       int j = k-1;
       while (j >= 0 && temp <= arr[j]){
        arr[j+1] = arr[j];
        j = j - 1; 
       }
       arr[j + 1] = temp;
   }
   cout << "Sorted array :\n ";
   for (int i = 0; i < 6; i++){
       cout << arr[i] << "\t"; 
   }
}