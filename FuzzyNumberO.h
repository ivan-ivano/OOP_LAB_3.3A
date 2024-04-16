#pragma once
#include "FuzzyNumber.h"

class FuzzyNumberO:public FuzzyNumber
{
public:
	FuzzyNumberO();
	FuzzyNumberO(int x, int l, int r);
	FuzzyNumberO(const FuzzyNumberO& v);

	FuzzyNumberO& operator = (const FuzzyNumberO& n);
	FuzzyNumberO operator + (const FuzzyNumberO& n);
	FuzzyNumberO operator * (const FuzzyNumberO& n);

	FuzzyNumberO& operator++ ();
	FuzzyNumberO& operator-- ();

	FuzzyNumberO operator++ (int);
	FuzzyNumberO operator-- (int);
};

