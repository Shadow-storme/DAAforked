#include<iostream>
using namespace std; 
int main(){
    int k; 
    int arr1[10], arr2[10], arr3[10];
    cout << " Enter the 10 elements of the array 1" << endl;
    for (int i = 0; i < 10; i++){
        cin >> arr1[i]; 
    }
    cout << "Enter the 10 elements of the second aray: " << endl;
    for (int i = 0; i < 10; i++){
        cin >> arr2[i]; 
    }
    for (int i = 0; i< 10; i++){
        for(int j = 0; j< 10; j++){
            if(arr1[i] = arr2[j]){
                int t = 0;
                for (int x = 0; x < k; x++ ){
                    if(arr1[i] == arr3[x])
                        t++;
                }if (t == 0)
                {
                    arr3[k] = arr1[i];
                    k++;
                }
            }
       }
   }
   cout << "Sorted things" << endl;
   for (int i = 0; i < 10; i++){
       cout << arr3[i] << "\t"; 
   }
   return 0; 
   
}