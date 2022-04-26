#pragma once
#ifndef FACTORY
#define FACTORY

#include "CRat.h"
#include "CRat0.h"
#include "CRat1.h"

class Factory
{
public:
	virtual CRat* create() = 0;
	virtual CRat* create(int inp_size, fr* arr, const string filename) = 0;
	virtual CRat* create(const CRat& other) = 0;
};

class Factory_0: public Factory
{
public:
	CRat* create() override { return new CRat0(); }
	CRat* create(int inp_size, fr* arr, const string filename) override { return new CRat0(inp_size, arr, filename); }
	CRat* create(const CRat& other) override { return new CRat0(other); }
};

class Factory_1 : public Factory
{
public:
	CRat* create() override { return new CRat1(); }
	CRat* create(int inp_size, fr* arr, const string filename) override { return new CRat1(inp_size, arr, filename); }
	CRat* create(const CRat& other) override { return new CRat1(other); }
};


#endif 