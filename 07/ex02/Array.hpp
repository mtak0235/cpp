/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:29:27 by mtak              #+#    #+#             */
/*   Updated: 2021/09/25 14:18:01 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <stdexcept>

template<class T>
class Array
{
	T* array;
	unsigned int arrLen;
	public:
		Array() : array(0), arrLen(0) {}
		Array(unsigned int n) : arrLen(n)
		{
			this->array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->array[i] = 0;
		}
		
		Array(Array const & target)
		{
			if (target.array)
			{
				this->array = new T[target.arrLen];
				for (unsigned int i = 0; i < target.arrLen; i++)
					this->array[i] = target.array[i];
			}
			else
				this->array = 0;
			this->arrLen = target.arrLen;
		}
		~Array()
		{
			if (this->array)
				delete this->array;
		}
		Array & operator=(Array const & target)
		{
			if (this->array)
				delete this->array;
			if (target.array)
			{
				this->array = new T[target.arrLen];
				for (unsigned int i = 0; i < target.arrLen; i++)
					this->array[i] = target.array[i];
			}
			else
				this->array = 0;
			this->arrLen = target.arrLen;
			return *this;
		}
		T & operator[](long int i)
		{
			if (!this->array)
				throw std::invalid_argument("u accessed Empty array");
			if (i < 0 || i >= this->arrLen)
				throw std::invalid_argument("u accessed Error index");
			return this->array[i];
		}
		unsigned int size() const
		{
			return this->arrLen;
		}
		T* address() const
		{
			return this->array;
		}
};

#endif
