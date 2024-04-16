#include "FuzzyNumberO.h"


FuzzyNumberO::FuzzyNumberO()
{
	Set_x(0);
	Set_l(0);
	Set_r(0);
}

FuzzyNumberO::FuzzyNumberO(int x, int l, int r)
{
	Set_x(x);
	Set_l(l);
	Set_r(r);
}

FuzzyNumberO::FuzzyNumberO(const FuzzyNumberO& v)
{
	Set_x(v.Get_x());
	Set_l(v.Get_l());
	Set_r(v.Get_r());
}

FuzzyNumberO& FuzzyNumberO::operator = (const FuzzyNumberO& n)
{
	Set_x(n.Get_x());
	Set_l(n.Get_l());
	Set_r(n.Get_r());
	return *this;
}

FuzzyNumberO FuzzyNumberO::operator + (const FuzzyNumberO& n)
{
	FuzzyNumberO tmp;
	tmp.Set_x(Get_x() + n.Get_x());
	tmp.Set_l(Get_l() + n.Get_l());
	tmp.Set_r(Get_r() + n.Get_r());
	return tmp;
}

FuzzyNumberO FuzzyNumberO::operator * (const FuzzyNumberO& n)
{
	FuzzyNumberO tmp;
	tmp.Set_x(Get_x() * n.Get_x());
	tmp.Set_l(Get_l() * n.Get_l());
	tmp.Set_r(Get_r() * n.Get_r());
	return tmp;
}


FuzzyNumberO& FuzzyNumberO::operator++ ()
{
	Set_x(Get_x() + 1);
	Set_l(Get_l() + 1);
	Set_r(Get_r() + 1);
	return *this;
}

FuzzyNumberO& FuzzyNumberO::operator-- ()
{
	Set_x(Get_x() - 1);
	Set_l(Get_l() - 1);
	Set_r(Get_r() - 1);
	return *this;
}

FuzzyNumberO FuzzyNumberO::operator++ (int)
{
	FuzzyNumberO a(*this);
	Set_x(Get_x() + 1);
	Set_l(Get_l() + 1);
	Set_r(Get_r() + 1);
	return a;
}

FuzzyNumberO FuzzyNumberO::operator-- (int)
{
	FuzzyNumberO a(*this);
	Set_x(Get_x() - 1);
	Set_l(Get_l() - 1);
	Set_r(Get_r() - 1);
	return a;
}