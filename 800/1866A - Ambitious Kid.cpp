#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	
	vector <int> v;  //can't define v(n) here kyuki saari 3 values are 0 and pushback se uske baad aa jayengi values
	for(int i=0; i<n; i++)
	{
	    int a;
	    cin>>a;
	    if(a<0)
	        a = -1*a;
	    v.push_back(a);     
	}
	
	sort(v.begin(), v.end());
	cout<<v[0];
	

}
