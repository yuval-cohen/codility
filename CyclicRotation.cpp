#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

vector<int> solution29(vector<int> &A, int K) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = A.size();
	vector<int> B(N);

	for (int i = 0; i < N; i++)
	{
		B[(i + K) % N] = A[i];
	}

	return B;
}

/*int main()
{
	vector<int> A = { 3, 8, 9, 7, 6 };
	vector<int> B = solution(A, 3);
	copy(B.begin(), B.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	A = { 1, 2, 3, 4 };
	B = solution(A, 4);
	copy(B.begin(), B.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	A = { 0,0,0 };
	B = solution(A, 1);
	copy(B.begin(), B.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	A = { };
	B = solution(A, 1);
	copy(B.begin(), B.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	A = { 1, 2, 3, 4,5,6,7,8,9,10 };
	B = solution(A, 5);
	copy(B.begin(), B.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	return 0;
}
*/