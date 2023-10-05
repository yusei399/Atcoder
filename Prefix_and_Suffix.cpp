#include <iostream>
#include <string>
using namespace std;


int main()
{
	int N, M;
	string S, T;
	cin >> N >> M >> S >> T;

	int front_flag = true;
	for (int i = 0; i < N; i++)
	{
		if (S[i] != T[i])
		{
			front_flag = false;
		}
	}

	int  end_flag = true;
	for (int i = 0; i < N; i++)
	{
		if (S[i] != T[M - N + i])
		{
			end_flag = false;
		}
	}

	if (front_flag)
	{
		cout << (end_flag ? 0 : 1) << endl;
	}
	else
	{
		cout << (end_flag? 2: 3) << endl;
	}
}



