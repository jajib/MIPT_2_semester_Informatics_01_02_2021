#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int time_of_start = 5, time_of_finish = 10, density = 15, step = 2;
	
	while (time_of_start < time_of_finish)
	{
		time_of_start += step;
		cout << time_of_start << endl;
	}
	
	for (int i = 0; i <= density; i += step)
	{
		cout << time_of_start * i + 1 << endl;
	}

	vector<int> barcodes = {1563, 2343, 9985, 2108, 3424, 1092};
	for (int cnt : barcodes)
	{
		cout << cnt << endl;
	}
}
