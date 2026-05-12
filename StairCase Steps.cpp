#include<iostream>
using namespace std;
int Noofways(int stairsteps)
{
	if (stairsteps == 0 || stairsteps == 1)
	{
		return 1;
	}
	else
	{
		return Noofways(stairsteps - 1) + Noofways(stairsteps - 2);
	}
}
int main()
{
	int stairsteps = 4;
	cout << "Number of ways to climb " << stairsteps << " stair steps are " << Noofways(stairsteps) << endl;
	return 0;
}