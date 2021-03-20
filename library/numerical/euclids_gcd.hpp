#ifndef EUCLIDS_GCD_HPP
#define EUCLIDS_GCD_HPP

// https://cp-algorithms.com/algebra/euclid-algorithm.html
// Verification:
//

#include <type_traits>
#include <utility>

template<typename T1, typename T2> std::common_type<T1, T2> euclidian_gcd(T1 a, T2 b)
{
	static_assert(std::is_integral_v<T1>);
	static_assert(std::is_integral_v<T2>);
	if(a == 0)
	{
		return b;
	}
	if(b == 0)
	{
		return a;
	}
	if(a < 0)
	{
		a = -a;
	}
	if(b < 0)
	{
		b = -b;
	}
	while(b)
	{
		std::swap(a %= b, b);
	}
	return a;
}

#endif