#include <iostream>

using namespace std;

int main ()
{
	int temperature = 15, distance = 6, height = 4, depth = 34, length = 0;	
	
	if (temperature >= 12)
	{
		if (height < depth) 
		{
			cout << "temperature >= 12, height < depth" << endl;
		}
		
		cout << "distance + 34 = " << distance + 34 << endl;
	} 
	else if (length - height >= depth)
	{
		cout << "distance + length = " << distance + length << endl;
	} else
	{
		cout << "height + distance - depth = " << height + distance - depth << endl;
	}
}
