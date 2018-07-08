#include <iostream>
#include <string>

using namespace std;

int solution26(string &S) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = S.size();

	if ((N % 2) == 0)
		return -1;

	int index = int(N / 2);
	for (int i = 0, j = N - 1; i < j; i++, j--)
	{
		if (S[i] != S[j])
			return -1;
	}

	return index;
}

/*int main()
{
	string s("racecar");
	cout << solution(s) << endl;

	s = "x";
	cout << solution(s) << endl;

	s = "";
	cout << solution(s) << endl;

	s = "xxxx";
	cout << solution(s) << endl;

	s = "xxxxx";
	cout << solution(s) << endl;

	s = "youHopepoHuoy";
	cout << solution(s) << endl;

	return 0;
}
*/