#include <iostream>

template <typename T>
void	swap(T &x, T &y)
{
	T	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const &min(T const &x, T const &y)
{
	return ((x < y) ? x : y);
}

template <typename T>
T const &max(T const &x, T const &y)
{
	return ((x > y) ? x : y);
}

int		main(void)
{
	int x = 1;
	int y = 2;

	::swap(x, y);
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min(x, y) = " << ::min(x,y) << std::endl;
	std::cout << "man(x, y) = " << ::max(x,y) << std::endl;

	float x1 = 1.6;
	float y1 = 2.1;

	::swap(x1, y1);
	std::cout << "x1 = " << x1 << ", y1 = " << y1 << std::endl;
	std::cout << "min(x1, y1) = " << ::min(x1,y1) << std::endl;
	std::cout << "man(x1, y1) = " << ::max(x1,y1) << std::endl;

	std::string x2 = "abc";
	std::string y2 = "ABc";

	::swap(x2, y2);
	std::cout << "x2 = " << x2 << ", y2 = " << y2 << std::endl;
	std::cout << "min(x2, y2) = " << ::min(x2,y2) << std::endl;
	std::cout << "man(x2, y2) = " << ::max(x2,y2) << std::endl;
}
