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
    int cnt = 0;
    for(int j=2;j<=n;j++)
    {
        map<int,int> mp;
        int k = j;
        for(int i=2;i*i<=k;i++)
        {
            if(k%i==0)
            {
                while(k%i==0)
                {
                    mp[i]++;
                    k/=i;
                }
            }
        }
        if(k>1) mp[k]++;
        if(mp.size()==2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}