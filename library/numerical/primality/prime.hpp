#ifndef PRIME_HPP
#define PRIME_HPP

template<typename T> bool prime(const T& n)
{
	if(n <= 1) return false;
	for(std::size_t i = 2; i * i <= n; ++i)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

#endif