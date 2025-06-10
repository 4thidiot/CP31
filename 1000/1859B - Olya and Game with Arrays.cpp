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
	    
	    vector <ll> second_elements;
	    ll l_f_min = INT_MAX; //lowest first minimum
	    
	    for(int i=0; i<n; i++)
	    {
	        ll m;
	        cin>>m;
	        vector <ll> a(m);
	        for(auto &it: a)
	            cin>>it;
	        
	        sort(a.begin(), a.end());
	        
	        second_elements.push_back(a[1]);
	        l_f_min = min(l_f_min, a[0]);
	    }
	    
	    sort(second_elements.begin(), second_elements.end());
	    
	    ll sum_of_sec_ele = accumulate(second_elements.begin(), second_elements.end(), 0LL);
	    ll l_s_min = second_elements[0]; //lowest second minimum
	    
	    ll ans = l_f_min + (sum_of_sec_ele - l_s_min);
	    cout<<ans<<endl;
	}
    return 0;
}
