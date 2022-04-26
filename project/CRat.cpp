#include "CRat.h"

CRat::CRat() {
	vec = NULL;
	outfile = "buffer.txt";
	size = 0;
}

CRat::CRat(int inp_size) {
	vec = (fr*)malloc(sizeof(fr) * inp_size);
	outfile = "buffer.txt";
	size = inp_size;
}

void do_normal(fr* arr, int len) {
	for (int i = 0; i < len; i++) {
		if (!arr[i].p) arr[i].q /= arr[i].q;
		else if(arr[i].q){
			int nod = NOD(arr[i].p, arr[i].q);
			arr[i].p /= nod;
			arr[i].q /= nod;
		}
	}
}



CRat::CRat(int input_size, fr* arr, const string FileName) {
	size = input_size;
	vec = new fr[input_size];
	for (int i = 0; i < size; i++) {
		vec[i].p = arr[i].p;
		vec[i].q = arr[i].q;
	}
	do_normal(vec, size);
	outfile = FileName;
}

CRat::CRat(const CRat& old_one) {
	size = old_one.get_size();
	vec = new fr[size];
	for (int i = 0; i < size; i++) {
		vec[i].p = old_one.item(i).p;
		vec[i].q = old_one.item(i).q;
	}
	outfile = old_one.outfile_name();
}

fr CRat::item(int i) const{
	return vec[i];
}
int CRat::get_size() const{
	return size;
}
string CRat::outfile_name() const{
	return outfile;
}



CRat::~CRat() {
	delete[] vec;
}


