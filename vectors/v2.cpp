#include<bits/stdc++.h>
using namespace std; 
int main(){
    vector<int> v{1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    sort(v.begin(), v.end(), greater<int>()); 
    cout<<"sorted \n"; 
    for(auto x:v)
        cout << x << "\t";
    return 0;
}