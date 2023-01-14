#include <iostream>
#include "Functions.h"

int main()
{
	std::cout << "Input a number: ";
	double x; std::cin >> x;
	std::cout << " x + 1 = " << add(x)
		<< "\n x + 5 = " << add(x, 5.0)
		<< "\n x - 3 = " << add(x, -3.0) << '\n';

	double a[] = { 1,2,3,4,5 };
	const int n = sizeof a / sizeof a[0];
	double s = 0.0;
	for (int i = 0; i < n; ++i)
	{
		std::cout << ' ' << a[i];
		s = add(s, a[i]);
	}
	std::cout << "\n s = " << s << '\n';

	double p = 1.0; std::cout << " p = " << p;
	while (p < 1000) std::cout << ' ' << (p = mult(p));
	std::cout << '\n';
	system("pause");
}