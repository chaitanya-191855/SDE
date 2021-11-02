#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
    {
    int t;
    unsigned long long int n;
    cin>>t;
    while(t--)
        {
            int c=0;
            cin>>n;
            //if(n==1) {cout<<"Louise";continue;}
            while(n>1)
                {
                    if((n&(n-1))==0)
                    {    n/=2;
                        c++;
                    }
                    else
                    {    
                        unsigned long long int i=n;
                        int size=0;
                        while(i>0)
                        {    i=i>>1;size++;
                        }
                        n=n-(1ULL<<(size-1));
                        c++;
                    }
            }
            if(c%2!=0) cout<<"Louise\n";
            else cout<<"Richard\n";
    }
    return 0;
}
-----------------------------------------------------------
    Example
132
It's Louise's turn first. She determines that 132 is not a power of 2.
The next lower power of 2 is 128, so she subtracts that from 132 and passes 4 to Richard.
4 is a power of 2, so Richard divides it by 2 and passes 2 to Louise. Likewise, 2 is a power so she divides it by 2 and reaches 1. She wins the game.
