#ifndef CRAT
#define CRAT
#include "main.h"
using namespace std;


struct fr {
	int p;
	int q;
};



class CRat {
protected:
	fr* vec;
	int size;
	string outfile;

public:
	CRat();
	CRat(int);
	CRat(int input_size, fr* arr, const string FileName);
	CRat(const CRat& old_one);

	virtual void output() = 0;
	friend void do_normal(fr* arr, int len);
	fr item(int i = 0) const;
	int get_size() const;
	string outfile_name() const;
	CRat& operator=(const CRat& oke);
	virtual ~CRat();
};

#endif