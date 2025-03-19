#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,n;
	    cin>>a>>b>>n;
	    vector <int> v(n);
	    for(int i=0; i<n; i++)
	        cin>>v[i];
	       
	    long long max_time=b; //b to poora diya hi hai to usse poora hi add karlo since if 3 then 3, 2, 1 = 3 baar hi to chala before 0 so peace
	    for(auto it : v)
	        max_time += min(it, a-1); //since n, n-1, ...|| a, a-1... , 3, 2, 1 ||, 0 boundary jo hai wo just 0 se pehle hi to aayegi therefore -1 
	        
	    cout<<max_time<<endl;     
	}
    return 0;
}
