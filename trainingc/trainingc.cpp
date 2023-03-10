
#include <iostream>
#include<string>
using namespace std;



enum enColors { Red = 1,Green=2,Blue=3 };



void  readColors()
{
	cout << " **********************************\n\n";
	cout << " Please enter the number of The Color : " << endl;
	cout << " (1) Red"<< endl;
	cout << " (2) Green" << endl;
	cout << " (3) Blue" << endl;
	cout << " **********************************\n";
	cout << " Your Choice??" << endl;





};



int main()
{

	readColors();

	int x;
	enColors color;
	cin >> x;
	color = (enColors)x;


	if (color == enColors::Red)
	{
		system("color 4F");
	}
	else if (color == enColors::Green)
	{
		system("color 2F");
	}
	else if (color == enColors::Blue)
	{
		system("color 1F");
	}
	else
	{
		cout << "Wrong choice\n";
	}





	return 0;
}

