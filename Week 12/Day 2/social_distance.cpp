#include<bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
	
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,chair;
		cin >> n >> chair;
		ll ar[n];
		for(int i=0;i<n;i++)
			cin >> ar[i];
		sort(ar,ar+n);
		ll cnt = 0;
		for(int i=0;i<n;i++)
		{	
			 if(i==n-1)
			 {
				cnt += max(ar[i],ar[0]);
			 }
			 else cnt+= max(ar[i],ar[i+1]);
		}
		if(cnt+n <= chair) cout << "YES" << endl;
		else cout << "NO" <<endl;
	}

	return 0;


}