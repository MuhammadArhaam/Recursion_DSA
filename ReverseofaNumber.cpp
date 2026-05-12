#include<iostream>
using namespace std;
int reverseofaNumber(int num, int rev)
{
	if (num == 0)
	{
		return rev;
	}
	else
	{
		int d = num % 10;
		return reverseofaNumber(num / 10, rev * 10 + d);
	}
}
int main()
{
	int num = 1234;
	int rev = 0;
	cout << "Reverse of the Number " << num << " is = " << reverseofaNumber(num, rev) << endl;
	return 0;
}