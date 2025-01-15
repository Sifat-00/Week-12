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
        string real;
        string nex;
        cin >> real >> nex;

        set<char>st;

        for(auto x : real) st.insert(x);

        string ans;


        // for(auto x : nex)
        // {
        //     if(st.find(x) != st.end()) ans+=x;
        // }
        ans = nex;
        if(ans.size() < real.size())
        {
            cout << "NO" << endl;
            continue;
        }
        if(ans.size()==real.size())
        {
            sort(ans.begin(),ans.end());
            sort(real.begin(),real.end());
            if(ans == real) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        vector<string>v;
        for(int i=0;i<ans.size();i++)
        {
            string x = ans.substr(i,real.size());
            v.push_back(x);
        }
        bool flag = false;
        for(auto x : v)
        {
            string ta = x;
            sort(ta.begin(),ta.end());
            string a = real;
            sort(a.begin(),a.end());
            if(ta == a)
            {
                flag = true;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}