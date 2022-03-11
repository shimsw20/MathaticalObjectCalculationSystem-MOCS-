#include<climit>
#include"Integer.h"

class Rational	//정수 클래스
{
private:
 	Integer a;		// 분자, 정수클래스의 정수
	Integer b;	// 분모, 정수클래스의 정수
public:
	Rational(const Integer& a, const Integer& b);	//생성자
	Rational(const int& a, const int& b)
	Rational(const Integer& a);			//정수인 유리수로 변환
	Rational(const int& a)
	//유리수 클래스의 지원 연산
	Rational operator+(const Rational& s) const;	//유리수의 덧셈
	Rational operator-(const Rational& s) const;	//유리수의 뺄셈
	Rational operator*(const Rational& s) const;	//유리수의 곱셈
	Rational operator/(const Rational& s) const;	//유리수의 나눗셈, 정의가 안됨

	//유리수 클래스의 대소관계 연산
	bool operator<(const Rational& s) const;	
	bool operator>(const Rational& s) const;
	bool operator<=(const Rational& s) const;
	bool operator>=(const Rational& s) const;

	void ShowRat() const;			//출력
	operator Integer();		//유리수에서 정수로의 변환함수
}
