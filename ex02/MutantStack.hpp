#include <stack>
#include <iterator>



template<class T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(){};
        MutantStack(const MutantStack &src)
        :std::stack<T>(src)
        {};
        ~MutantStack(){};

        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack &operator=(const MutantStack &rhs)
        {
            std::stack<T>::operator=(rhs);
            return *this;
        }
        
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }

};