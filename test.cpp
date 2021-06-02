#include <iostream>
using namespace std;

double power(double base, double n)
{
	double result = 1; 

	
	if (n > 0) {
		for (int num = 0; num <= n; n--) {
			result = result * base;
		}
		return result; 
	}

	else if (n < 0)
	{
		n = n * -1;
		for (int num = 0; num <= n; n--)
		{
			result = result * base;
		}
		return 1 / result;
	}

	else 
	{
		return  1; 
	}
}

int PrimeNumber(int n)
{
	for (int i = 2; i < n; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				break;
			else if (i == j + 1)
				cout << i << " ";
		}
	}
	return 0; 
}

void Fibonacci(int n) {
	int first, sum = 0;
	int second = 1;
	while (sum < n)
	{
		cout << sum << " ";
		first = second;
		second = sum;
		sum = first + second;
	}
}

int main()
{
	int mode, base, n;
	cout << "--------------" << endl;
	cout << "  ��      ��  " << endl; 
	cout << "--------------" << endl; 
	cout << "1. n�� k�� ���ϱ�" << endl;
	cout << "2. �Ҽ� ã��" << endl;
	cout << "3. �Ǻ���ġ ���� ���ϱ�" << endl; 
	cout << "4. ����" << endl;
	cout << "�޴��� �����Ͻÿ�: " << endl;
	cin >> mode;
	
	switch (mode)
	{
	case 1 : 
		cout << "���� n�� k�� �Է��ϼ���: " << endl;
		cin >> base >> n;
		cout << power(base, n) << endl;
		break; 

	case 2 : 
		cout << "���� n�� �Է��ϼ���: " << endl;
		cin >> n;
		PrimeNumber(n);
		break; 

	case 3 :
		cout << "���� n�� �Է��ϼ���: " << endl; 
		cin >> n;
		Fibonacci(n);
		break; 

	case 4 :
		cout << "�����մϴ�." << endl;

	default:
		break;
	}


}


