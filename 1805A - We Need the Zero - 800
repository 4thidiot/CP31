#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    vector <long long> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	    
	    long long totalxor=0;
	    for(int i=0; i<n; i++)
	        totalxor ^= v[i];
	    
	    int random_number=7; //koi bhi lelo
	    if(n%2==1)    
	        cout<<totalxor<<endl;
	    else
	    {
	        if(totalxor==0)
	            cout<<random_number<<endl;
	        else
	            cout<<-1<<endl;
	    }
	}

}
