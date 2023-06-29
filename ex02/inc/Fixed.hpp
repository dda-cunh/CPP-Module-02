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

		Fixed operator++(int);
		Fixed & operator++();
		Fixed operator--(int);
		Fixed & operator--();

		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		bool operator>(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		static const	Fixed & max(Fixed const & lhs, Fixed const & rhs);
		static			Fixed & max(Fixed & lhs, Fixed & rhs);
		static const	Fixed & min(Fixed const & lhs, Fixed const & rhs);
		static			Fixed & min(Fixed & lhs, Fixed & rhs);

	private:
		int					value;
		const static int	nBits = 8; 
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif