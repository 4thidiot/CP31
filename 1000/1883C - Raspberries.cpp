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
	    for(auto &it : v)   
	        cin>>it;
	   
	    int minimum=INT_MAX;
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]%k==0)
	            minimum=0;
	        else if(v[i]%k!=0)
	            minimum = min(minimum, k-(v[i]%k));
	    }    
	    
	    if(k==4)
	    {
	        int even=0;
	        for(auto it : v)
	        {
	            if(it%2==0)
	                even++;
	        }
	        
	        if(even>=2)
	            minimum=min(minimum, 0);
	        else if(even==1)
	            minimum=min(minimum, 1);
	        else
	            minimum=min(minimum, 2);     
	    }
	    
	    cout<<minimum<<endl;     
	}
    return 0;
}
