#include <iostream>

double Divide(double a, double b)
{
	// Callee Side
	if (b == 0)
	{
		throw std::logic_error("Divide by Zero!");
		// ��ȯ���� �ȳ�����, exception�� ���������.
	}
	return a / b;
}

int main()
{
	double x;
	double y;

	std::cin >> x >> y;

	try
	{
		std::cout << Divide(x, y) << std::endl;

		double mine = Divide(x, y);
		mine = mine * mine;
	}
	catch (std::logic_error)   
	{
		std::cout << "Divide By Zero!!" << std::endl;
	}
	// y�� 0 �Է� ��, throw���� catch�� �ٷ� �̵��ϸ鼭
	// try ���� ���� ������ �Ȱ���.

	return 0;
}

// try, catch�� ������ ��� �����ϴ�.

// ������ ��� �߻��ߴ� ���� �ƴ°���,
// ���� ������ ������.