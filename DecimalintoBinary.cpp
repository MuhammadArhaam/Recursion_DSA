#include<iostream>
using namespace std;
void decimaltoBinary(int num)
{
	if (num == 0)
	{
		return;
	}
	else
	{
		decimaltoBinary(num / 2);
		cout << num % 2;
	}
}
int main()
{
	int num;
	cout << "Enter a decimal number = ";
	cin >> num;
	decimaltoBinary(num);
	cout << endl;
	return 0;
}