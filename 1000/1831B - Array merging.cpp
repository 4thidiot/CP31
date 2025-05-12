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
	    vector <ll> a(n), b(n);
	    
	    for(ll i=0; i<n; i++)
	        cin>>a[i];
	    for(ll i=0; i<n; i++)
	        cin>>b[i];
	        
	    vector <ll> longest_subarray_a(2*n + 1, 0);  //2n+1 isliye kyuki ai/bi ki max val is this since freq vector
	    vector <ll> longest_subarray_b(2*n + 1, 0);  
	    
	    ll counter = 1; //already counted the first element //counting and reset technique starts
	    for(ll i=1; i<n; i++)
	    {
	        if(a[i]==a[i-1])
	            counter++;
	        else
	        {
	            longest_subarray_a[a[i-1]] = max(longest_subarray_a[a[i-1]], counter); //freq vector
	            counter=1;
	        }
	    }
	    longest_subarray_a[a[n-1]] = max(longest_subarray_a[a[n-1]], counter); //if else block didnt run
	    
	    //doing the same technique for array b now
	    counter = 1; //already counted the first element //counting and reset technique starts
	    for(ll i=1; i<n; i++)
	    {
	        if(b[i]==b[i-1])
	            counter++;
	        else
	        {
	            longest_subarray_b[b[i-1]] = max(longest_subarray_b[b[i-1]], counter); //freq vector
	            counter=1;
	        }
	    }
	    longest_subarray_b[b[n-1]] = max(longest_subarray_b[b[n-1]], counter); //if else block didnt run
	    
	    
	    ll max_freq=-1;
	    for(ll i=1; i<=2*n; i++)
	        max_freq = max(max_freq, longest_subarray_a[i] + longest_subarray_b[i]);
	    
	    cout<<max_freq<<endl;     
	}
    return 0;
}
