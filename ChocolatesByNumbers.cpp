#include <iostream>

using namespace std;

long long gcd (long long m, long long n)
{
	long long  r;
	while (n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}

// Function to return LCM of two numbers
long long lcm(long long a, long long b)
{
	return (a*b) / gcd(a, b);
}

int solution21(int N, int M) 
{
	// write your code in C++14 (g++ 6.2.0)
	return int(lcm(N, M)/M);
}

/*int main()
{
	cout << solution(10, 4) << endl;
	cout << solution(11, 4) << endl;
	cout << solution(12, 4) << endl;
	cout << solution(13, 4) << endl;

	cout << solution(10, 3) << endl;
	cout << solution(9, 3) << endl;
	cout << solution(8, 3) << endl;
	
	cout << solution(10, 2) << endl;
	cout << solution(9, 2) << endl;

	cout << solution(9, 1) << endl << endl;


	cout << solution(1, 10) << endl;
	cout << solution(2, 10) << endl;
	cout << solution(3, 10) << endl;
	cout << solution(4, 10) << endl;
	cout << solution(5, 10) << endl;
	cout << solution(6, 10) << endl;
	cout << solution(7, 10) << endl;
	cout << solution(8, 10) << endl;
	cout << solution(9, 10) << endl;

	cout << solution(947853, 4453) << endl;
	cout << solution(1000000000, 1) << endl;
	
	return 0;
}*/
