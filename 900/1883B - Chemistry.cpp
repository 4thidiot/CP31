#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    map <char,int> m;
    for(auto it : s)
        m[it]++;
        
    int odds=0, evens=0;    
    
    for(auto it : m)
    {
        if(it.second%2==0)
            evens++;
        else
            odds++;
    }
    
    if(odds-k==0 || odds-k==1 || odds-k<=1) //3rd condition whi hai also jab suppose odds are 7 and k is 6 then socho sab odd freq mein se we minused 1 to odd-odd is even so now only one odd is left and baaki are odd...so perfect logic
    
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}


int main() 
{
	int t;
	cin>>t;
	while(t--)
	    solve();
	
	return 0;
}
