#include <iostream>
#include <string>

template <typename T>
void	print_array(T &data)
{
	std::cout << data << std::endl;
}

template <typename T>
void	iter(T *addr, size_t len, void(*func)(T &))
{
	size_t i = 0;

	while (i < len)
		(*func)(addr[i++]);
}

int	main(void) {
	std::string test1[] =
			{
					"a", "ae", "dc", "ed", "fon", "won", "ken", "mop"
			};

	char test2[] =
			{
					'a', 'b', 'e', 'F', 'X', 'T', 'Z'
			};

	int test3[] =
			{
					1, 234, 567, 890, 1111, 22222, 55555
			};

	float test4[] =
			{
					1.23, 5.444, 123.4353, 90901.1
			};

	std::cout << "string: " << std::endl;
	iter<std::string>(test1, 8, &print_array<std::string>);
	std::cout << "char: " << std::endl;
	iter<char>(test2, 7, &print_array<char>);
	std::cout << "int: " << std::endl;
	iter<int>(test3, 8, &print_array<int>);
	std::cout << "float: " << std::endl;
	iter<float>(test4, 4, &print_array<float>);
}
