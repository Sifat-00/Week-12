#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int total = 0;
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin >> ar[i];
        }
        long long one = 0;
        long long zero = 0;
        for(int i=0;i<n;i++)
        {
            if(ar[i] == 1) one++;
            else if(ar[i] == 0) zero++;
        }
        cout << (1ll << zero)*one << endl;
    }
    return 0;
}