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
	    vector <int> v(n-1);
	    for(int i=0; i<n-1; i++)
	        cin>>v[i];
	    
	    int ans=0;
	
	    for(int i=0; i<n-1; i++)
	    {
	         ans+=v[i];
	    }     
	    
	    cout<<-1*ans<<endl;
	}
    return 0;
}
