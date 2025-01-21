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
        ll mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> ar[i];
            mx = max(mx, ar[i]);
        }

        if(n == 1) {
            cout << 1 << endl;
            continue;
        }

        ll ans = 0;
        for(int i = 0; i < n; i++) {
            ans = __gcd(ans, mx - ar[i]);
        }

        ll val = mx - ans;
        set<ll> stt;

        for(auto x : ar) {
            stt.insert(x);
        }
        bool flag = false;
        for(int i=1;i<n;i++) {
            if(stt.find(val) == stt.end()) {
                flag = true;
                stt.insert(val);
                break;
            }
            val -= ans;
        }

        if(!flag) {
            stt.insert(mx + ans);
            mx = mx + ans;
        }

        ll steps = 0;
        for(auto x : stt) {
            steps += (mx - x) / ans;
        }

        cout << steps << endl;
    }

    return 0;
}