#include <iostream>
#include <vector>

using namespace std;

bool is_overlapping(int Ai, int Aj, int Bi, int Bj)
{
	if (((Ai <= Aj) && (Aj <= Bi)) || ((Aj <= Ai) && (Ai <= Bj)))
		return true;

	return false;
}

int solution24(vector<int> &A, vector<int> &B) 
{
	// write your code in C++14 (g++ 6.2.0)
	if (A.size() == 0)
		return 0;

	int no_of_non_overlap_seg = 1;

	auto A_pivot = A.begin();
	auto B_pivot = B.begin();
	auto A_iter = A_pivot + 1;
	auto B_iter = B_pivot + 1;
	while (A_iter != A.end())
	{
		if (is_overlapping(*A_pivot, *A_iter, *B_pivot, *B_iter) == false)
		{
			no_of_non_overlap_seg++;
			A_pivot = A_iter;
			B_pivot = B_iter;
		}

		A_iter += 1;
		B_iter += 1;
	}

	return no_of_non_overlap_seg;
}

/*int main()
{
	vector<int>A;
	vector<int>B;
	cout << solution(A, B) << endl;

	A = {1,3,7,9,9};
	B = {5,6,8,9,10};
	cout << solution(A, B) << endl;

	A = { 1 };
	B = { 5 };
	cout << solution(A, B) << endl;

	A = { 1,1,1,1 };
	B = { 5,6,7,8 };
	cout << solution(A, B) << endl;

	A = vector<int>(30000, 1);
	B = vector<int>(30000, 2);
	cout << solution(A, B) << endl;

	return 0;
}
*/