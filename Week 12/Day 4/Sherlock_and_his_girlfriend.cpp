#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'


bool isprime(int n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}



int main()
{
    Fast_Io;

    int n;
    cin >> n;
    int cnt = 0;

    for(int i=2;i<=n+1;i++)
    {
        if (isprime(i)) cnt++;
    }
    if(cnt == n) cout << 1 << endl;
    else cout << 2 << endl;
    for(int i=2;i<=n+1;i++)
    {
        if(isprime(i)) cout << 1 <<" ";
        else cout << 2 <<" ";
    }
    return 0;
}