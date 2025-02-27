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
	    
	    int count=0;
	    int max=0;
	    
	    for(int i=0; i<n; i++)
	    {
	        if(v[i]==0)
	            count++;
	        else
	            count=0;
	       
	        if(count>max)  
	            max=count;
	    }
	    cout<<max<<endl;
	}

}
