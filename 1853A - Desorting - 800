#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector <int> v(n), copy(n);
	    for(int i=0; i<n; i++)
	    {
	        cin>>v[i];
	        copy[i]=v[i];
	    }
	    sort(v.begin(), v.end());
	    int ans=INT_MAX;
	    if (equal(v.begin(), v.end(), copy.begin()))
	    {
	        for(int i=0; i<n-1; i++)
	        {
	            ans=min(ans, (copy[i+1]-copy[i])/2 + 1);
	        }
	        cout<<ans<<endl;
	    }
	    else
	        cout<<0<<endl;
	}

}
