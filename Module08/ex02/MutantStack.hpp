#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
#include <deque>

template<typename T,typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack(){};
		MutantStack(const MutantStack<T, Container> &copy) : std::stack<T, Container>::stack(copy) {};
		~MutantStack(){};
		MutantStack & operator=(const MutantStack &assign) {
			std::stack<T, Container>::operator=(assign);
			return *this;
		};
		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin(){return this->c.begin();}
		const_iterator cbegin(){return this->c.cbegin();}
		reverse_iterator rbegin(){return this->c.rbegin();}
		const_reverse_iterator crbegin(){return this->c.crbegin();}

		iterator end(){return this->c.end();}
		const_iterator cend(){return this->c.cend();}
		reverse_iterator rend(){return this->c.rend();}
		const_reverse_iterator crend(){return this->c.crend();}
};

#endif
