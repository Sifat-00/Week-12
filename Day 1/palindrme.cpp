#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string ar)
{
    int i=0;int j = ar.size()-1;
    while(i<=j)
    {
        if(ar[i]!=ar[j]) return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    string palin;
    int n,size;
    cin >> n >> size;
    vector<string> st;
    int m = n;
    while(m--)
    {
        string a;
        cin >> a;
        st.push_back(a);
    }
    bool flag = false;
    vector<bool> track(n,false);
    vector<pair<string,string>> v;
    for(int i=0;i<n;i++)
    {
        if( !flag && is_palindrome(st[i]))
        {
            palin = st[i];
            flag = true;
        }
        if(track[i] == true) continue;
        string main = st[i];
        track[i] = true;
        string second = main;
        reverse(second.begin(),second.end());
        for(int j=i+1;j<n;j++)
        {
            if(track[j] == true) continue;
            string x = st[j];
            if(x==second)
            {
                v.push_back({main,second});
                track[j] = true;
            }
        }
    }
    string a,b;
    for(auto x : v)
    {
        a+=x.first;
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        b+=v[i].second;
    }
    cout << a.size()+b.size()+palin.size() << endl;
    cout << a ;
    if(flag) cout << palin;
    cout << b << endl;
    return 0;
}