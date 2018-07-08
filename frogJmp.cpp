#include <iostream>

using namespace std;

int solution3(int X, int Y, int D) 
{
	// write your code in C++14 (g++ 6.2.0)
	int result;

	if (X == Y)
		return 0;

	if (D >= Y)
		return 1;

	result = (Y - X) / D;
	if (((result * D) + X) < Y)
		result++;

	return result;
}

/*int main()
{
	//                X			Y			D
	cout << solution(10,		85,			30) << endl;
	cout << solution(10,		85,			100) << endl;
	cout << solution(10,		100,		30) << endl;
	cout << solution(10,		100,		30) << endl;
	cout << solution(10,		10,			30) << endl;
	cout << solution(999999999,	1000000000,	999999998) << endl;
	cout << solution(1, 1000000000, 1) << endl;

	return 0;
}*/