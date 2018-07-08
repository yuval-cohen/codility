#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> solution6(int N, vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)
	vector<int> counters(N, 0);
	int max_counter = 0;
	int max_counter_op = 0;

	for (unsigned int i = 0; i < A.size(); i++)
	{
		if (A[i] <= N)
		{
			if (counters[A[i] - 1] < max_counter_op)
			{
				counters[A[i] - 1] = max_counter_op;
			}
			counters[A[i] - 1]++;
			if (max_counter < counters[A[i] - 1])
			{
				max_counter = counters[A[i] - 1];
			}
		}
		if (A[i] == N + 1)
		{
			max_counter_op = max_counter;
		}
	}

	for (int j = 0; j < N; j++)
	{
		if (counters[j] < max_counter_op)
		{
			counters[j] = max_counter_op;
		}
	}

	return counters;
}


/*int main()
{
	vector<int> A1 = { 3,4,4,6,1,4,4 };
	vector<int> counters = solution(5, A1);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;
	counters = solution2(5, A1);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	vector<int> A2 = { 3,4,4,6,1,4,4,6,2,4,5,6,1};
	counters = solution(5, A2);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;
	counters = solution2(5, A2);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	vector<int> A2 = { 1,1,1,1,1,1,1,2 };
	counters = solution(1, A2);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	vector<int> A3 = { 1 };
	counters = solution(1, A3);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	vector<int> A4 = { 2 };
	counters = solution(1, A4);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	vector<int> A5(100000,1);
	counters = solution(1, A5);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	vector<int> A6(100000, 1);
	counters = solution(100000, A6);
	copy(counters.begin(), counters.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	return 0;
}*/
