#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
	ll t;
	cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        vector <pair<ll,ll>> health_points(n);  
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            health_points[i] = {x,i+1};  //since 1 based indexing
        }
        for(ll i=0; i<n; i++)
        {
            health_points[i].first = health_points[i].first % k;
            if (health_points[i].first == 0)
                health_points[i].first = k;
        }

        sort(health_points.begin(), health_points.end(), [&](pair<ll,ll> a, pair<ll,ll> b) //custom sort technically like functions syntax aise hi hoga aaju baaju compare karne ke liye
        {
            if(a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;    
        }); //dhyan do bracket and semicolon pe idhar
        
        for(auto it : health_points)
            cout<<it.second<<" ";
        cout<<endl;    
    }
    return 0;
}
