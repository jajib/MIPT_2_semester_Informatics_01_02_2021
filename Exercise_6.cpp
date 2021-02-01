#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		for (int cnt1 = 0; cnt1 < i - 1; cnt1++)
		{
			cout << " ";
		}

		for (int cnt2 = 0; cnt2 < N + N % 2 - 2 * i + 1; cnt2++)
		{
			cout << '*';
		}

		cout << endl;
	}
}
