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
	    for(int i=0; i<n; i++)
	    {
	        for(int j=i+1; j<n; j++)
	        {
	            if(__gcd(v[i], v[j]) <= 2)    //Inbuilt gcd function - stl
	                flag=1;
	        }
	    }
	    if(flag==0)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}
