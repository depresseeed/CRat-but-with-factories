#ifndef CRAT0
#define CRAT0
#include "main.h"
#include "CRat.h"
class CRat0 : public CRat {
public:
    CRat0() : CRat() {};
    CRat0(int i) : CRat(i) {};
    CRat0(int inp_size, fr* arr, const string filename) : CRat(inp_size, arr, filename) {};
    CRat0(const CRat& other_one) : CRat(other_one) {};
    void output();

    friend const CRat0 operator+ (const CRat0& left, const CRat0& right);
    friend const CRat0 operator- (const CRat0& left, const CRat0& right);
    friend const fr operator*(const CRat0& left, const CRat0& right);
    friend void do_normal(fr*, int);
    CRat0& operator=(const CRat0& oke);
    ~CRat0();
};

#endif // !CRAT1


