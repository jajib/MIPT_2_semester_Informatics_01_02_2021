#include <iostream>
#include <string>
#include <complex>
#include <vector>

using namespace std;

int main()
{
	double length = 34.5;
	bool bool_variable = false;
	int width = 156;
	
	double height = 3.4;
	double distance {3.4};
	double capacity = {3.4};
	
	complex<double> z_complex = 1;
	
	complex<double> point_on_complex_plane {length, height};
	complex<double> point_on_complex_plane2 = {distance, capacity};
	vector<int> array_of_barcodes {8219, 1848, 1718, 1566, 3115, 4914};
	
	int weight = 3.9; //Examples from 'Try' section from Colab, Lab1. I understand that the result will be 3, not 3.9 
	int square = {3.9};//
	cout << weight << " " << square << endl;
	
	auto existence = true;
	auto letter = 'f';
	auto index  = 456;
	auto depth = 9.3;
	auto side_length = sqrt(556);
	auto equality {true};
	
	return 0;
}
