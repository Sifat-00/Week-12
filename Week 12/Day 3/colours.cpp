#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);


vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31};

int main()
{
    Fast_Io;

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);

        for(int i=0;i<n;i++){
            cin >> ar[i];
        }

        map<int,vector<int>> mp;


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<11;j++)
            {
                if(ar[i] % primes[j] == 0)
                {
                     mp[primes[j]].push_back(i);
                     break;
                }
                
            }
        }

        vector<int>ans(n);


        int cnt = 1;


        for(auto x : mp)
        {
            
            for(auto value : x.second)
            {
                ans[value] = cnt;
            }
            cnt++;
        }
        cout << mp.size() << endl;
        for(int i=0;i<n;i++) cout << ans[i] <<" ";
        cout << endl;
    }
    return 0;
}