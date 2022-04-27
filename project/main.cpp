#include "main.h"
#include "CRat0.h"
#include "CRat1.h"
#include "Autotest.h"
#include "Factory.h"

int NOD(int n, int nn)
{
	int n1 = abs(n);
	int n2 = abs(nn);
	int div;
	if (n1 == n2)  return n1;
	int d = n1 - n2;
	if (d < 0) {
		d = -d;  div = NOD(n1, d);
	}
	else
		div = NOD(n2, d);
	return div;
}




int main(void) {
	//const char fname[] = "1.txt";
	if (autotest()) {
		cout << "test passed" << endl;
	}
	else {
		cout << "test didn't pass" << endl;
		return 1000;
	}

	fr* buff;
	int len;
	string I;
	const string infile_name = "1.txt";
	string line;
	string outfile;
	int size = 0;

	ifstream infile;
	infile.open(infile_name);
	while (getline(infile, line))
		size++;
	infile.close();
	//CRat** arr = (CRat**)malloc(sizeof(CRat*) * size);

	vector<CRat*> arr;

	//if (arr == NULL) { perror("malloc"); return 993; }
	int i = 0;
	infile.open(infile_name);


	map<string, Factory*> FMap;
	FMap["hori"] = new Factory_0;
	FMap["vert"] = new Factory_1;

	while (!infile.eof())
	{
		infile >> I;
		infile >> outfile;
		infile >> len;
		buff = (fr*)malloc(sizeof(fr) * len);

		for (int i = 0; i < len; i++) {
			infile >> buff[i].p;
			infile >> buff[i].q;
		}

		auto Maker = FMap.find(I);
		if (Maker == FMap.end()) {
			perror("Did not find this factory");
			return 986;
		}
		arr.push_back(Maker->second->create(len, buff, outfile));
		free(buff);

	}
	
	for (int i = 0; i < size; i++) {
		arr[i]->output();
	}


	infile.close();

	for (int i = 0; i < arr.size(); i++)
		delete[] arr[i];

	

	return 0;
}