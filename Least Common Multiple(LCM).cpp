#include<iostream>
using namespace std;
int findLCM(int j, int k,int multiple)
{
	if (multiple % j == 0 && multiple % k == 0)
	{
		return multiple;
	}
	return findLCM(j, k, multiple + 1);
}
int LCM(int j,int k)
{
	int start;
	if (j > k)
	{
		start = j;
	}
	else
	{
		start = k;
	}
	return findLCM(j, k, start);
}
int main()
{
	cout << "LCM of 3 and 5 = " << LCM(3, 5) << endl;
	cout << "LCM of 6 and 8 = " << LCM(6, 8) << endl;
	return 0;
}