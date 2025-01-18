#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
int main()
{
    Fast_Io;

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin >> ar[i];
        }
        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=ar[i];j++)
            {
                if(ar[i] % j == 0)
                {
                    while(ar[i]%j==0)
                    {
                        mp[j]++;
                        ar[i]/=j;
                    }
                }
            }
            if(ar[i]>1) mp[ar[i]]++;
        }
        
         bool ok = true;

        for(auto [x , y] : mp)
        {
            if(y%n!=0)
            {
                 ok = false;
                 break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }
        else cout << "No" << endl;
    }

    return 0;
}