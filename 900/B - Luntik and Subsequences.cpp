#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector <ll> v(n);
        ll count0=0, count1=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            if(v[i]==0)
                count0++;
            else if(v[i]==1)
                count1++;
        }
    
        ll ans = (pow(2, count0))*count1;  //directly cout mat karo when multiplying and powering big numbers (for reason: watch tle level 1 video of common mistakes last week debugging)
        cout<<ans<<endl;   
    }
    
    return 0;
}
