#include<iostream>
using namespace std; 
void findpair(int num[], int n, int target){
    for (int i = 0; i< n-2; i++){
        for (int j = i+1; j < n - 1; j++){
            for (int k = i + 2; k < n; k++){
                if(num[i]+num[j]+num[k]== target){
                    cout << "Pair found " << num[i] <<"\t"<< num[j]<<"\t"<< num[k] << endl;
                    return; 
                }
            }
        }
    }
    cout << "Not found "; 
}
 int main(){
    int num[7] = {7, 6, 5, 4, 3, 2, 1};
    int target = 6;
    int n; 
    n = sizeof(num)/sizeof(num[0]);
    findpair(num, n, target); 
    return 0;

 }