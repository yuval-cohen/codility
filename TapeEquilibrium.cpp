#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int solution1(vector<int> &A) 
{
	int array_sum = 0;
	int equilibrium = 0x7fffffff;

	for (unsigned int i = 0; i < A.size(); i++)
	{
		array_sum += A[i];
	}

	int prefix_sum = 0;
	int suffix_sum = array_sum;
	for (unsigned int j = 1; j < A.size(); j++)
	{
		prefix_sum += A[j - 1];
		suffix_sum -= A[j - 1];
		if (abs(suffix_sum - prefix_sum) < equilibrium)
		{
			equilibrium = abs(suffix_sum - prefix_sum);
			if (equilibrium == 0)
				break;
		}

	}

	return equilibrium;
}

/*int main()
{
	vector<int> A1 = { 3, 2, 1, 4, 3 };
	vector<int> A2 = { 2, 2 };
	vector<int> A3 = { 100000, -100000 };
	vector<int> A4 = { 100000, 0, 100000 };
	vector<int> A5 = { 1,2,3,4,5,6,7,8,9,-45  };

	cout << solution(A1) << endl;
	cout << solution(A2) << endl;
	cout << solution(A3) << endl;
	cout << solution(A4) << endl;
	cout << solution(A5) << endl;

	return 0;
}*/