#include <iostream>
#include <vector>

using namespace std;

int solution16(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	if (N == 0)
		return 0;

	int min_idx, max_idx;
	min_idx = max_idx = 0;
	int new_min_idx = -1;
	for (int i = 1; i < N; i++)
	{
		if (new_min_idx == -1)
		{
			if (A[i] < A[min_idx])
				new_min_idx = i;
			else if (A[i] > A[max_idx])
				max_idx = i;
		}
		else // new_min_idx != -1
		{
			if (A[i] < A[new_min_idx])
				new_min_idx = i;
			else if (A[i] - A[new_min_idx] > A[max_idx] - A[min_idx])
			{
				min_idx = new_min_idx;
				max_idx = i;
				new_min_idx = -1;
			}
		}
	}

	return A[max_idx] - A[min_idx];
}

/*int main()
{
	vector<int> A = { 23171, 21011, 21123, 21366, 21013, 21367 };
	cout << solution(A) << endl;

	A = { 23171 };
	cout << solution(A) << endl;

	A = { };
	cout << solution(A) << endl;

	A = {5,4,3,2,1,0};
	cout << solution(A) << endl;

	return 0;
}*/