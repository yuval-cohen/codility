#include <iostream>
#include <vector>

using namespace std;

int solution23(int K, vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	int length = 0, ropes_count = 0;
	auto iter = A.begin();
	while (iter != A.end())
	{
		length += *iter;
		if (length >= K)
		{
			ropes_count++;
			length = 0;
		}
		iter++;
	}

	return ropes_count;
}

/*int main()
{
	vector<int> A = { 1,2,3,4,1,1,3 };
	cout << solution(4, A) << endl;

	A = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
	cout << solution(4, A) << endl;

	A = { 1,1,1,1 };
	cout << solution(4, A) << endl;
	cout << solution(1, A) << endl;
	cout << solution(2, A) << endl;
	cout << solution(3, A) << endl;

	return 0;
}*/
