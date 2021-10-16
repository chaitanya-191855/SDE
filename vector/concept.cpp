/*
https://www.geeksforgeeks.org/vector-in-cpp-stl/
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ve;
    ve.push_back(90); //90
    ve.assign(5,10);  //it assign new values elements by replacing old ones 
    ve.push_back(20);
    ve.emplace_back(30);
    ve.push_back(50);
    for(auto ele:ve){
        cout<<ele<<" ";
    }
    cout<<"\n";
    cout << ve.at(4);
  
    cout << ve.front();
  
    cout << ve.back();
    
    vector<int>::iterator it=ve.begin();
    ve.insert(it+4,7); // insert element 7 in 4 position syn: insert(position,val)
    cout<<*it;
    
    cout<<"\n";
    
    ve.pop_back();
    
    ve.erase(ve.begin());// it will erase first element
    ve.erase(ve.begin(),ve.begin()+3);//it will erase from first pos to 3 position
    
    for(auto ele:ve){
        cout<<ele<<" ";
    }
    
    it=find(ve.begin(),ve.end(),7);//it will find the address of the val
    cout<<(it-ve.begin());
    
    for(auto it=ve.rbegin();it!=ve.rend();it++){
        cout<<*it<<" ";
    }
    
    ve.clear();// it will clear all ele in vector
}
