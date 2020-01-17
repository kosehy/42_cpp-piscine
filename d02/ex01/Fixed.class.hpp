#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(const int fp);
	Fixed(const float fp);
	Fixed(const Fixed &old);
	~Fixed(void);

	Fixed	&operator=(Fixed const &rhs);
	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	float 	toFloat(void) const;
	int		toInt(void) const;

private:
	int _fp;
	static int _bit;
};

std::ostream &operator << (std::ostream &o, const Fixed &rhs);

#endif