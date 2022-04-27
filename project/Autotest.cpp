#include "Autotest.h"

int autotest() {
	fr arr1[] = { 1, 2, 3, 4 };
	fr arr2[] = { -1, 2, -3, 4 };
	CRat0 c1(2, arr1, "test1.txt"), c2(2, arr2, "test2.txt");
	CRat0 c3 = c1 + c2;
	c3.output();
	ifstream file;
	file.open("test3.txt");
	int x;
	for (int i = 0; i < 4; i++) {
		file >> x;
		if (x - i%2) {
			file.close();
			return 0;
		}
	}
	file.close();
	return 1;

}