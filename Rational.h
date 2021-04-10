#ifndef Rational_h
#define Rational_h
#include <iostream>
using namespace std;
class Rational
{
	//friends function  input and output 
	friend ostream &operator<<(ostream& ostream, const Rational& Number);//output

	friend istream &operator>>(istream& instream,Rational& Number);//input 
	public:	
		//constructors 
		Rational(int = 0, int = 1); // constract with values 
		~Rational();//destractor

		//Set functions
		void Set_dominator(int);

		void Set_numerator(int);
		//function gets
		int Get_dominator() const;

		int Get_numerator()const;
		//operator overloading

		Rational operator+(const Rational& Number);

		Rational operator-(const Rational& Number);

		Rational operator*(const Rational& Number);

		Rational operator/(const Rational& Number);

		//Reverse the rational number

		void Reverse();
		// Reducing the Number 


	private:
	
		int MyNum;
		int MyDom;
		static int  GetGCD(int MyNum,int MyDom);
		void Reduce();
};

#endif 
