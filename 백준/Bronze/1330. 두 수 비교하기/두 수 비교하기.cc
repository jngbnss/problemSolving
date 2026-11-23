#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    cin>>a>>b;
    if(a==b){
        cout<<"==";
    }else if(a<b){
        cout<<"<";
    }else{
        cout<<">";
    }
    
    return 0;
}
