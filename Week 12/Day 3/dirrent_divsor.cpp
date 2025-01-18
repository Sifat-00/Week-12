#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'


bool prime(ll n)
{
    if(n==1) return false;

    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    Fast_Io;
    int t;
    cin >> t;
    while(t--)
    {
        ll d;
        cin >> d;
        ll a = 1+d;
        while(!prime(a)) a++;

        ll y = a+d;
        while(!prime(y)) y++;

        cout << a*y << endl;
    }
    return 0;
}
