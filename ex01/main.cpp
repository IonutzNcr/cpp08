
#include "Span.hpp"
#include <cstdlib> 
#include <ctime> 

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    Span mille = Span(10000);
    srand(time(NULL));
    for (int i = 0; i < 10000; i++)
        mille.addNumber(10 + rand() % (100000 - 10 + 1));
    std::cout << mille.shortestSpan() << std::endl;
    std::cout << mille.longestSpan() << std::endl;

    return 0;
}