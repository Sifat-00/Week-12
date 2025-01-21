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
        int a,b,l;
        cin >> a >> b >> l;

        int cnt = 0;

        set<int> ans;
        ll x = 1;

        for(int i=1;i<=20 && x<=l;i++)
        {
            ll y= 1;
            for(int j=1;j<=20 && y<=l;j++)
            {
                if((l%(x*y)) == 0) ans.insert(l/(x*y));
                y*=b;
            }
            x*=a;
        }
        cout << ans.size() << endl;
    }
    return 0;
}