#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int max_sum(vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();

	int min_idx, max_idx;
	min_idx = 0;
	max_idx = 1;
	bool new_min = false;
	int new_min_idx;
	for (int i = 2; i < N; i++)
	{
		if (new_min == false)
		{
			if (A[i] < A[min_idx])
			{
				new_min_idx = i;
				new_min = true;
			}
			else if (A[i] > A[max_idx])
				max_idx = i;
		}
		else // new_min == true
		{
			if (A[i] < A[new_min_idx])
			{
				new_min_idx = i;
				new_min = true;
			}
			else if (A[i] - A[new_min_idx] > A[max_idx] - A[min_idx])
			{
				min_idx = new_min_idx;
				max_idx = i;
				new_min = false;
			}
		}
	}

	return A[max_idx] - A[min_idx];
}

int solution17(vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size()+1;
	vector<int> sum(N, 0);

	for (int i = 1; i < N; i++)
	{
		sum[i] = A[i-1] + sum[i-1];
	}

	return max(max_sum(sum), *max_element(A.begin(), A.end()));
}

/*int main()
{
	vector<int> A = { 3,2,-6,4,0 };
	cout << solution(A) << endl;

	A = { -1, 2, -3, 8, 6, -4, 5, -2, 1 };
	cout << solution(A) << endl;

	A = { 3 };
	cout << solution(A) << endl;

	A = { 1000000, 1000000, 483647 };
	cout << solution(A) << endl;

//	A = vector<int>(1000000, 2147);
//	A[999999] += 483647;
//	cout << solution(A) << endl;

//	A = vector<int>(1000000, -2147);
//	A[999999] -= 483648;
//	cout << solution(A) << endl;

	A = { -9,-8,-7,-6,-5,-4,-3,-2,-1,-9 };
	cout << solution(A) << endl;

	A = { -2,3 };
	cout << solution(A) << endl;

	A = { -2, 1, 1 };
	cout << solution(A) << endl;

	return 0;
}*/
