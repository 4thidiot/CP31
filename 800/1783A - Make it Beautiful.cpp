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
	    vector <int> v(n);
	    for(int i=0; i<n; i++)  
	        cin>>v[i];
	    int flag=0;
	    for(int i=1; i<n; i++)
	    {
	        if(v[i]!=v[i-1])
	        {
	            flag = 1;
	        }
	    }
	    
	    if(flag==0)
	        cout<<"NO"<<endl;
	    else
	    {
	        cout<<"YES"<<endl;
	        sort(v.begin(), v.end());
	        swap(v[0], v[n-1]);
	        if(v[0]==v[1])
	            swap(v[1], v[n-1]);
	        for(auto it : v)    
	            cout<<it<<" ";
	        cout<<endl;     
	    }
	}

}
