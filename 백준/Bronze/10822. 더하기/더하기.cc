#include<bits/stdc++.h>
using namespace std;
string s;
int ret;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>s;
    int temp=0;
    for(auto i:s){
        if(i!=','){
            //cout<<i-'0'<<'\n';
            temp*=10;
            temp+=(i-'0');
        }else{
            //cout<<temp<<'\n';
            ret+=temp;
            temp=0;
        }
    }
    ret+=temp;
    cout<<ret;
    
}
