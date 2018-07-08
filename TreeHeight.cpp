#include <iostream>
#include <algorithm>

using namespace std;

struct tree {
	int x;
	tree * l;
	tree * r;
};

int solution28(tree * T)
{
	// write your code in C++14 (g++ 6.2.0)
	if (T == NULL)
		return -1;
	
	int right_h = solution28(T->r);
	int left_h = solution28(T->l);

	return max(left_h, right_h) + 1;
}
