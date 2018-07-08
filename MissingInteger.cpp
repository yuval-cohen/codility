#include <iostream>
#include <vector>

using namespace std;

int solution8(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	vector<int> temp(N + 1, 1);

	for (int i = 0; i < N; i++)
	{
		if (A[i] >= 1 && A[i] <= N)
		{
			temp[A[i] - 1] = 0;
		}
	}

	for (unsigned int j = 0; j < temp.size(); j++)
	{
		if (temp[j] == 1)
			return j + 1;
	}

	// should never get here with legal input
	return 0;
}

/*int main()
{
	vector<int> A1 = { 1, 3, 6, 4, 1, 2 };
	cout << solution(A1) << endl;

	A1 = { 1, 2, 3 };
	cout << solution(A1) << endl;

	A1 = { -1, -3 };
	cout << solution(A1) << endl;

	A1 = { 1, };
	cout << solution(A1) << endl;

	A1 = { 2, };
	cout << solution(A1) << endl;

	return 0;
}*/