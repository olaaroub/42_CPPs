#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(T number1, T number2)
{
	return (number1 < number2 ? number1 : number2);
}

template<typename T>
T max(T number1, T number2)
{
	return (number1 > number2 ? number1 : number2);
}

#endif
