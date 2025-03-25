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
	    for(int i=0; i<n-2; i++)
	    {
	        if(v[i]<v[i+1] && v[i+1]>v[i+2])
	        {
	            cout<<"YES"<<endl;
	            cout<<(i)+1<<" "<<(i+1)+1<<" "<<(i+2)+1<<endl;
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<"NO"<<endl;
	}

}
