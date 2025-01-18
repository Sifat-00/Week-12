#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
int main()
{
    Fast_Io;
    int n;
    cin >> n;
    cout << n/2 << endl;
    if(n%2==0)
    {
        for(int i=0;i<n/2;i++) cout << 2 <<" ";
    }
    else {

        for(int i=0;i<n/2-1;i++) cout << 2 <<" ";
        cout << 3 <<" ";
    }
    return 0;
}
