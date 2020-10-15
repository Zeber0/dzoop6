#include "Cl.h"

Kladovshikov::~Kladovshikov()
{
}

Kladovshikov_1::Kladovshikov_1()
{
	*a = typeid(this).name();
}

Kladovshikov_1::Kladovshikov_1(string b)
{
	*a = b;
}

Kladovshikov_1* Kladovshikov_1::Copy()
{
	return new Kladovshikov_1(*this);
}

void Kladovshikov_1::Print()
{
	cout << *a << endl;
}

Kladovshikov_1::Kladovshikov_1(const Kladovshikov_1& obj)
{
	*a = *obj.a;
}

Kladovshikov_1::~Kladovshikov_1()
{
	delete a;
}

Kladovshikov_2::Kladovshikov_2()
{
	*c = typeid(this).name();
}

Kladovshikov_2::Kladovshikov_2(string d)
{
	*c = d;
}

Kladovshikov_2* Kladovshikov_2::Copy()
{
	return new Kladovshikov_2(*this);
}

void Kladovshikov_2::Print()
{
	cout << *c << endl;
}

Kladovshikov_2::Kladovshikov_2(const Kladovshikov_2& obj): Kladovshikov_1(obj)
{
	*c = *obj.c;
}

Kladovshikov_2::~Kladovshikov_2()
{
	delete c;
}

DB::DB()
{
}

DB::DB(const DB& obj)
{
	for (Kladovshikov* e : obj) { this->push_back(e->Copy()); }
}

DB::~DB()
{
	for (Kladovshikov* e : *this) { delete e; }
}
