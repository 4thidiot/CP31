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
	    
	    map <int,int> m;
	    for(auto it : v)
	        m[it]++;
	    
	    if(m.size()>=3)
	        cout<<"No"<<endl;
	    else
	    {
	        int freq_1 = m.begin()->second;
	        int freq_2 = m.rbegin()->second; //doing this takes care of the case yes when all elements are equal automatically since same hi cheez ko point karenge dono pointers
	        if(freq_1 == freq_2)
	            cout<<"Yes"<<endl;
	        else if(n%2==1 && abs(freq_1-freq_2)==1) 
	            cout<<"Yes"<<endl;
	        else
	            cout<<"No"<<endl;
	    }
	        
	}
    return 0;
}
