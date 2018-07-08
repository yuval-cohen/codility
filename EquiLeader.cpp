#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int leader(vector<int> &A, int &leader_count)
{
	vector<int> temp = A;
	sort(temp.begin(), temp.end());

	int N = temp.size();
	int leader = temp[N/2];
	leader_count = 0;
	for (int i = 0; i < N; i++)
	{
		if (temp[i] == leader)
			leader_count++;
	}

	return leader;
}
int solution14(vector<int> &A)
{
	int leader_count;
	int lead = leader(A, leader_count);
	int N = A.size();
	int equi_leader = 0;

	if (leader_count*2 <= N)
		return 0;

	int p_count, q_count;
	p_count = 0;
	q_count = leader_count;
	for (int i = 0; i < N-1; i++)
	{
		int P, Q;
		P = i + 1;
		Q = N - P;
		if (A[i] == lead)
		{
			p_count++;
			q_count--;
		}
		
		if ((p_count * 2) > P && (q_count * 2) > Q)
			equi_leader++;
	}

	return equi_leader;
}

/*int main()
{
	vector<int> A = { 4,3,4,4,4,2 };
	cout << solution(A) << endl;

	A = { 4,3,3,4,4,2 };
	cout << solution(A) << endl;

	A = { 4,4,4,4,4,4 };
	cout << solution(A) << endl;

	A = { 4, 4, 2, 5, 3, 4, 4, 4 };
	cout << solution(A) << endl;

	return 0;
}*/
