#include <iostream>
#include <vector>

using namespace std;

int solution5(int X, vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	vector<int> temp(X, 1);
	int sum = ((X * (X + 1))) / 2;

	if (N < X)
		return -1;

	for (int i = 0; i < N; i++)
	{
		if (temp[A[i] - 1] == 1)
		{
			sum -= A[i];
			temp[A[i] - 1] = 0;
			if (sum == 0)
				return i;
		}
	}

	return -1;
}

/*int main()
{
	vector<int> A1 = { 1,3,1,4,2,3,5,4 };
	vector<int> A2 = { 1 };
	vector<int> A3 = { 1,1,1,1,1,1,1,1 };
	vector<int> A4 = { 5,4,3,1,6,7,1,8 };
	vector<int> A5 = { 1,2,3,1,1,1,1,1 };

//	vector<int> A3 = { 1 };
//	vector<int> A4 = { 0 };

	cout << solution(5, A1) << endl;
	cout << solution(6, A1) << endl;
	cout << solution(7, A1) << endl;
	cout << solution(8, A1) << endl;
	cout << solution(9, A1) << endl;
	cout << solution(1, A2) << endl;
	cout << solution(2, A3) << endl;
	cout << solution(8, A4) << endl;
	cout << solution(3, A5) << endl;

	return 0;
}*/