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
	    vector <int> v(n), a;
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	   
	    a.push_back(v[0]);  
	    for(int i=1; i<n; i++)
	    {
	        if((v[i-1])>v[i])
	        {
	            a.push_back(v[i]);
	            a.push_back(v[i]);
	        }
	        else
	             a.push_back(v[i]);
	        
	    }
	    
	    cout<<a.size()<<endl;
	    for(auto it : a)
	        cout<<it<<" ";
	    cout<<endl;  
	}

}
