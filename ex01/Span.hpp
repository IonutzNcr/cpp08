#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
#include <vector>

class Span
{

	public:

		Span();
		Span(unsigned int N);
		Span( Span const & src );
		~Span();

		Span &		operator=( Span const & rhs );
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void generateAddNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
	private:
		unsigned int limit;
		unsigned int filled;
		std::vector<int> numbers;

		
};


#endif /* ************************************************************ SPAN_H */