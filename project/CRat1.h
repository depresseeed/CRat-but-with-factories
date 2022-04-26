#ifndef CRAT1
#define CRAT1
#include "main.h"
#include "CRat.h"
class CRat1 : public CRat {
public:
    CRat1() : CRat() {};
    CRat1(int inp_size) : CRat(inp_size) {};
    CRat1(int size, fr* arr, const string filename) : CRat(size, arr, filename) {};
    CRat1(const CRat& other_one) : CRat(other_one) {};
    void output();

    friend const CRat1 operator+ (const CRat1& left, const CRat1& right);
    friend const CRat1 operator- (const CRat1& left, const CRat1& right);
    friend const fr operator*(const CRat1& left, const CRat1& right);
    friend void do_normal(fr*, int);
    CRat1& operator=(const CRat1& oke);
    ~CRat1();
};

#endif // !CRAT1


