
#include <algorithm>
#include <exception>  
#include <iterator> 

template<class T>
typename T::iterator easyfind(T &container, int occ)
{
    typename T::iterator it = find(container.begin(), container.end(), occ);
    if (it == container.end())
        throw "No occ found...";
    return (it);
}