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
	    string s;
	    cin>>s;
	    
	    int ptr1=0;
	    int ptr2=n-1;
	    int count=0;
	    
	    while(ptr1<=ptr2)
	    {
	        if(s[ptr2]!=s[ptr1])
	            count+=2;
	        else
	            break;
	        ptr1++;
	        ptr2--;
	    }
	    cout<<n-count<<endl;
	}
    return 0;
}
