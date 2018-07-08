#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int rand_input()
{
	return rand() % 2;
}

int solution7(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	long num_of_pairs, num_of_zeros, num_of_ones;

	num_of_pairs = num_of_zeros = num_of_ones = 0;
	for (unsigned int i = 0; i < A.size(); i++)
	{
		if (A[i] == 0)
		{
			num_of_pairs += (num_of_zeros * num_of_ones);
			if (num_of_pairs > 1000000000)
				return -1;

			num_of_ones = 0;
			num_of_zeros++;
		}
		else // (A[i] == 1)
		{
			num_of_ones++;
		}
	}

	num_of_pairs += (num_of_zeros * num_of_ones);
	if (num_of_pairs > 1000000000)
		return -1;

	return int(num_of_pairs);
}

/*int main()
{
	vector<int> A1 = { 0,1,0,1,1 };
	cout << solution(A1) << endl;

	A1 = { 0,1,0,1,1,0,1 };
	cout << solution(A1) << endl;

	A1 = { 0 };
	cout << solution(A1) << endl;

	A1 = { 1 };
	cout << solution(A1) << endl;

	A1 = { 0,1 };
	cout << solution(A1) << endl;

	A1 = { 1,0 };
	cout << solution(A1) << endl;

	A1 = vector<int>(100000);
	generate(A1.begin(), A1.end(), rand_input);
	cout << solution(A1) << endl;
	
	return 0;
}*/