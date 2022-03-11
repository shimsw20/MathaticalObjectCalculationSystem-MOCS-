#include<iostream>

class Rational;	//유리수 클래스
class Integer	//정수 클래스
{
private:
 	int n;	//정수데이터
public:
	Integer(const int& num);		//생성자
	//정수 클래스의 지원 연산
	Integer operator+(const Integer& m) const;	//정수의 덧셈
	Integer operator-(const Integer& m) const;	//정수의 뺄셈
	Integer operator*(const Integer& m) const;	//정수의 곱셈

	//정수 클래스의 대소관계 연산
	bool operator<(const Integer& m) const;	
	bool operator>(const Integer& m) const;
	bool operator<=(const Integer& m) const;
	bool operator>=(const Integer& m) const;
					//정수의 나눗셈, 정의가 안됨
	operator Rational();			//정수의 유리수로의 변환함수
	operator int();			//컴퓨터 상에서 정수로,,
	void ShowInt() const;			//정수 출력
}
