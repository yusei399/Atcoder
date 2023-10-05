#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;


int main()
{
	int N, X;

	cin >> N >> X;

	int l=100, r=0, c=0;
	for (int i = 0; i < N-1; i++)
	{
		int a;
		cin >> a;
		l = min(l, a);
		r = max(r, a);
		c+=a;
	}
		if(c-r >= X){cout << "0\n";return 0;}
		int need=X-(c-l-r);
		if(need <= r){cout << need << "\n";return 0;}
		cout << "-1\n";
		return 0;
}