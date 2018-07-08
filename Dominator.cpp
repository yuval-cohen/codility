#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution15(vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)
	vector<int> temp = A;
	sort(temp.begin(), temp.end());

	int N = temp.size();
	if (N == 0)
		return -1;

	int dominator = temp[N / 2];
	int dominator_count = 0;
	for (int i = 0; i < N; i++)
	{
		if (A[i] == dominator)
		{
			dominator_count++;
			if (dominator_count * 2 > N)
				return i;
		}
	}

	return -1;
}

/*int main()
{
	vector<int> A;
	cout << solution(A) << endl;

	A = { 3,2,3,4,3,3,3,-1 };
	cout << solution(A) << endl;

	A = { 3,2,3,4 };
	cout << solution(A) << endl;

	A = { 3,2,3,4,3 };
	cout << solution(A) << endl;

	A = { 3 };
	cout << solution(A) << endl;

	A = { 1, 2, 1 };
	cout << solution(A) << endl;

	return 0;
}*/
