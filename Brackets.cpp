#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution13(string &S) 
{
	// write your code in C++14 (g++ 6.2.0)
	stack<char> stck;
	int N = S.size();

	for (int i = 0; i < N; i++)
	{
		if (S[i] == '{' || S[i] == '[' || S[i] == '(')
		{
			stck.push(S[i]);
		}
		else // S[i] == '}' || S[i] == ']' || S[i] == ')'
		{
			char ch = stck.top();
			if (S[i] == '}' && ch == '{' ||
				S[i] == ']' && ch == '[' ||
				S[i] == ')' && ch == '(')
			{
				stck.pop();
			}
			else
				return 0;
		}
	}

	if (stck.empty())
		return 1;

	return 0;
}

/*int main()
{
	string S = "{[()()]}";
	cout << solution(S) << endl;

	S = "([)()]";
	cout << solution(S) << endl;
	
	S = "";
	cout << solution(S) << endl;

	return 0;
}*/