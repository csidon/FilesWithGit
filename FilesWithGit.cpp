#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct Jacket 
{
	string brand;
	string leather, canvas, fur, color, size;
	double price;

	//constructor
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
	//member2 taking input for 5 different shoes
	Jacket properties[2];
	Jacket* pJack = properties;

	fstream jacketPropAppFile("jacket.csv",ios::app);
	for (int i = 0; i < 2; i++)
	{
		cout << "\nJacket properties brand: " ;
		cin >> properties[i].brand;
		jacketPropAppFile << properties[i].brand << ",\n";
		cout << "\nJacket properties leather: ";
		cin >> properties[i].leather;
		jacketPropAppFile << properties[i].leather << "\r" << endl;
	}

	for (int i = 0; i < 2; i++)
	{

		cout << pJack->brand << ",\n";

		cout << pJack->leather << "\r" << endl;
		pJack++;
	}

	jacketPropAppFile.close();

}