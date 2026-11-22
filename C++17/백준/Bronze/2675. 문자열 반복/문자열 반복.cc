#include<bits/stdc++.h>
using namespace std;
int t,r;
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    cin>>t;
    while(t--){
        cin>>r>>s;
        for(auto i:s){
            for(int j=0;j<r;j++){
                cout<<i;
            }
        }
        cout<<'\n';
    }
    
    
    
    return 0;
}
