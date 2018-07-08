#include <iostream>
#include <cmath>

using namespace std;

int solution18(int N) 
{
	// write your code in C++14 (g++ 6.2.0)
	for (int i = int(sqrt(N)); i >= 0; i--)
	{
		int A = i;
		int B = N / i;
		if (A*B == N)
			return 2 * (A + B);
	}

	// should not get here
	return 2 * (N + 1);
}

/*int main()
{
	cout << solution(30) << endl;
	cout << solution(1) << endl;
	cout << solution(1000000000) << endl;
	cout << solution(27) << endl;
	cout << solution(64) << endl;
	cout << solution(97) << endl;


	return 0;
}*/