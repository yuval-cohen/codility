#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution12(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();

	if (N == 3)
		return A[0] * A[1] * A[2];

	sort(A.begin(), A.end());
	int max_positive = 0;
	int max_negative = 0;

	if (A[N - 3] > 0 && A[N - 2] > 0 && A[N - 1] > 0)
		max_positive = A[N - 3] * A[N - 2] * A[N - 1];
	
	if (A[0] < 0 && A[1] < 0 && A[N - 1] > 0)
		max_negative = A[0] * A[1] * A[N - 1];

	if (max_positive > 0 || max_negative > 0)
		return max(max_positive, max_negative);

	if (A[N - 1] <= 0)
		return A[N - 3] * A[N - 2] * A[N - 1];
	
	return 0;
}

/*int main()
{
	vector<int> A{ -3,1,2,-2,5,6 };
	cout << solution(A) << endl;

	A = { -3,-10,2,-2,5,6 };
	cout << solution(A) << endl;

	A = { -3,0,2 };
	cout << solution(A) << endl;

	A = { 1,-3,0,2 };
	cout << solution(A) << endl;

	return 0;
}*/
