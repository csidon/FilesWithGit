#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Jacket {
	string brand;
	string leather, canvas, fur, color, size;
	double price;

	//structure thing
	Jacket(string br = "", string lth = "", string can = "", string furry = "", string col = "", string sz = "", double px = 0.00)
	{
		brand = br;
		leather = lth;
		canvas = can;
		fur = furry;
		color = col;
		size = sz;
		price = px;
	}
};


int main()
{
	//This is a new file created by member 1
}