#include <iostream>

using namespace std;

int solution25(int N) 
{
	// write your code in C++14 (g++ 6.2.0)
	int state = 0; // initial
	int current_gap = 0;
	int longest_gap = 0;
	while (N > 0)
	{
		switch (state)
		{
		case 0:
			if (N & 0x1)
				state = 2;
			else
				state = 1;
			break;

		case 1:
			while ((N & 0x1) == 0)
				N >>= 1;
			if (N & 0x1)
				state = 2;
			break;
		
		case 2:
			if (N & 0x1)
			{
				state = 3;
				while (N & 0x1)
					N >>= 1;
			}
			break;

		case 3:
			while ((N & 0x1) == 0)
			{
				N >>= 1;
				current_gap++;
			}
			if (N & 0x1)
			{
				if (longest_gap < current_gap)
				{
					longest_gap = current_gap;
				}
				current_gap = 0;
				state = 2;
			}
			break;
		}
	}

	return longest_gap;
}

/*int main()
{
	cout << solution(1041) << endl;
	cout << solution(0) << endl;
	cout << solution(1) << endl;
	cout << solution(32) << endl;
	cout << solution(15) << endl;
	cout << solution(529) << endl;
	cout << solution(0x40000001) << endl;
	cout << solution(0x7fffffff) << endl;

	return 0;
}
*/