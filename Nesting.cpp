#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution14(string &S)
{
	// write your code in C++14 (g++ 6.2.0)
	stack<char> stk;
	int N = S.size();

	for (int i = 0; i < N; i++)
	{
		if (S[i] == '(')
		{
			stk.push(S[i]);
		}
		else // S[i] == ')'
		{
			if (stk.empty())
				return 0;

			stk.pop();
		}
	}

	if (stk.empty())
		return 1;

	return 0;
}

/*int main()
{
	string S = "(()(())())";
	cout << solution(S) << endl;

	S = "())";
	cout << solution(S) << endl;

	S = "";
	cout << solution(S) << endl;

	S = "((((";
	cout << solution(S) << endl;

	S = ")))))))";
	cout << solution(S) << endl;

	return 0;
}*/