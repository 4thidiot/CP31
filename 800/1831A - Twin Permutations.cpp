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
        for(int i=0; i<n; i++)
            cout<<(n+1)-v[i]<<" "; //n+! because otherwise jab n hoga to 0 hojaayega isliye overall ai+bi = n+1 hi kardiya constant isntead of n
        cout<<endl;    
	}
    return 0;
}   
