#include "Serialization.hpp"

void	*serialize(void)
{
	int i = 0;
	char	*tmp = new char[20];

	char	output[] =
	{
		"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	};

	while (i < 8)
	{
		tmp[i] = output[rand() % 62];
		++i;
	}

	i = 7;
	while (i < 12)
	{
		tmp[i] = rand() % 256 - 128;
		++i;
	}

	i = 11;
	while (i < 20)
	{
		tmp[i] = output[rand() % 62];
		++i;
	}
	i = 0;
	tmp[i] = '\0';
	std::cout << "Random Arr 1: ";
	while (i < 8)
		std::cout << tmp[i++];
	std::cout << std::endl;
	std::cout << "Random Integer: " << static_cast<int>(tmp[8]);

	std::cout << std::endl;
	i = 11;
	std::cout << "Random Arr 2: ";
	while (i < 20)
		std::cout << tmp[i++];
	std::cout << std::endl;
	return (reinterpret_cast<void*>(tmp));
}

Data	*deserialize(void *data)
{
	Data	*tmp = new Data;

	tmp->n = 0;
	char *input = reinterpret_cast<char*>(data);
	int	i = 0;

	while (i < 8)
	{
		tmp->str1 = tmp->str1 + input[i];
		++i;
	}
	tmp->n = input[8];
	i = 11;
	while (i < 20)
	{
		tmp->str2 = tmp->str2 + input[i];
		++i;
	}
	return (tmp);
}

int main(void)
{
	void	*serial;
	Data	*deserial;

	srand(time(0));
	serial = serialize();
	std::cout << "random Serialized data Address : " << serial << std::endl;
	deserial = deserialize(serial);
	std::cout << "Deserialized data info" << std::endl;
	std::cout << "Random Arr1 : " << deserial->str1 << std::endl;
	std::cout << "Random Arr2 : " << deserial->str2 << std::endl;

	delete deserial;
}