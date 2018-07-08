#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int solution11(vector<int> &A) 
{
	// write your code in C++14 (g++ 6.2.0)
	sort(A.begin(), A.end());
	auto iter = unique(A.begin(), A.end());

	return iter - A.begin();
}

/*int main()
{
	vector<int> A{ 2,1,1,2,3,1 };
	cout << solution(A) << endl;

	vector<int> A1;
	cout << solution(A1) << endl;

	return 0;
}*/