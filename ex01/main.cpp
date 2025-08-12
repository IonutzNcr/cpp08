
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

    std::vector<int> test;
	test.push_back(15);
    test.push_back(12);
    test.push_back(14);
    Span rrd(100);
    rrd.generateAddNumber(test.begin(), test.end());
    std::cout << rrd.shortestSpan() << std::endl;
    std::cout << rrd.longestSpan() << std::endl;

    return 0;
}