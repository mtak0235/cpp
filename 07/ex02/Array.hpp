/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtak <mtak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:29:27 by mtak              #+#    #+#             */
/*   Updated: 2021/09/23 15:29:39 by mtak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

template<typename T>
class Array
{
	T* array;
	unsigned int size_arr;
	public:
		Array() : array(0), size_arr(0) {}
		Array(unsigned int n) : size_arr(n)
		{
			this->array = new T[n];
			for (unsigned int i = 0; i < n; i++)
				this->array[i] = 0;
		}
		Array(Array const & obj)
		{
			if (obj.array)
			{
				this->array = new T[obj.size_arr];
				for (unsigned int i = 0; i < obj.size_arr; i++)
					this->array[i] = obj.array[i];
			}
			else
				this->array = 0;
			this->size_arr = obj.size_arr;
		}
		~Array()
		{
			if (this->array)
				delete this->array;
		}
		Array & operator=(Array const & obj)
		{
			if (this->array)
				delete this->array;
			if (obj.array)
			{
				this->array = new T[obj.size_arr];
				for (unsigned int i = 0; i < obj.size_arr; i++)
					this->array[i] = obj.array[i];
			}
			else
				this->array = 0;
			this->size_arr = obj.size_arr;
			return *this;
		}
		T & operator[](long int i)
		{
			if (!this->array)
				throw std::invalid_argument("Empty array");
			if (i < 0 || i >= this->size_arr)
				throw std::invalid_argument("Error index");
			return this->array[i];
		}
		unsigned int size() const
		{
			return this->size_arr;
		}
		T* address() const
		{
			return this->array;
		}
};

#endif
