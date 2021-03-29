---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: library/general/base.hpp
    title: library/general/base.hpp
  - icon: ':heavy_check_mark:'
    path: library/general/base.hpp
    title: library/general/base.hpp
  - icon: ':heavy_check_mark:'
    path: library/general/input.hpp
    title: library/general/input.hpp
  - icon: ':heavy_check_mark:'
    path: library/general/output.hpp
    title: library/general/output.hpp
  - icon: ':heavy_check_mark:'
    path: library/general/prng.hpp
    title: library/general/prng.hpp
  - icon: ':heavy_check_mark:'
    path: library/general/speed.hpp
    title: library/general/speed.hpp
  - icon: ':heavy_check_mark:'
    path: library/general/to_string.hpp
    title: library/general/to_string.hpp
  - icon: ':heavy_check_mark:'
    path: library/general/unused.hpp
    title: library/general/unused.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/factors/optimized_rho_factorization.hpp
    title: library/numerical/factors/optimized_rho_factorization.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/list_of_primes.hpp
    title: library/numerical/list_of_primes.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/list_of_primes.hpp
    title: library/numerical/list_of_primes.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/montgomery.hpp
    title: library/numerical/montgomery.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/montgomery.hpp
    title: library/numerical/montgomery.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/primality/miller_rabin_primality_test.hpp
    title: library/numerical/primality/miller_rabin_primality_test.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/steins_gcd.hpp
    title: library/numerical/steins_gcd.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/trailing_zero_bits.hpp
    title: library/numerical/trailing_zero_bits.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/trailing_zero_bits.hpp
    title: library/numerical/trailing_zero_bits.hpp
  - icon: ':heavy_check_mark:'
    path: library/numerical/trailing_zero_bits.hpp
    title: library/numerical/trailing_zero_bits.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/factorize
    links:
    - https://judge.yosupo.jp/problem/factorize
  bundledCode: "#line 1 \"library/general/input.hpp\"\n\n\n\n#include <array>\n#include\
    \ <complex>\n#include <istream>\n#include <string>\n#include <utility>\n#include\
    \ <vector>\n\ntemplate<typename Argument, typename... Arguments> bool read(std::istream&\
    \ in, Argument& first, Arguments& ... rest);\n\ntemplate<typename T, std::size_t\
    \ N> bool read(std::istream& in, std::array<T, N>& elements);\n\ntemplate<typename\
    \ T1, typename T2> bool read(std::istream& in, std::pair<T1, T2>& element);\n\n\
    template<typename T> bool read(std::istream& in, T& element);\n\ntemplate<typename\
    \ T> bool read(std::istream& in, std::complex<T>& element);\n\ntemplate<typename\
    \ T> bool read(std::istream& in, std::vector<T>& elements);\n\ntemplate<typename\
    \ Argument, typename... Arguments> bool read(std::istream& in, Argument& first,\
    \ Arguments& ... rest)\n{\n\tbool result = true;\n\tresult &= read(in, first);\n\
    \tresult &= read(in, rest...);\n\treturn result;\n}\n\ntemplate<typename T, std::size_t\
    \ Size> bool read(std::istream& in, std::array<T, Size>& elements)\n{\n\tbool\
    \ result = true;\n\tfor(T& element : elements)\n\t{ result &= read(in, element);\
    \ }\n\treturn result;\n}\n\ntemplate<typename T1, typename T2> bool read(std::istream&\
    \ in, std::pair<T1, T2>& element)\n{\n\treturn read(in, element.first, element.second);\n\
    }\n\ntemplate<typename T> bool read(std::istream& in, T& element)\n{\n\treturn\
    \ static_cast<bool>(in >> element);\n}\n\ntemplate<typename T> bool read(std::istream&\
    \ in, std::complex<T>& element)\n{\n\tbool result = true;\n\tT first, second;\n\
    \tresult &= read(in, first, second);\n\telement = std::complex<T>(first, second);\n\
    \treturn result;\n}\n\ntemplate<typename T> bool read(std::istream& in, std::vector<T>&\
    \ elements)\n{\n\tbool result = true;\n\tfor(T& element : elements)\n\t{ result\
    \ &= read(in, element); }\n\treturn result;\n}\n\n\n#line 1 \"library/general/output.hpp\"\
    \n\n\n\n#line 1 \"library/general/to_string.hpp\"\n\n\n\n#include <bitset>\n#line\
    \ 9 \"library/general/to_string.hpp\"\n\nnamespace std\n{\n\tinline std::string\
    \ to_string(const bool& element);\n\n\tinline std::string to_string(const char&\
    \ element);\n\n\tinline std::string to_string(const char* element);\n\n\tinline\
    \ std::string to_string(const std::string& element);\n\n\ttemplate<typename T>\
    \ std::string to_string(const T& elements);\n\n\ttemplate<std::size_t Size> std::string\
    \ to_string(const std::bitset<Size>& elements);\n\n\ttemplate<typename T> std::string\
    \ to_string(const std::complex<T>& element);\n\n\ttemplate<typename T1, typename\
    \ T2> std::string to_string(std::pair<T1, T2> element);\n}  // namespace std\n\
    \ninline std::string std::to_string(const bool& element)\n{\n\treturn std::string{static_cast<char>('0'\
    \ + element)};\n}\n\ninline std::string std::to_string(const char& element)\n\
    {\n\treturn std::string(1, element);\n}\n\ninline std::string std::to_string(const\
    \ char* element)\n{\n\treturn std::string(element);\n}\n\ninline std::string std::to_string(const\
    \ std::string& element)\n{\n\treturn element;\n}\n\ntemplate<typename T> std::string\
    \ std::to_string(const T& elements)\n{\n\tstd::string convert;\n\tbool first =\
    \ true;\n\tfor(const auto& element : elements)\n\t{\n\t\tif(!first)\n\t\t{ convert\
    \ += \" \"; }\n\t\tfirst = false;\n\t\tconvert += std::to_string(element);\n\t\
    }\n\treturn convert;\n}\n\ntemplate<std::size_t Size> std::string std::to_string(const\
    \ std::bitset<Size>& elements)\n{\n\treturn elements.to_string();\n}\n\ntemplate<typename\
    \ T> std::string std::to_string(const std::complex<T>& element)\n{\n\tstd::stringstream\
    \ convert;\n\tconvert << element;\n\treturn convert.str();\n}\n\ntemplate<typename\
    \ T1, typename T2> std::string std::to_string(std::pair<T1, T2> element)\n{\n\t\
    return std::to_string(element.ff) + \" \" + std::to_string(element.ss);\n}\n\n\
    \n#line 5 \"library/general/output.hpp\"\n#include <ostream>\n\ntemplate<typename\
    \ Argument, typename... Arguments> void print(std::ostream& out, const Argument&\
    \ first, const Arguments& ... rest);\n\ntemplate<typename Argument, typename...\
    \ Arguments> void printn(std::ostream& out, const Argument& first, const Arguments&\
    \ ... rest);\n\ntemplate<typename Argument, typename... Arguments> void prints(std::ostream&\
    \ out, const Argument& first, const Arguments& ... rest);\n\ntemplate<typename\
    \ T> void print(std::ostream& out, const T& element);\n\ninline void printn(std::ostream&\
    \ out);\n\ninline void prints(std::ostream& out);\n\ntemplate<typename T> void\
    \ print(std::ostream& out, const T& element)\n{\n\tout << std::to_string(element);\n\
    }\n\ninline void printn(std::ostream& out)\n{\n\tprint(out, '\\n');\n}\n\ninline\
    \ void prints(std::ostream& out)\n{\n\tprint(out, '\\n');\n}\n\ntemplate<typename\
    \ Argument, typename... Arguments> void print(std::ostream& out, const Argument&\
    \ first, const Arguments& ... rest)\n{\n\tprint(out, first);\n\tprint(out, rest...);\n\
    }\n\ntemplate<typename Argument, typename... Arguments> void printn(std::ostream&\
    \ out, const Argument& first, const Arguments& ... rest)\n{\n\tprint(out, first);\n\
    \tif(sizeof...(rest))\n\t{ prints(out); }\n\tprintn(out, rest...);\n}\n\ntemplate<typename\
    \ Argument, typename... Arguments> void prints(std::ostream& out, const Argument&\
    \ first, const Arguments& ... rest)\n{\n\tprint(out, first);\n\tif(sizeof...(rest))\n\
    \t{ print(out, \" \"); }\n\tprints(out, rest...);\n}\n\n\n#line 1 \"library/general/speed.hpp\"\
    \n\n\n\n#include <iostream>\n\ninline bool speed()\n{\n\tstd::cin.exceptions(std::cin.failbit);\n\
    \treturn std::cin.tie(nullptr) && std::ios_base::sync_with_stdio(false);\n}\n\n\
    \n#line 4 \"verification/numerical/factors/optimized_rho_factorization.test.cpp\"\
    \n\n#define PROBLEM \"https://judge.yosupo.jp/problem/factorize\"\n\n#include\
    \ <algorithm>\n#include <cstdint>\n#line 11 \"verification/numerical/factors/optimized_rho_factorization.test.cpp\"\
    \n\n#line 1 \"library/numerical/factors/optimized_rho_factorization.hpp\"\n\n\n\
    \n#include <type_traits>\n#line 6 \"library/numerical/factors/optimized_rho_factorization.hpp\"\
    \n\n#line 1 \"library/general/base.hpp\"\n\n\n\n#include <cassert>\n#include <cctype>\n\
    #include <cfloat>\n#include <climits>\n#include <cmath>\n#include <cstdarg>\n\
    #include <cstddef>\n#include <cstdio>\n#include <cstdlib>\n#include <cstring>\n\
    #include <ctime>\n\n#if __cplusplus >= 201103L\n\n#line 19 \"library/general/base.hpp\"\
    \n\n#endif\n\n#line 25 \"library/general/base.hpp\"\n#include <deque>\n#include\
    \ <exception>\n#include <fstream>\n#include <functional>\n#include <iomanip>\n\
    #include <ios>\n#include <iosfwd>\n#line 34 \"library/general/base.hpp\"\n#include\
    \ <iterator>\n#include <limits>\n#include <list>\n#include <map>\n#include <numeric>\n\
    #line 40 \"library/general/base.hpp\"\n#include <queue>\n#include <set>\n#include\
    \ <sstream>\n#include <stack>\n#line 45 \"library/general/base.hpp\"\n#include\
    \ <typeinfo>\n#line 47 \"library/general/base.hpp\"\n#include <valarray>\n#line\
    \ 49 \"library/general/base.hpp\"\n\n#if __cplusplus >= 201103L\n\n#line 53 \"\
    library/general/base.hpp\"\n#include <chrono>\n#include <initializer_list>\n#include\
    \ <tuple>\n#line 57 \"library/general/base.hpp\"\n#include <cuchar>\n#line 59\
    \ \"library/general/base.hpp\"\n#include <forward_list>\n#include <unordered_set>\n\
    #include <unordered_map>\n#include <random>\n#include <ratio>\n#include <thread>\n\
    #include <mutex>\n\n#endif\n\n#line 1 \"library/general/unused.hpp\"\n\n\n\ntemplate<class...\
    \ T> void unused(T&& ...)\n{\n}\n\n\n#line 70 \"library/general/base.hpp\"\n\n\
    #define ALL(set) std::begin(set), std::end(set)\n#define RALL(set) std::rbegin(set),\
    \ std::rend(set)\n\n#define mp std::make_pair\n#define mt std::make_tuple\n#define\
    \ pb push_back\n#define eb emplace_back\n#define ff first\n#define ss second\n\
    #define lb lower_bound\n#define ub upper_bound\n\nusing ll = long long;\nusing\
    \ pll = std::pair<long long, long long>;\nusing vll = std::vector<long long>;\n\
    \nusing ull = unsigned long long;\nusing pull = std::pair<unsigned long long,\
    \ unsigned long long>;\nusing vull = std::vector<unsigned long long>;\n\nusing\
    \ ld = long double;\nusing pld = std::pair<long double, long double>;\nusing vld\
    \ = std::vector<long double>;\n\n#ifdef __GNUC__\n\n#include <ext/pb_ds/assoc_container.hpp>\n\
    #include <ext/pb_ds/tree_policy.hpp>\n#include <ext/rope>\n\nusing namespace __gnu_pbds;\n\
    using namespace __gnu_cxx;\n\ntemplate<typename T> using orderedSet = __gnu_pbds::tree<T,\
    \ __gnu_pbds::null_type, std::less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;\n\
    template<typename T> using orderedMultiset = __gnu_pbds::tree<T, __gnu_pbds::null_type,\
    \ std::less_equal<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;\n\
    \n#endif\n\n#ifdef __SIZEOF_INT128__\n\nusing li = __int128;\nusing pli = std::pair<__int128,\
    \ __int128>;\nusing vli = std::vector<__int128>;\n\nusing uli = unsigned __int128;\n\
    using puli = std::pair<unsigned __int128, unsigned __int128>;\nusing vuli = std::vector<unsigned\
    \ __int128>;\n\n#endif\n\n\n#line 1 \"library/general/prng.hpp\"\n\n\n\n#include\
    \ <chrono>\n#line 6 \"library/general/prng.hpp\"\n#include <random>\n\ninline\
    \ std::mt19937_64& getPRNG()\n{\n\t#ifdef LOCAL\n\tstatic std::mt19937_64 PRNG{0};\n\
    \t#else\n\tstatic std::mt19937_64 PRNG{static_cast<std::uint_fast64_t>( std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now().time_since_epoch()).count())};\n\
    \t#endif\n\treturn PRNG;\n}\n\ntemplate<typename T1, typename T2> typename std::common_type<T1,\
    \ T2>::type getUID(const T1& uLow, const T2& uHigh)\n{\n\tstatic_assert(std::is_integral_v<T1>);\n\
    \tstatic_assert(std::is_integral_v<T2>);\n\ttypename std::common_type<T1, T2>::type\
    \ low{uLow}, high{uHigh};\n\treturn std::uniform_int_distribution<typename std::common_type<T1,\
    \ T2>::type>(low, high)(getPRNG());\n}\n\ntemplate<typename T1, typename T2> typename\
    \ std::common_type<T1, T2>::type getURD(const T1& uLow, const T2& uHigh)\n{\n\t\
    static_assert(std::is_floating_point_v<T1>);\n\tstatic_assert(std::is_floating_point_v<T2>);\n\
    \ttypename std::common_type<T1, T2>::type low{uLow}, high{uHigh};\n\treturn std::uniform_real_distribution<typename\
    \ std::common_type<T1, T2>::type>(low, high)(getPRNG());\n}\n\n\n#line 1 \"library/numerical/list_of_primes.hpp\"\
    \n\n\n\n#line 5 \"library/numerical/list_of_primes.hpp\"\n\ninline constexpr std::array<std::uint_fast16_t,\
    \ 16> smallPrimes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};\n\
    inline constexpr std::array<std::uint_fast16_t, 32> mediumPrimes{2, 3, 5, 7, 11,\
    \ 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89,\
    \ 97, 101, 103, 107, 109, 113, 127, 131};\ninline constexpr std::array<std::uint_fast16_t,\
    \ 64> largePrimes{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53,\
    \ 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137,\
    \ 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227,\
    \ 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311};\n\
    \n\n#line 1 \"library/numerical/montgomery.hpp\"\n\n\n\n#line 6 \"library/numerical/montgomery.hpp\"\
    \n\n#line 1 \"library/numerical/trailing_zero_bits.hpp\"\n\n\n\n#line 6 \"library/numerical/trailing_zero_bits.hpp\"\
    \n\ntemplate<typename T> std::uint64_t trailing_zero_bits(const T& element)\n\
    {\n\tstatic_assert(std::is_integral_v<T>);\n\treturn __builtin_ctzll(element);\n\
    }\n\n/*\ntemplate<typename T> T trailing_zero_bits(T element)\n{\n\tstatic_assert(std::is_integral_v<T>);\n\
    \tT result{};\n\tfor(; (element & 1) ^ 1; ++result)\n\t{\n\t\telement >>= 1;\n\
    \t}\n\treturn result;\n}\n*/\n\n\n#line 8 \"library/numerical/montgomery.hpp\"\
    \n/*\n//https://cp-algorithms.com/algebra/montgomery_multiplication.html\ntemplate<typename\
    \ T1, typename T2, std::size_t Bits> struct BigMultiplication\n{\n\tstatic_assert(std::is_integral_v<T1>);\n\
    \tstatic_assert(std::is_integral_v<T2>);\n\tstatic_assert(std::is_unsigned<T1>);\n\
    \tstatic_assert(std::is_unsigned<T2>);\n\n\tT high, low;\n\n\tstatic BigMultiplication\
    \ multiply(const T& x, const T& y)\n\t{\n\t\tT2 a = x >> Bits, b = x, c = y >>\
    \ Bits, d = y;\n\t\tT1 ac = static_cast<T1>(a) * c, ad = static_cast<T1>(a) *\
    \ d, T1 bc = static_cast<T1>(b) * c, bd = static_cast<T1>(b) * d;\n\t\tT carry\
    \ = static_cast<T1>(static_cast<T2>(ad)) + static_cast<T1>(static_cast<T2>(bc))\
    \ + (bd >> Bits);\n\t\tT high = ac + (ad >> Bits) + (bc >> Bits) + (carry >> Bits);\n\
    \t\tT low = (ad << Bits) + (bc << Bits) + bd;\n\t\treturn {high, low};\n\t}\n\
    };\n\ntemplate<typename T1, typename T2, std::size_t Bits> struct Montgomery\n\
    {\n\tstatic_assert(std::is_integral_v<T>);\n\n\tT1 n;\n\n\tstatic T1 modulus,\
    \ inverse{1};\n\n\tstatic T1 initialize(const T1& uN)\n\t{\n\t\tx %= mod;\n\t\t\
    for (int i = 0; i < 128; i++) {\n\t\t\tx <<= 1;\n\t\t\tif (x >= mod)\n\t\t\t\t\
    x -= mod;\n\t\t}\n\t\treturn x;\n\t}\n\n\tstatic  redc(const BigMultiplication<T1,\
    \ T2, Bits>& x)\n\t{\n\t\tT1 q = x.low * inverse, a = BigMultiplication<T1, T2,\
    \ Bits>::multiply(q, modulus).high;\n\t\treturn (x.high < a ? (x.high + modulus\
    \ - q) : x.high - q);\n\t}\n\n\tstatic void set_modulus(const T1& uModulus)\n\t\
    {\n\t\tmodulus = uModulus;\n\t\tinverse = 1;\n\t\tfor(std::uint_fast16_t i = 0;\
    \ i < 6; ++i)\n\t\t{ inverse *= 2 - modulus * inverse; }\n\t}\n\n\texplicit Montgomery(const\
    \ T1& uN) : n{initialize(uN)}\n\t{\n\t}\n\n\tT1 value() const\n\t{\n\t\treturn\
    \ redc(n);\n\t}\n\n\tMontgomery& operator+=(const Montgomery& other)\n\t{\n\t\t\
    n += other.n;\n\t\tif(n >= modulus)\n\t\t{ n -= modulus; }\n\t\treturn *this;\n\
    \t}\n\n\tMontgomery& operator*=(const Montgomery& other)\n\t{\n\t\tn = redc(static_cast<uli>(n)\
    \ * other.n);\n\t\treturn *this;\n\t}\n\n\tMontgomery& operator+(const Montgomery&\
    \ other)\n\t{\n\t\treturn Montgomery(*this) += other;\n\t}\n\n\tMontgomery& operator*(const\
    \ Montgomery& other)\n\t{\n\t\treturn Montgomery(*this) += other;\n\t}\n\n};\n\
    \nstd::uint_fast64_t Montgomery::modulus{};\n, Montgomery::inverse{\n};\n*/\n\n\
    // https://judge.yosupo.jp/submission/38126\nstruct Montgomery\n{\n\tuint64_t\
    \ n;\n\tstatic uint64_t modulus, inverse, r2;\n\n\tMontgomery() : n{0}\n\t{\n\t\
    }\n\n\tMontgomery(const uint64_t& x) : n{init(x)}\n\t{\n\t}\n\n\tstatic uint64_t\
    \ init(const uint64_t& w)\n\t{\n\t\treturn redc(__uint128_t(w) * r2);\n\t}\n\n\
    \tstatic void set_modulus(const uint64_t& m)\n\t{\n\t\tmodulus = inverse = m;\n\
    \t\tfor(int i{}; i < 5; i++)\n\t\t{ inverse *= 2 - inverse * m; }\n\t\tr2 = -__uint128_t(m)\
    \ % m;\n\t}\n\n\tstatic uint64_t redc(const __uint128_t& x)\n\t{\n\t\tuint64_t\
    \ y{uint64_t(x >> 64) - uint64_t((__uint128_t(uint64_t(x) * inverse) * modulus)\
    \ >> 64)};\n\t\treturn int64_t(y) < 0 ? y + modulus : y;\n\t}\n\n\tMontgomery&\
    \ operator+=(const Montgomery& other)\n\t{\n\t\tn += other.n - modulus;\n\t\t\
    if(int64_t(n) < 0)\n\t\t{ n += modulus; }\n\t\treturn *this;\n\t}\n\n\tMontgomery&\
    \ operator+(const Montgomery& other) const\n\t{\n\t\treturn Montgomery(*this)\
    \ += other;\n\t}\n\n\tMontgomery& operator*=(const Montgomery& other)\n\t{\n\t\
    \tn = redc(__uint128_t(n) * other.n);\n\t\treturn *this;\n\t}\n\n\tMontgomery&\
    \ operator*(const Montgomery& other) const\n\t{\n\t\treturn Montgomery(*this)\
    \ *= other;\n\t}\n\n\tuint64_t value() const\n\t{\n\t\treturn redc(n);\n\t}\n\
    };\n\nuint64_t Montgomery::modulus, Montgomery::inverse, Montgomery::r2;\n\n\n\
    #line 1 \"library/numerical/primality/miller_rabin_primality_test.hpp\"\n\n\n\n\
    #line 7 \"library/numerical/primality/miller_rabin_primality_test.hpp\"\n\n#line\
    \ 12 \"library/numerical/primality/miller_rabin_primality_test.hpp\"\n\nstd::uint_fast64_t\
    \ multiply_modulo(const std::uint_fast64_t& x, const std::uint_fast64_t& y, const\
    \ std::uint_fast64_t& modulus)\n{\n\tstd::int_fast64_t result = x * y - modulus\
    \ * static_cast<std::uint_fast64_t>(static_cast<long double>(x) * y / modulus);\n\
    \tif(result < 0)\n\t{\n\t\tresult += modulus;\n\t}\n\tif(result >= static_cast<std::int_fast64_t>(modulus))\n\
    \t{\n\t\tresult -= modulus;\n\t}\n\treturn result;\n}\n\nnamespace primality\n\
    {\n\n\ttemplate<typename T> Montgomery power(const T& base, T exponent)\n\t{\n\
    \t\tstatic_assert(std::is_integral_v<T>);\n\t\tstatic_assert(std::is_unsigned_v<T>);\n\
    \t\tMontgomery mBase(base), result(1);\n\t\twhile(exponent)\n\t\t{\n\t\t\tif(exponent\
    \ & 1)\n\t\t\t{\n\t\t\t\tresult *= mBase;\n\t\t\t}\n\t\t\tmBase *= mBase;\n\t\t\
    \texponent >>= 1;\n\t\t}\n\t\treturn result;\n\t}\n\n\ttemplate<typename T, std::size_t\
    \ BasesSize = 7> bool miller_rabin(const T& n, const bool& checkBaseCases = true,\
    \ const std::array<T, BasesSize>& A = {2, 325, 9375, 28178, 450775, 9780504, 1795265022})\n\
    \t{\n\t\tstatic_assert(std::is_integral_v<T>);\n\t\tstatic_assert(std::is_unsigned_v<T>);\n\
    \t\tif(checkBaseCases)\n\t\t{\n\t\t\tif(n <= 1)\n\t\t\t{ return false; }\n\t\t\
    \tfor(const auto& a : largePrimes)\n\t\t\t{\n\t\t\t\tif(a > n)\n\t\t\t\t{ break;\
    \ }\n\t\t\t\tif(n == a)\n\t\t\t\t{\n\t\t\t\t\treturn true;\n\t\t\t\t}\n\t\t\t\t\
    if(n % a == 0)\n\t\t\t\t{ return false; }\n\t\t\t}\n\t\t}\n\t\tif(Montgomery::modulus\
    \ != n) Montgomery::set_modulus(n);\n\t\tT bits{trailing_zero_bits(n - 1)}, d{(n\
    \ - 1) >> bits};\n\t\tMontgomery one{1}, negativeOne{n - 1};\n\t\tfor(const T&\
    \ a : A)\n\t\t{\n\t\t\tif(a % n)\n\t\t\t{\n\t\t\t\tT i{};\n\t\t\t\tMontgomery\
    \ x{power(a, d)};\n\t\t\t\tif(x.n == one.n || x.n == negativeOne.n)\n\t\t\t\t\
    { continue; }\n\t\t\t\tfor(; x.n != one.n && x.n != negativeOne.n && i < bits;\
    \ ++i)\n\t\t\t\t{\n\t\t\t\t\tif(x.n == one.n)\n\t\t\t\t\t{ return false; }\n\t\
    \t\t\t\tif(x.n == negativeOne.n)\n\t\t\t\t\t{ break; }\n\t\t\t\t\tx *= x;\n\t\t\
    \t\t}\n\t\t\t\tif((i == bits) ^ (x.n == one.n))\n\t\t\t\t{ return false; }\n\t\
    \t\t}\n\t\t}\n\t\treturn true;\n\t}\n}\n\n\n#line 1 \"library/numerical/steins_gcd.hpp\"\
    \n\n\n\n#line 8 \"library/numerical/steins_gcd.hpp\"\n\ntemplate<typename T1,\
    \ typename T2> constexpr typename std::common_type<T1, T2>::type steins_gcd(const\
    \ T1& u_x, const T2& u_y)\n{\n\tstatic_assert(std::is_integral_v<T1>);\n\tstatic_assert(std::is_unsigned_v<T1>);\n\
    \tstatic_assert(std::is_integral_v<T2>);\n\tstatic_assert(std::is_unsigned_v<T2>);\n\
    \ttypename std::common_type<T1, T2>::type x{u_x}, y{u_y};\n\tif(x == 0)\n\t{\n\
    \t\treturn y;\n\t}\n\tif(y == 0)\n\t{\n\t\treturn x;\n\t}\n\ttypename std::common_type<T1,\
    \ T2>::type a{trailing_zero_bits(x)}, b{trailing_zero_bits(y)};\n\tx >>= a;\n\t\
    y >>= b;\n\twhile(true)\n\t{\n\t\tif(x < y)\n\t\t{\n\t\t\tstd::swap(x, y);\n\t\
    \t}\n\t\tx -= y;\n\t\tif(!x)\n\t\t{\n\t\t\treturn y << std::min(a, b);\n\t\t}\n\
    \t\tx >>= trailing_zero_bits(x);\n\t}\n}\n\n\n#line 14 \"library/numerical/factors/optimized_rho_factorization.hpp\"\
    \n\nnamespace factors\n{\n\ttemplate<typename T> T optimized_rho(const T& n)\n\
    \t{\n\t\tstatic_assert(std::is_integral_v<T>);\n\t\tassert(n >= 0);\n\t\tif(primality::miller_rabin(n,\
    \ false))\n\t\t{ return n; }\n\t\tauto f{[&n](const Montgomery& x, const T& c)\
    \ -> Montgomery\n\t\t       {\n\t\t\t       Montgomery result = x;\n\t\t\t   \
    \    (result *= result) += c;\n\t\t\t       return result;\n\t\t       }};\n\t\
    \tT factor, c{getUID<T>(1, n - 1)};\n\t\tMontgomery x{getUID<T>(1, n - 1)}, y{f(x,\
    \ c)}, product{1};\n\t\tfor(T trials{}; trials % 100 || (factor = steins_gcd(product.value(),\
    \ n)) == 1; x = f(x, c), y = f(f(y, c), c))\n\t\t{\n\t\t\tif(x.n == y.n)\n\t\t\
    \t{\n\t\t\t\tc = getUID<T>(1, n - 1);\n\t\t\t\tx = Montgomery(getUID<T>(1, n -\
    \ 1));\n\t\t\t\ty = f(x, c);\n\t\t\t}\n\t\t\tMontgomery combined{product};\n\t\
    \t\tcombined *= (std::max(x.n, y.n) - std::min(x.n, y.n));\n\t\t\tif(combined.n\
    \ && combined.n != product.n)\n\t\t\t{\n\t\t\t\t++trials;\n\t\t\t\tproduct = combined;\n\
    \t\t\t}\n\t\t}\n\t\treturn factor;\n\t}\n\n\ttemplate<typename T> std::vector<T>\
    \ optimized_rho_factorize(const T& n, const bool& checkBaseCases = true)\n\t{\n\
    \t\tstatic_assert(std::is_integral_v<T>);\n\t\tassert(n >= 0);\n\t\tif(n <= 1)\n\
    \t\t{ return {}; }\n\t\tif(checkBaseCases)\n\t\t{\n\t\t\tT start{n};\n\t\t\tstd::vector<T>\
    \ original{};\n\t\t\tfor(const auto& a : largePrimes)\n\t\t\t{\n\t\t\t\tif(a >\
    \ start)\n\t\t\t\t{ break; }\n\t\t\t\twhile(start % a == 0)\n\t\t\t\t{\n\t\t\t\
    \t\toriginal.push_back(a);\n\t\t\t\t\tstart /= a;\n\t\t\t\t}\n\t\t\t}\n\t\t\t\
    std::vector<T> divided{optimized_rho_factorize(start, false)};\n\t\t\tstd::move(std::begin(divided),\
    \ std::end(divided), std::back_inserter(original));\n\t\t\treturn original;\n\t\
    \t}\n\t\tT factor = optimized_rho<T>(n);\n\t\tif(n == factor)\n\t\t{ return std::vector<T>{n};\
    \ }\n\t\tstd::vector<T> original{optimized_rho_factorize(factor, false)}, divided{optimized_rho_factorize(n\
    \ / factor, false)};\n\t\tstd::move(std::begin(divided), std::end(divided), std::back_inserter(original));\n\
    \t\treturn original;\n\t}\n}\n\n\n#line 13 \"verification/numerical/factors/optimized_rho_factorization.test.cpp\"\
    \n\nint main()\n{\n\tspeed();\n\tstd::int_fast16_t q;\n\tread(std::cin, q);\n\t\
    while(q--)\n\t{\n\t\tstd::uint_fast64_t a;\n\t\tread(std::cin, a);\n\t\tstd::vector<std::uint_fast64_t>\
    \ factors = factors::optimized_rho_factorize<std::uint_fast64_t>(a);\n\t\tstd::sort(std::begin(factors),\
    \ std::end(factors));\n\t\tprints(std::cout, std::size(factors), factors);\n\t\
    }\n}\n"
  code: "#include \"../../../library/general/input.hpp\"\n#include \"../../../library/general/output.hpp\"\
    \n#include \"../../../library/general/speed.hpp\"\n\n#define PROBLEM \"https://judge.yosupo.jp/problem/factorize\"\
    \n\n#include <algorithm>\n#include <cstdint>\n#include <iostream>\n#include <vector>\n\
    \n#include \"../../../library/numerical/factors/optimized_rho_factorization.hpp\"\
    \n\nint main()\n{\n\tspeed();\n\tstd::int_fast16_t q;\n\tread(std::cin, q);\n\t\
    while(q--)\n\t{\n\t\tstd::uint_fast64_t a;\n\t\tread(std::cin, a);\n\t\tstd::vector<std::uint_fast64_t>\
    \ factors = factors::optimized_rho_factorize<std::uint_fast64_t>(a);\n\t\tstd::sort(std::begin(factors),\
    \ std::end(factors));\n\t\tprints(std::cout, std::size(factors), factors);\n\t\
    }\n}\n"
  dependsOn:
  - library/general/input.hpp
  - library/general/output.hpp
  - library/general/to_string.hpp
  - library/general/speed.hpp
  - library/numerical/factors/optimized_rho_factorization.hpp
  - library/general/base.hpp
  - library/general/unused.hpp
  - library/general/prng.hpp
  - library/numerical/list_of_primes.hpp
  - library/numerical/montgomery.hpp
  - library/numerical/trailing_zero_bits.hpp
  - library/numerical/primality/miller_rabin_primality_test.hpp
  - library/general/base.hpp
  - library/numerical/list_of_primes.hpp
  - library/numerical/montgomery.hpp
  - library/numerical/trailing_zero_bits.hpp
  - library/numerical/steins_gcd.hpp
  - library/numerical/trailing_zero_bits.hpp
  isVerificationFile: true
  path: verification/numerical/factors/optimized_rho_factorization.test.cpp
  requiredBy: []
  timestamp: '2021-03-28 23:42:17-06:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verification/numerical/factors/optimized_rho_factorization.test.cpp
layout: document
redirect_from:
- /verify/verification/numerical/factors/optimized_rho_factorization.test.cpp
- /verify/verification/numerical/factors/optimized_rho_factorization.test.cpp.html
title: verification/numerical/factors/optimized_rho_factorization.test.cpp
---