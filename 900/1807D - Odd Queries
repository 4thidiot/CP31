#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n, q;
	    cin>>n>>q;
	    vector <long long> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	        
	    vector <long long> prefix_sum(n+1, 0); //n+1 isliya taaki indexing starts from 1 and all elements initialised as zero initially
	    for(int i=1; i<n+1; i++)
	        prefix_sum[i]=prefix_sum[i-1] + v[i-1];
	        
	    long long oldsum = prefix_sum[n];
	    
	    while(q--)
	    {
	        long long l, r, k;
	        cin>>l>>r>>k;
	        
	        long long newsum = oldsum - (prefix_sum[r]-prefix_sum[l-1]) + (r-l+1)*k;  //oldsum - segment sum + new values of added k
	        
	        if(newsum%2==1)
	            cout<<"YES"<<endl;
	        else
	            cout<<"NO"<<endl;
	    }
	}
	
}
