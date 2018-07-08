#include <iostream>
#include <vector>

using namespace std;

int solution4(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	int array_size = A.size();

	vector<int> temp(array_size, 1);

	for (int i = 0; i < array_size; i++)
	{
		if (A[i] < 1 || A[i] > array_size)
			return 0;

		temp[A[i] - 1] = 0;
	}

	for (int j = 0; j < array_size; j++)
		if (temp[j] != 0)
			return 0;

	return 1;
}

/*int main()
{
	vector<int> A1 = { 4, 1, 2, 3 };
	vector<int> A2 = { 4, 1, 3 };
	vector<int> A3 = { 1 };
	vector<int> A4 = { 0 };

	cout << solution(A1) << endl;
	cout << solution(A2) << endl;
	cout << solution(A3) << endl;
	cout << solution(A4) << endl;

	vector<int> A12(100000);
	for (unsigned int i = 0; i < A12.size(); i++)
	{
		A12[i] = i + 1;
	}
	cout << solution(A12) << endl;

	A12[1] = 1;
	cout << solution(A12) << endl;
	
	return 0;
}
*/
