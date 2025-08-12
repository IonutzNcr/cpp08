#include "easyfind.hpp"
#include <vector>
#include <list>
#include <exception>
#include <iterator>
#include <iostream>

int main()
{
    try
    {
        std::vector<int> numbers;
        numbers.push_back(1);
        numbers.push_back(5);
        numbers.push_back(12);
        numbers.push_back(15);
        std::vector<int>::iterator it = easyfind(numbers, 3);
        std::cout << "occurence: " << *it << std::endl;
    }
    catch(...)
    {
        std::cout << "occurence not found..." << std::endl;
    }
    //TESTER QUAND IL TROUVE
    try
    {
       std::vector<int> numbs;
        numbs.push_back(1);
        numbs.push_back(5);
        numbs.push_back(12);
        numbs.push_back(15);
        std::vector<int>::iterator it2 = easyfind(numbs, 1);
        std::cout << "occurence: " << *it2 << std::endl;

    }
    catch(...)
    {
       std::cout << "occurence not found..." << std::endl;
    }

    //tester avec un autre container
    try
    {
        std::list<int> lll;
        lll.push_back(1);
        lll.push_back(100);
        lll.push_back(25555);
        std::list<int>::iterator it3 = easyfind(lll, 100);
        std::cout << "occurence: " << *it3 << std::endl;
    }
    catch(...)
    {
       std::cout << "occurence not found..." << std::endl;
    }
    
}

