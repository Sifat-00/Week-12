#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define Fast_Io ios::sync_with_stdio(false);cin.tie(nullptr);
int main()
{
    Fast_Io;

    int t;
    cin >> t;

    while(t--)
    {
        int N;
        cin >> N;

        int cnt = 0;

        for(int i=1;i*i<=N;i++)
        {
            if(N%i==0)
            {
                cnt++;
                if(i != N/i)
                {
                    cnt++;
                }
            }
        }

        cout << cnt << endl;
    }

    return 0;

}