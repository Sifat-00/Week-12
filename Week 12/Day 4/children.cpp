#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int main()
{
    Fast_Io;

    int t;
    cin >> t;
    while(t--)
    {
       ll n;
        cin >> n;
        vector<ll> ar(n);
         for(int i=0;i<n;i++) cin >> ar[i];
        map<int,int>mp;
        for(auto x : ar) mp[x]++;
        vector<int> ans(n+1,0);
        set<int>st(ar.begin(),ar.end());
        for(auto val : st)
        {
            for(int j=val;j<=n;j+=val)
            {
                ans[j]+=(mp[val]);
            }
        }
        ll mx = 0;
        for (int i = 0; i <= n; i++) {  
            mx = max(mx,(ll)ans[i]);
        }
        cout << mx << endl;
    }
    
    return 0;
}