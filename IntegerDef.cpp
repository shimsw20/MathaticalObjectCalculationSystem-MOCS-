#include"IntegerDef.h"

Integer::Integer(const int& num)	//생성자
	:n(num)
{}

Integer Integer::operator+(const Integer& m) const;	//정수의 덧셈
{
	return Integer(n + m.n);	//정수 덧셈
}

Integer Integer::operator-(const Integer& m) const;	//정수의 뺄셈
{
	return this->operator+(-m);	//-a로 바꿔서 덧셈하기
}

Integer Integer::operator*(const Integer& m) const;	//정수의 곱셈
{
	return Integer(n * m.n); 	//정수 곱셈
}

bool Integer::operator>(const Integer& m) const
{
	if(n > m.n)
		return true;
	else
		return false;
}

bool Integer::operator<(const Integer& m) const
{
	return m < (*this);		//Integer클래스의 <
}

bool Integer::operator>=(const Integer& m) const
{
	if(n >= m.n)
		return true;
	else
		return false;
}

bool Integer::operator<=(const Integer& m) const;
{
	return m <= (*this);	//Integer클래스의 <=
}

void Integer::ShowInt() const
{
	std::cout<< n <<std::endl;	//정수 a
}

Integer::operator Rational()		//Integer를 Rational로 형변환
{
	return Rational(n, 1);	//정수 n은 유리수 n/1로 변환될 수 있음.
}

Integer::operator int()
{
	return n;
}

typedef Integer Z;		//Integer를 Z약자로 쓰자.
