#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int d;
	    cin>>d;
	    
	    long long a, b;
	    
	    for(int i=d+1; i<INT_MAX; i++)
	    {
	        int not_prime = 0;
	        for(long long j=2; j*j<=i; j++)
	        {
	            if(i%j==0)
	                not_prime=1;
	        }
	        a = i;
	        if(not_prime==0)
	            break;
	    }
	    for(long long i=a+d; i<INT_MAX; i++)
	    {
	        int not_prime = 0;
	        for(int j=2; j*j<=i; j++)
	        {
	            if(i%j==0)
	                not_prime=1;
	        }
	        b = i;
	        if(not_prime==0)
	            break;
	    }
	    
	    cout<<a*b<<endl;
	}
    return 0;
}
