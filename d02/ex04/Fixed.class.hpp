#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(const int fp);
	Fixed(const float fp);
	Fixed(const double fp);
	Fixed(const Fixed &old);
	~Fixed(void);
	// operator overloads
	Fixed	&operator = (Fixed const &rhs);
	bool operator >  (const Fixed &rhs) const;
	bool operator <  (const Fixed &rhs) const;
	bool operator >= (const Fixed &rhs) const;
	bool operator <= (const Fixed &rhs) const;
	bool operator == (const Fixed &rhs) const;
	bool operator != (const Fixed &rhs) const;

	Fixed	operator + (Fixed const &rhs) const;
	Fixed	operator - (Fixed const &rhs) const;
	Fixed	operator * (Fixed const &rhs) const;
	Fixed	operator / (Fixed const &rhs) const;

	Fixed&	operator ++(void);
	Fixed	operator ++(int);
	Fixed&	operator --(void);
	Fixed	operator --(int);

	int 	getRawBits(void) const;
	void 	setRawBits(int const raw);
	float 	toFloat(void) const;
	int		toInt(void) const;

	static const Fixed&	min(const Fixed &a, const Fixed &b);
	static const Fixed&	max(const Fixed &a, const Fixed &b);

private:
	int _fp;
	static int _bit;
};

std::ostream &operator << (std::ostream &o, const Fixed &rhs);
void 	checkInput(char *s);
char 	*cleanSpaces(char *str);
Fixed	parseFactor(char **x);
Fixed	parseProduct(char **x);
Fixed	parseSum(char **x);

#endif