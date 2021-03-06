#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[100];
int min_steps(int n,int c)
{
    if(n==1)
    {
        return c;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    int one=INT_MAX;
    int two=INT_MAX;
    int three=INT_MAX;
    if(n%3==0)
    {
        three= min_steps(n/3,c+1);
    }
    if(n%2==0)
    {
        two= min_steps(n/2,c+1);
    }
    if(n>=2)
    {
        one= min_steps(n-1,c+1);
    }
    return dp[n]=min(one,two,three);
}


int main() {
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)dp[i]=-1;
	cout<<min_steps(n,0);
	return 0;
}
