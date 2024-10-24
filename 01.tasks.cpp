#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll int 
#define F(i,a,b) for(int i=a;i<=b;i++)

bool compare(pair<ll,ll> p1,pair<ll,ll> p2){
     return p1.second <= p2.second;
}

int main(){
	ll t,n,s,e;
	cin>>t;
	while(t--){
		cin>>n;
		vector<pair<ll,ll>> v;
		F(i,1,n){
		   cin>>s>>e;
		   v.push_back(make_pair(s,e));
		}
		sort(v.begin(),v.end(),compare);
		ll ans = 0;
		ll re = 0;
		for(auto p : v){
			if(p.first >= re){
		  	ans++;
		  	re = p.second;
		 }
		 	else{
			continue;}
		}
		v.clear();  // clearing the vector after use it for each case
		cout<<ans<<endl;
	}
}
