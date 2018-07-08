#include <iostream>
#include <vector>

using namespace std;

int solution2(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	long long arry_size = A.size();

	if (arry_size == 0)
		return 1;

	long long sum = 0;

	for (int i = 0; i < arry_size; i++)
		sum += A[i];
	
	arry_size++;
	long long expected_sum;
	if ((arry_size % 2) == 1)
		// 1 2 3 4 5
		expected_sum = ((arry_size / 2) + 1) * arry_size;
	else
		// 1 2 3 4
		expected_sum = (arry_size + 1) * (arry_size/2);

	return int(expected_sum - sum);
}

/*int main()
{
	vector<int> A1 = { 2, 3, 1, 5 };
	vector<int> A2 = { 1 };
	vector<int> A3 = { 2 };
	vector<int> A4 = { 2, 3 };
	vector<int> A5 = { 2, 1 };
	vector<int> A6 = { 1, 3 };
	vector<int> A7 = { 2, 3, 4 };
	vector<int> A8 = { 1, 3, 4 };
	vector<int> A9 = { 1, 2, 4 };
	vector<int> A10 = { 2, 3, 1 };
	vector<int> A11;

	cout << solution(A1) << endl;
	cout << solution(A2) << endl;
	cout << solution(A3) << endl;
	cout << solution(A4) << endl;
	cout << solution(A5) << endl;
	cout << solution(A6) << endl;
	cout << solution(A7) << endl;
	cout << solution(A8) << endl;
	cout << solution(A9) << endl;
	cout << solution(A10) << endl;
	cout << solution(A11) << endl;

	vector<int> A12(100000);
	for (unsigned int i = 0; i < A12.size(); i++)
	{
		A12[i] = i + 2;
	}
	cout << solution(A12) << endl;

	return 0;
}*/
