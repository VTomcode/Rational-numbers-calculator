#include "Rational.h"
#include <iostream>

using namespace std;


Rational::Rational(int num,int dom)
{ // initializing the Rational number 
	
	Set_numerator(num); 

	Set_dominator(dom); 
	Reduce();
}

Rational::~Rational()
// destraction 
{

}
 // set functions 
void Rational::Set_dominator(int dom)  //setting the dominator
{
	if (dom == 0)
	{
		cout << "you have inserted an invalid value";
		dom = 1;
	}
	this->MyDom =dom;
}
void Rational::Set_numerator(int num) // setting the numerator
{
	this->MyNum= num;
}
// get functions 
int Rational::Get_dominator()const
{
	return this->MyDom;
}

int Rational::Get_numerator()const
{
	return this->MyNum;
}

Rational Rational::operator+(const Rational& Number) //a+b =c
{
	Rational Result((this->MyNum * Number.MyDom )+ (this->MyDom * Number.MyNum), (this->MyDom * Number.MyDom));
	Result.Reduce();
	return Result;
}

Rational Rational::operator-(const Rational& Number) // a-b =c
{
	Rational Result(this->MyNum * Number.MyDom - this->MyDom * Number.MyNum, this->MyDom * Number.MyDom);
	Result.Reduce();
	return Result;
}

Rational Rational::operator*(const Rational& Number) // a*b =c
{
	Rational Result(this->MyNum * Number.MyNum, this->MyDom * Number.MyDom);
	Result.Reduce();
	return Result;
}

Rational Rational::operator/(const Rational& Number) // a/b =c
{
	Rational Result(this->MyNum * Number.MyDom, this->MyDom*Number.MyNum);
	Result.Reduce();
	return Result;
}
istream &operator>>(istream&istream,Rational &Number) //input
{
	istream >> Number.MyNum;
	istream.ignore(1);
	istream >> Number.MyDom;
	return istream;
}
ostream& operator<<(ostream& ostream, const Rational& Number) //output
{
	ostream << Number.MyNum << "|" << Number.MyDom;
	return ostream;
}

void Rational::Reverse()// x/y = y/x 
{
	int temp;
	temp = this->MyDom;
	this->MyDom = this->MyNum;
	this->MyNum = temp;
}
 int  Rational::GetGCD(int first,int second)
{
	 while (first * second)
	 {
		 if (first > second)
		 {
			 first = second;
		 }
		 else
		 {
			 second %= first; 
		 }
	 }
	 return first != 0 ? first : second;
 }
 void Rational::Reduce()
 {
	 int MyGCD = GetGCD(this->MyNum, this->MyDom);
	 this->MyNum /= MyGCD;
	 this->MyDom /= MyGCD;
 }