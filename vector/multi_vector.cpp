#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int>> ve;
	vector<int> ve1;
	int a;
	for(int i=0;i<5;i++){
		for(int j=i;j<i+1;j++){
			cin>>a;
			ve1.push_back(a);
		}
		ve.push_back(ve1);
		ve1.clear();
	}
	for(int i=0;i<5;i++){
	    cout<<ve[i][0];
	}
}
