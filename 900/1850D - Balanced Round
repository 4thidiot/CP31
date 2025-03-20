#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    
	    int sum=0;
	    int maximum=0;
	    int flag=0;
	    int flag2=0;
	    
	    sort(v.begin(), v.end());
	    for(int i=0; i<n; i++)
	    {
	        sum++;
            maximum = max(maximum, sum);
            if(i==n-1)
                break;
	        if(v[i+1]-v[i] >k)
	        {
	            sum=0;
	            flag=1;
	        }	                
	    }

	    if(flag==1)
	        cout<<n-maximum<<endl;
	    else
	        cout<<0<<endl;
	}
	return 0;
}
