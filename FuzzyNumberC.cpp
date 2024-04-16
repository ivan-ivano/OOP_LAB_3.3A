#include "FuzzyNumberC.h"
#include <iostream>
#include <string>

FuzzyNumberC::FuzzyNumberC()
{
	Set_x(0);
	Set_l(0);
	Set_r(0);
}

FuzzyNumberC::FuzzyNumberC(int x, int l, int r)
{
	Set_x(x);
	Set_l(l);
	Set_r(r);
}

FuzzyNumberC::FuzzyNumberC(const FuzzyNumberC& v)
{
	Set_x(v.Get_x());
	Set_l(v.Get_l());
	Set_r(v.Get_r());
}

FuzzyNumberC::operator std::string() const
{
	std::stringstream sout;
	sout << "( " << Get_x() - Get_l() << " , " << Get_x() << " , " << Get_x() + Get_r() << " )";
	return sout.str();
}

FuzzyNumberC& FuzzyNumberC::operator = (const FuzzyNumberC& n)
{
	Set_x(n.Get_x());
	Set_l(n.Get_l());
	Set_r(n.Get_r());
	return *this;
}

FuzzyNumberC FuzzyNumberC::operator + (const FuzzyNumberC& n)
{
	FuzzyNumberC tmp;
	tmp.Set_x(Get_x() + n.Get_x());
	tmp.Set_l(Get_l() + n.Get_l());
	tmp.Set_r(Get_r() + n.Get_r());
	return tmp;
}

FuzzyNumberC FuzzyNumberC::operator * (const FuzzyNumberC& n)
{
	FuzzyNumberC tmp;
	tmp.Set_x(Get_x() * n.Get_x());
	tmp.Set_l(Get_l() * n.Get_l());
	tmp.Set_r(Get_r() * n.Get_r());
	return tmp;
}

std::ostream& operator<<(std::ostream& out, const FuzzyNumberC& obj)
{
	out << std::string(obj);
	return out;
}

std::istream& operator>>(std::istream& in, FuzzyNumberC& obj)
{
	int x, l, r;
	std::cout << "Enter x: "; in >> x;
	std::cout << "Enter l: "; in >> l;
	std::cout << "Enter r: "; in >> r;
	obj.Set_x(x);
	obj.Set_l(l);
	obj.Set_r(r);
	return in;
}

FuzzyNumberC& FuzzyNumberC::operator++()
{
	Set_x(Get_x() + 1);
	Set_l(Get_l() + 1);
	Set_r(Get_r() + 1);
	return *this;
}

FuzzyNumberC& FuzzyNumberC::operator--()
{
	Set_x(Get_x() - 1);
	Set_l(Get_l() - 1);
	Set_r(Get_r() - 1);
	return *this;
}

FuzzyNumberC FuzzyNumberC::operator++(int)
{
	FuzzyNumberC a(*this);
	Set_x(Get_x() + 1);
	Set_l(Get_l() + 1);
	Set_r(Get_r() + 1);
	return a;
}

FuzzyNumberC FuzzyNumberC::operator--(int)
{
	FuzzyNumberC a(*this);
	Set_x(Get_x() - 1);
	Set_l(Get_l() - 1);
	Set_r(Get_r() - 1);
	return a;
}
