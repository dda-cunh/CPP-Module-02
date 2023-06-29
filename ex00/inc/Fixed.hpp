#ifndef	FIXED_HPP
# define	FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed & operator=(Fixed const & rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					value;
		const static int	nBits = 8; 
};

#endif