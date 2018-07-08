#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int min_impact(int impact[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (impact[i] != 0)
			return i + 1;
	}

	return 0;
}

vector<int> solution9(string &S, vector<int> &P, vector<int> &Q) 
{
	// write your code in C++14 (g++ 6.2.0)
	int N = S.size();
	vector<int[4]> impact(N);
	for (int i = 0; i < N; i++)
	{
		switch (S[i])
		{
		case 'A':
			impact[i][0] = 1;
			break;
		case 'C':
			impact[i][1] = 1;
			break;
		case 'G':
			impact[i][2] = 1;
			break;
		case 'T':
			impact[i][3] = 1;
			break;
		}
	}

	int i, j;
	for (i = 0; i < N; i++)
	{
		if (i > 0)
		{
			for (j = 0; j < 4; j++)
			{
				impact[i][j] += impact[i - 1][j];
			}
		}
	}

	int M = P.size();
	vector<int> result(M);
	vector<int[4]> impact_range(M);
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < 4; j++)
		{
			impact_range[i][j] = impact[Q[i]][j];
		}
		if (P[i] > 0)
		{
			for (j = 0; j < 4; j++)
			{
				impact_range[i][j] -= impact[P[i]-1][j];
			}
		}
	}

	for (i = 0; i < M; i++)
	{
		result[i] = min_impact(impact_range[i], 4);
	}
	
	return result;
}

/*int main()
{
	vector<int> P = {2,5,0};
	vector<int> Q = {4,5,6};
	string S = "CAGCCTA";
	vector<int> R = solution(S, P, Q);
	copy(R.begin(), R.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	P = { 0,0,0 };
	Q = { 0,0,0 };
	S = "A";
	R = solution(S, P, Q);
	copy(R.begin(), R.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	P = { 0,0,0 };
	Q = { 0,0,0 };
	S = "C";
	R = solution(S, P, Q);
	copy(R.begin(), R.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	P = { 0,0,0 };
	Q = { 0,0,0 };
	S = "G";
	R = solution(S, P, Q);
	copy(R.begin(), R.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;

	P = { 0,0,0 };
	Q = { 0,0,0 };
	S = "T";
	R = solution(S, P, Q);
	copy(R.begin(), R.end(), ostream_iterator<int, char>(cout, " "));
	cout << endl;


	return 0;
}*/