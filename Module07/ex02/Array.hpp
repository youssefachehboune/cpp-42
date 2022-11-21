/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachehbo <yachehbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:58:02 by yachehbo          #+#    #+#             */
/*   Updated: 2022/11/17 19:58:05 by yachehbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T> class Array
{
	public:
		Array()
		{
			_size = 0;
			_arr = NULL;
		}
		Array(unsigned int n)
		{
			_size = n;
			_arr = new(std::nothrow) T[n]();
			if(!_arr)
				exit(1);
		}
		Array(const Array & copy){
			_size = 0;
			*this = copy;
		}
		~Array()
		{
			if(_size)
				delete [] _arr;
		}
		Array & operator=(const Array &assign)
		{
			if(_size)
				delete [] _arr;
			_size = assign._size;
			_arr = new(std::nothrow) T[_size];
			if(!_arr)
				exit(1);
			int i = 0;
			while(i < _size)
			{
				_arr[i] = assign._arr[i];
				i++;
			}
			return *this;
		}
		T & operator[](int i)
		{
			if(i < 0 || i >= _size)
				throw (std::exception());
			return _arr[i];
		}
		int size() const
		{
			return _size;
		}
	private:
		T * _arr;
		int _size;
};

#endif