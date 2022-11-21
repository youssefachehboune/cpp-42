/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:45:10 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/19 12:35:22 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int, std::list<int> > mstack;
    std::list<int> slist;
    
    mstack.push(5);slist.push_back(5);
    mstack.push(17);slist.push_back(17);
    std::cout << "top mstack  : " << mstack.top() << " ; " << "top : " << slist.back() << std::endl;
    mstack.pop();slist.pop_back();
    std::cout << "size mstack : " << mstack.size() << " ; size : " << slist.size() <<  std::endl;
    mstack.push(3);slist.push_back(3);
    mstack.push(5);slist.push_back(5);
    mstack.push(737);slist.push_back(737);
    mstack.push(0);slist.push_back(0);
    MutantStack<int, std::list<int> >::iterator it = mstack.begin();
    std::list<int>::iterator it2 = slist.begin();
    MutantStack<int, std::list<int> >::iterator ite = mstack.end();
    std::list<int>::iterator ite2 = slist.end();
    ++it;++it2;
    --it;--it2;
    while (it != ite && it2 != ite2)
    {
        std::cout << *it << " ;  " << *it2 << std::endl;
        ++it;++it2;
        
    }
    std::stack<int, std::list<int> > s(mstack);
    return 0;
}