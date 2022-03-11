#include"RationalDef.h"

Rational::Rational(const Integer& a, const Integer& b)	//생성자
	: a(a), b(b)
{}

Rational::Rational(const int& a, const int& b)
	:a(a), b(b)
{}

Rational::Rational(const Integer& a)	//정수는 유리수이기 때문에,,
	:a(a), b(1)
{}

Rational::Rational(const int& a)
	:a(a), b(1)
{}

//유리수 덧셈
Rational Rational::operator+(const Rational& s) const
{
	// (a/b) + (s.a/s.b)의 계산 => (a*d + b*c) / b*d => 
	return Rational(a*s.b+b*s.a, b*s.b);	
}

//유리수 뺄셈
Rational Rational::operator-(const Rational& s) const	
{
	return this->operator+(-s);	//유리수 덧셈을 호출하지만 -s로 바꿔 부름
}

//유리수 곱셈
Rational Rational::operator*(const Rational& s) const
{
	// (a/b) * (s.a/s.b) => (a*c)/(b*d)
	return Rational(a*s.a, b*s.b);		
}

//유리수 나눗셈
Rational Rational::operator/(const Rational& s) const
{
	Rational temp(s.b, s.a);	
	return this->operator*(temp) //s의 역수인 유리수를 곱함
}

bool Rational::operator>(const Rational& s) const
{
	// (a/b) - (s.a/s.b) -> (a*s.b - s.a*b) 
	if(a*s.b > s.a*b)
		return true;
	else
		return false;
}

bool Rational::operator<(const Rational& s) const
{
	return s > (*this);		//Rational클래스의 >
}

bool Rational::operator>=(const Rational& s) const
{	// (a/b) - (s.a/s.b) -> (a*s.b - s.a*b) 
	if(a*s.b >= s.a*b)
		return true;
	else
		return false;
}

bool Rational::operator<=(const Rational& s) const;
{
	return s >= (*this);		//Rational클래스의 >=
}

//유리수 출력하기
void Rational::ShowRat() const
{
	std::cout<<a <<"/" << b<<std::endl
}

Rational::operator Integer()	//Rational을 Integer로 형변환
{
	if( int(b) == 1)	//분모가 1이면 Integer로 형변환 가능
		return Integer(a);
}

typedef Rational Q;		//Rational의 약자 Q
