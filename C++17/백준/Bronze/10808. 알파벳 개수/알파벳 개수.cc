#include<bits/stdc++.h>
using namespace std;
int arr[26];
string s;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    cin>>s;
    for(auto i:s){
        arr[i-'a']++;
    }

    for(auto i:arr){
        cout<<i<<' ';
    }
    
    
    
    return 0;
}
