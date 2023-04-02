#include<iostream> 
using namespace std; 
int main(){
    int count = 0; 
    int arr[10] = {10, 2, 0, 14, 25, 18, 1, 5, 45,50};
    cout << "Unsorted \n";
    for (int i = 0; i < 10; i++){
        cout<<arr[i]<<"\t"; 
    }
    cout << endl;
    for (int i = 0; i < 10; i++){
        for (int j = i + 1; j < 10; j++){
            if(arr[j]<arr[i]){
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp; 
            }
        }
        count++; 
    }
    cout<<"Sorted Array : \n"; 
    for (int i = 0; i < 10; i++){
        cout << arr[i] << "\t"; 
    }
    cout << "Number of the passes are : " << count << endl;
}