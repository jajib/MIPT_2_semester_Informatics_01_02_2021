#include <iostream>

using namespace std;

int main()
{
	int N;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		for (int cnt = N - i - 1; cnt >= 0; cnt--)
		{
			cout << '*';
		}

		cout << endl;
	}
}
