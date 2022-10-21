#include <iostream>

double Divide(double a, double b)
{
	// Callee Side
	if (b == 0)
	{
		throw std::logic_error("Divide by Zero!");
		// 반환값은 안나오고, exception이 만들어진다.
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
	// y에 0 입력 시, throw에서 catch로 바로 이동하면서
	// try 안의 값에 영향이 안간다.

	return 0;
}

// try, catch는 여러번 사용 가능하다.

// 문제가 어디서 발생했는 지를 아는것은,
// 정말 소중한 정보다.