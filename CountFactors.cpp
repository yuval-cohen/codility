#include <iostream>
#include <cmath>

using namespace std;

int solution19(int N) 
{
	// write your code in C++14 (g++ 6.2.0)
	int factor_count = 0;
	for (int D = int(sqrt(N)); D >= 1; D--)
	{
		int M = int(N / D);
		if ((D*M) == N)
		{
			factor_count += 2;
			if (D == M)
				factor_count--;
		}
	}

	return factor_count;
}

/*int main()
{
	cout << solution(24) << endl;
	cout << solution(36) << endl;
	cout << solution(1) << endl;
	cout << solution(2) << endl;
	cout << solution(3) << endl;
	cout << solution(97) << endl;
	cout << solution(2147483647) << endl;

	return 0;
}*/