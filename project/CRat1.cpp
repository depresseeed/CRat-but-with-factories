#include "CRat1.h"

void CRat1::output() {
	ofstream file;
	file.open(outfile);
	for (int i = 0; i < size; i++) {
		file << vec[i].p << "/" << vec[i].q << endl;
	}
	file.close();
}


//const CRat1 operator+(const CRat1& left, const CRat1& right) {
//	if (left.get_size() == 0 || left.get_size() != right.get_size()) {
//		perror("Bad sizes");
//		CRat1 error_return;
//		return error_return;
//	}
//
//	int len = left.get_size();
//	fr* buf = new fr[len];
//
//	for (int i = 0; i < len; i++) {
//		buf[i].p = left.item(i).p * right.item(i).q + right.item(i).p * left.item(i).q;
//		buf[i].q = left.item(i).q * right.item(i).q;
//
//	}
//
//	return CRat1(len, buf, left.outfile_name());
//}
//
//const CRat1 operator-(const CRat1& left, const CRat1& right) {
//	if (left.get_size() == 0 || left.get_size() != right.get_size()) {
//		perror("Bad sizes");
//		CRat1 error_return;
//		return error_return;
//	}
//
//	int len = left.get_size();
//	fr* buf = new fr[len];
//
//	for (int i = 0; i < len; i++) {
//		buf[i].p = left.item(i).p * right.item(i).q - right.item(i).p * left.item(i).q;
//		buf[i].q = left.item(i).q * right.item(i).q;
//
//	}
//
//	return CRat1(len, buf, left.outfile_name());
//}
//
//const fr operator*(const CRat1& left, const CRat1& right) {
//	fr ret;
//	fr buff;
//	int nod;
//	ret.p = 0;
//	ret.q = 1;
//	if (left.get_size() == 0 || left.get_size() != right.get_size()) {
//		perror("Bad sizes");
//		return ret;
//	}
//
//	for (int i = 0; i < left.get_size(); i++) {
//		buff.p = left.item(i).p * right.item(i).p;
//		buff.q = left.item(i).q * right.item(i).q;
//		ret.p = buff.p * ret.q + ret.p * buff.q;
//		ret.q *= buff.q;
//		nod = NOD(ret.p, ret.q);
//		ret.p /= nod;
//		ret.q /= nod;
//	}
//
//	return ret;
//
//}
//
//CRat1& CRat1::operator=(const CRat1& oke) {
//	delete[] vec;
//	size = oke.get_size();
//	if (size == 0) vec = NULL;
//	else {
//		vec = new fr[size];
//		for (int i = 0; i < size; i++) {
//			vec[i].p = oke.item(i).p;
//			vec[i].q = oke.item(i).q;
//		}
//	}
//	return *this;
//}




CRat1::~CRat1() { }


