#ifndef	FIXED_HPP
# define	FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const & rhs);
		~Fixed(void);

		Fixed(const int);
        Fixed(const float);
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					value;
		const static int	nBits = 8; 
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif