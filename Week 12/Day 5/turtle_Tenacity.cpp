#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false); cin.tie(nullptr);
#define endl '\n'

int main() {
    Fast_Io;

    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        while(true)
        {
            ll gcd = __gcd(a,b);
            if(gcd == 1) break;

            b/=gcd;
        }
        if(b==1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
