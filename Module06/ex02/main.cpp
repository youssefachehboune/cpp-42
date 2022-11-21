/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:21:10 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 12:47:43 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    srand(time(NULL));
    int ranNb = rand() % 3;
    switch (ranNb)
    {
        case 0:
            return new A;
        case 1:
            return new B;
        default:
            return new C;
    }
    return new A;
}

void identify(Base* p)
{
    std::cout << "the actual type of the object pointed to by p: ";
    if(dynamic_cast<A*>(p))
        std::cout << "\"A\"" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "\"B\"" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "\"C\"" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void identify(Base& p)
{
    Base tmp;
    std::cout << "the actual type of the object pointed to by p: ";
    try
    {
        tmp = dynamic_cast<A&>(p);
        std::cout << "\"A\"" << std::endl;
    }
    catch(...)
    {
        try
        {
            tmp = dynamic_cast<B&>(p);
            std::cout << "\"B\"" << std::endl;
        }
        catch(...)
        {
            try
            {
                tmp = dynamic_cast<C&>(p);
                std::cout << "\"C\"" << std::endl;
            }
            catch(...)
            {
                std::cout << "unknown" << std::endl;
            }
        }
    } 
}

int main()
{
    Base *invalid = new Base();
    Base *aa = new A();
    Base *bb = new B();
    Base *cc = new C();
    Base *rand = generate();
    Base &invalidREF = *invalid;
    Base &aaREF = *aa;
    Base &bbREF = *bb;
    Base &ccREF = *cc;
    Base &randREF = *rand;
    
    std::cout << std::endl;
    identify(invalid);
    identify(aa);
    identify(bb);
    identify(cc);
    identify(rand);
    std::cout << std::endl;
    identify(invalidREF);
    identify(aaREF);
    identify(bbREF);
    identify(ccREF);
    identify(randREF);

    delete invalid;
    delete aa;
    delete bb;
    delete cc;
    delete rand;
}