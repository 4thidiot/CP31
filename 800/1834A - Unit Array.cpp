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
	    int count1=0, countneg=0;
	    for(int i=0; i<n; i++)
	    {
	        cin>>v[i];
	        if(v[i]==1)
	            count1++;
	        else 
	            countneg++;
	    }     
	    int operations=0;
	    while(count1<countneg || countneg%2==1)    
	    {
	        count1++;
	        countneg--;
	        operations++;
	    }
	    cout<<operations<<endl;
	}
    return 0;
}

