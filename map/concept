#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
    map<int,int> mp;
    mp.insert(pair<int, int>(1, 40));
    mp.insert(pair<int, int>(2, 30));
    mp.insert(pair<int, int>(3, 60));
    mp.insert(pair<int, int>(4, 20));
    mp.insert(pair<int, int>(5, 50));
    mp.insert({ 6, 30 });
    mp.insert({ 7, 40 });
    cout<<mp.size()<<"\n";
    // assigning the elements from gquiz1 to gquiz2
    map<int, int> mp2(mp.begin(),mp.end());
    if(mp.empty()){
        cout<<"empty";
        return 0;
    }
    map<int,int>:: iterator it=mp.begin();
    //FIND THE elements IN MAP
    it=mp.find(7);
    cout<<it->second<<"\n";
    
    // FOR PRINTING elements IN MAP(DISCONARY)
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<"\n";
    }
    // ERASE 4th ELEMENT(KEY,VALUE);
    mp.erase(4);
    // FOR PRINTING REVERSE ORDER 
    for(auto it1=mp.rbegin();it1!=mp.rend();it1++){
        cout<<it1->first<<" "<<it1->second<<"\n";
    }
    mp.clear();
}

