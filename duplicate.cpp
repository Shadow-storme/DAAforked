#include<iostream>
using namespace std; 
int main(){
    int i, j, k, n, a[n], temp, pass = 0;
    cout << "Enter the number of the elements " << endl;
    cin >> n;
    cout << "\n Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i< n; i++){
        for (int j = i + 1;  j < n; j++)
        {
            if(a[j]<a[i]){
                temp = a[i]; 
                a[i] = a[j];
                a[j] = temp; 
            }
        }
        pass++;
    }
    for (int i = 0; i< n; ++i)
        for (j = i + i; j < n;)
        {
            if(a[i]==a[j]){
                for (k = j; k < n - 1; ++k)
                    a[k] = a[k + 1];
                --n;
            }
            else
                ++j;
        }
    cout << "\n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}