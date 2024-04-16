#pragma once
#include "FuzzyNumber.h"
#include <iostream>
#include <string>
#include <sstream>

class FuzzyNumberC: private FuzzyNumber
{
public:
	FuzzyNumberC();
	FuzzyNumberC(int x, int l, int r);
	FuzzyNumberC(const FuzzyNumberC& v);

	FuzzyNumberC& operator = (const FuzzyNumberC& n);
	FuzzyNumberC operator + (const FuzzyNumberC& n);
	FuzzyNumberC operator * (const FuzzyNumberC& n);

	FuzzyNumberC& operator++ ();
	FuzzyNumberC& operator-- ();
	FuzzyNumberC operator++(int);
	FuzzyNumberC operator--(int);

	operator std::string() const;

	friend std::ostream& operator<< (std::ostream& out, const FuzzyNumberC& obj);
	friend std::istream& operator>> (std::istream& in, FuzzyNumberC& obj);
};

