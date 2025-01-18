#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);


bool isprime(ll n)
{
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    Fast_Io;

    ll n;
    cin >> n;
    while(n--)
    {
        ll val;
        cin >> val;
       ll x = sqrtl(val);
        if(x*x == val && isprime(sqrtl(val))) cout << "YES" << endl;
        else cout << "No" << endl;
    }

    return 0;
}