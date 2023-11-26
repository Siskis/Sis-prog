#include<iostream>
#include<iomanip>
#include <cstdlib>

using namespace std;

int array_masiv1[8];
int array_masiv2[18];

void func_random();
int main()
{
	setlocale(0, "");
	func_random(); 
	for (int i = 0; i < 8; i++)
	{
		cout << setw(5) << array_masiv1[i] << endl;

	}
	cout << endl;
	for (int i = 0; i < 18; i++)
	{
		cout << setw(5) << array_masiv2[i] << endl;
	}
	cout << endl;
	 

	return 0;

}

void func_random()

{
	srand(time(0));
	setlocale(0, "");
	
	for (int i = 0; i < 8; i++)
	{
		array_masiv1[i] = rand() % 100;
	}
	for (int i = 0; i < 18; i++)
	{
		array_masiv2[i]= rand() % 100;
	}
	cout << endl;
}



