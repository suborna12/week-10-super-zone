#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
#define nl cout << endl
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pb push_back
#define all(x) x.begin(),x.end()
using namespace std;
void ss(){
ll n,k;
cin>>n>>k;
vector<ll>v;
while(n){
    v.pb((n+1)/2);
    n/=2;
}
ll x=0,p=1;
for(auto it:v){
    if (x<k && k<=x+it) {
			cout << p*(2*(k-x)-1)<<endl;
			return;
		}
		x+=it;
		p*=2;
}
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
     cin>>t;
    while(t--)
    {
        ss();
    }
}
