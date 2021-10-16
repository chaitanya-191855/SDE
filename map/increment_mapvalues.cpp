#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,1,2,1,2,2,4,5,6,1,2,3,4};
    map<int,int> m;
    for(int i=0;i<arr.size();i++){
        auto it=m.find(arr[i]);
        if(m.empty()){
            m.insert({arr[i],1});
        }else if(it==m.end()){
            m.insert({arr[i],1});
        }else{
            it->second++;
        }
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
}
"""
    output:
    1 4
    2 5
    3 2
    4 3
    5 1
    6 1
        
"""
