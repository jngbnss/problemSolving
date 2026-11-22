#include<bits/stdc++.h>
using namespace std;
int a,sum,b;
int arr[9];
vector<int>v;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);

    //입력받기

    for(int i=0;i<9;i++){
        cin>>arr[i];
    }

    //더해서 100 확인하면 i j빼고

    for(int i=0;i<9;i++){

        for(int j=0;j<i;j++){
            
            sum = 0;
            
            for(int k=0;k<9;k++){

                if(i==k||j==k){
                    continue;
                }
                
                sum+=arr[k];
            
            }

            if(sum==100){
                a = i;
                b = j;
                break;
            }
        }
    }

    for(int i=0;i<9;i++){
        if(i==a||i==b) continue;
        v.push_back(arr[i]);
    }


    //벡터에 넣고, 정렬

    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<'\n';
    }    
    return 0;
}
