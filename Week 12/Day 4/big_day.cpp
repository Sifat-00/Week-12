#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int const x = 1e5+1;
vector<int>prime(x,true);
int main()
{
    Fast_Io;

    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin >> ar[i];
    vector<int> ans(1e5+2,0);
    for(int i=0;i<n;i++)
    {
        set<int> st;
        int val = ar[i];
        for(int j=2;j*j<=val;j++)
        {
            while( val % j ==0)
            {
                st.insert(j);
                val/=j;
            }
        }
        if(val>1) st.insert(val);
        for(auto x : st) ans[x]++;
    }
    int mx = 1;
    for(auto x : ans)
    {
        mx = max(mx,x);
    }
    cout << mx << endl;
    return 0;
}