#include<bits/stdc++.h>
using namespace std;
int n,x;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp<x){
            cout<<temp<<' ';
        }
    }
    
    return 0;
}
