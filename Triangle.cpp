#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution10(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	sort(A.begin(), A.end());

	int N = A.size();
	for (int i = 0; i < N-2; i++)
	{
		long long a = A[i];
		long long b = A[i + 1];
		if (a + b > A[i + 2])
			return 1;
	}

	return 0;
}

/*int main()
{
	vector<int> A = { 10,2,5,1,8,20 };
	cout << solution(A) << endl;

	A = { 10,50,5,1 };
	cout << solution(A) << endl;

	A = { 2147483645,2147483646,2147483647 };
	cout << solution(A) << endl;

	return 0;
}*/