#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int solution22(vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)
	int count_abs = 0;
	int count_INT_MIN = 0;
	auto top = A.begin();
	auto bottom = A.end() - 1;
	while (top < bottom)
	{
		while (top < bottom)
		{
			if (*top == *(top + 1))
			{
				top += 1;
				count_abs++;
			}
			else
				break;
		}
		if (top >= bottom)
			break;

		while (top < bottom)
		{
			if (*bottom == *(bottom - 1))
			{
				bottom -= 1;
				count_abs++;
			}
			else
				break;
		}
		if (top >= bottom)
			break;

		if (*top == INT_MIN)
		{
			count_INT_MIN++;
			top += 1;
		}
		else if (abs(*top) < abs(*bottom))
		{
			bottom -= 1;
		}
		else if (abs(*top) > abs(*bottom))
		{
			top += 1;
		}
		else
		{
			top += 1;
			count_abs++;
		}
	}

	if (*bottom == INT_MIN)
		count_INT_MIN++;
	if (count_INT_MIN > 1)
		count_abs += count_INT_MIN - 1;

	return A.size() - count_abs;
}

/*int main()
{
	vector<int> A = { -5,-3,-1,-1, -1, 0,1,1,1,1,3,3,3,3,3,3,6 };
	cout << solution(A) << endl;

	A = { -5,-5,-5,-5,5,5,5 };
	cout << solution(A) << endl;

	A = { 1,1 };
	cout << solution(A) << endl;

	A = { -5,-3,-1,1,3,6 };
	cout << solution(A) << endl;

	A = { 1 };
	cout << solution(A) << endl;

	A = vector<int>(100000,1);
	cout << solution(A) << endl;

	A = { INT_MIN , -1, 0, 1 };
	cout << solution(A) << endl;

	A = { INT_MIN , INT_MIN, 0, 1 };
	cout << solution(A) << endl;

	A = vector<int>(100000, INT_MIN);
	cout << solution(A) << endl;

	return 0;
}
*/