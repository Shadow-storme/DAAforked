#include<iostream>
using namespace std; 
int main(){
     int t;
     cout << "enter t" << endl; 
     cin>>t; 
     while (t--)
     {
       long long n;
       cout << "enter n" << endl;
       cin >> n;
       long long start = 1, final = n;
       long long mid; 
       long long ans, res;
       while (start <= final){
           mid = (start + final) / 2;
           res = (mid) * (mid + 1) / 2;
           if (res <= n){
               ans = mid;
               start = mid + 1; 
           }
           else{
               final = mid - 1; 
           }
           cout << ans << endl;
       }
     }
     return 0; 

}