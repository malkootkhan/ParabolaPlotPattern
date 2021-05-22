#include <iostream>
#include <Windows.h>

#define SQUARE(x)			x*x
#define SCALING_FACTOR		100
#define MAX_X_POINTS		100

using namespace std;


int main()
{
	//y = x^2 is a parabola
	for (short int i = 0; i < MAX_X_POINTS; i++)
	{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { i,SQUARE(i) / SCALING_FACTOR });
		cout << "X";

	}
	return 0;
}