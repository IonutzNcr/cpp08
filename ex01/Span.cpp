#include "Span.hpp"
#include <algorithm>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span():limit(0), filled(0)
{
}

Span::Span(unsigned int N):limit(N), filled(0)
{
}

Span::Span( const Span & src ):limit(src.limit), filled(src.filled)
{
	numbers.insert(numbers.begin(), src.numbers.begin(), src.numbers.end());
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		numbers.clear();
		numbers.insert(numbers.begin(), rhs.numbers.begin(), rhs.numbers.end());
		limit = rhs.limit;
		filled = rhs.filled;

	}
	return *this;
}



/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int number)
{
	//faut trow error...
	std::cout << "nb: " << number << std::endl;
	if (filled + 1 > limit)
		throw std::exception();
	numbers.push_back(number);
	filled++;
}
int Span::shortestSpan()
{
	if(numbers.begin() == numbers.end() - 1)
		throw std::exception();
	std::sort(numbers.begin(), numbers.end());
	std::vector<int>::iterator it = numbers.begin();
	int span = *(numbers.end() - 1);
	std::cout << "span is " << span << std::endl;
	for( ; it+1 < numbers.end() - 1; it++)
	{
		if(*(it + 1) - *(it) < span)
			span = *(it + 1) - *(it);
		/* std::cout << *(it + 1) << " " << *(it) << " res=";
		std::cout << " " << *(it + 1) - *(it) << std::endl; */
	}
	return (span);
}
int Span::longestSpan()
{
	if(numbers.begin() == numbers.end() - 1)
		throw std::exception();
	//manage trhow in case there is a single element..
	if(numbers.begin() == numbers.end())
		throw std::exception();
	std::sort(numbers.begin(), numbers.end());
	
	return (*(numbers.end() - 1)  - *numbers.begin());
}
void Span::generateAddNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	size_t elements =  end - start;
	if (filled + elements > limit)
		throw std::exception();
	while (start < end)
		addNumber(*start++);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */