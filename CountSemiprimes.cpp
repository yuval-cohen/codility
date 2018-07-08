#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>

using namespace std;

bool is_prime(int n)
{
	int D, M;

	if (n <= 1)
		return false;

	if (n <= 3)
		return true;

	for (D = int(sqrt(n)); D > 1; D--)
	{
		M = int(n / D);
		if ((D * M) == n)
		{
			return false;
		}
	}

	return true;
}

bool is_semi_prime(int n, vector<bool> &prime)
{
	int D, M;
	if (n <= 3)
		return false;

	for (D = int(sqrt(n)); D > 1; D--)
	{
		M = int(n / D);
		if ((D*M) == n)
		{
			return (prime[D] && prime[M]);
		}
	}

	return false;
}

vector<int> solution20(int N, vector<int> &P, vector<int> &Q) 
{
	// write your code in C++14 (g++ 6.2.0)
	int M = P.size();
	int i;
	vector<bool> prime(N + 1, false);
	for (i = 1; i < N + 1; i++)
	{
		if (is_prime(i))
			prime[i] = true;
	}

	vector<bool> semi_prime(N+1, false);
	for (i = 1; i < N+1; i++)
	{
		if (is_semi_prime(i, prime))
			semi_prime[i] = true;
	}

	vector<int> sum_semi_primes(N+1, 0);
	for (i = 0; i < N+1; i++)
	{
		sum_semi_primes[i] = int(semi_prime[i]);
		if (i > 0)
		{
			sum_semi_primes[i] += sum_semi_primes[i - 1];
		}
	}
	vector<int> report(M, 0);
	for (i = 0; i < M; i++)
	{
		report[i] = sum_semi_primes[Q[i]];
		if (P[i] > 0)
		{
			report[i] -= sum_semi_primes[P[i] - 1];
		}
	}

	return report;
}

/*int main()
{
	vector<int> P = { 1,4,16 };
	vector<int> Q = { 26,10,20 };
	vector<int> R = solution(26, P, Q);
	int M = P.size();
	copy(R.begin(), R.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	return 0;
}
*/