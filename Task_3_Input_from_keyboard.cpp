#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text, sentence, string1, string2, string3;
	
	cin  >> text;	
	
	cout << text << endl;
	
	
	getline(cin, sentence);
	
	cout << sentence << endl;
	
	
	cin  >> string1 >> string2 >> string3;
	
	cout << string1 << ' ' << string2 << ' ' << string3 << endl;
	
	
	return 0;
}
