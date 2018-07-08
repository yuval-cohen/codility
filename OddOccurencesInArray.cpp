#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution27(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();

	sort(A.begin(), A.end());

	for (int i = 0; i < N; i+=2)
	{
		if (i == N - 1)
			return A[N - 1];

		if (A[i] != A[i + 1])
			return A[i];
	}

	return A[A.size()/2];
}

/*int main()
{
	vector<int> A = { 1 };
	cout << solution(A) << endl;

	A = { 2,1,1 };
	cout << solution(A) << endl;

	A = { 9,3,9,3,9,7,9 };
	cout << solution(A) << endl;

	return 0;
}
*/