#pragma once
#include <list>
#include <string>
#include <typeinfo>
#include <iostream>
using namespace std;
class Kladovshikov
{
public:
	virtual Kladovshikov* Copy() = 0;
	virtual void Print() = 0;
	virtual ~Kladovshikov();
};
class Kladovshikov_1 :public Kladovshikov
{
public:
	string* a = new string;
	Kladovshikov_1();
	Kladovshikov_1(string b);
	virtual Kladovshikov_1* Copy();
	virtual void Print();
	Kladovshikov_1(const Kladovshikov_1& obj);
	virtual ~Kladovshikov_1();
};
class Kladovshikov_2 :public Kladovshikov_1
{
public:
	string* c = new string;
	Kladovshikov_2();
	Kladovshikov_2(string d);
	virtual Kladovshikov_2* Copy();
	virtual void Print();
	Kladovshikov_2(const Kladovshikov_2& obj);
	virtual ~Kladovshikov_2();
};


class DB : public list<Kladovshikov*>
{
public:
	DB();
	DB(const DB& obj);
	~DB();
};