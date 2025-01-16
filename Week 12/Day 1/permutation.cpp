#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
       vector<int>ar(n);
        for(int i=0;i<n;i++) cin >> ar[i];
        if(n==1)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int>b(ar);
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
           if(ar[i] == b[i])
           {
                if(i==n-1) swap(b[i],b[i-1]);
                else swap(b[i],b[i+1]);
           }
        }
        for(auto x : b)
        {
             cout << x << " ";
        }
        cout << endl;
        
    }
    return 0;
}