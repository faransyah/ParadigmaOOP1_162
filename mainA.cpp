#include <iostream>
#include <vector>
using namespace std;
#include "anak.h"
#include "ibu.h"

int main() {
	ibu* varIbu = new ibu("dini");
	ibu* varIbu2 = new ibu("novi");
	anak* varAnak1 = new anak("Tono");
	anak* varAnak2 = new anak("Rini");
	anak* varAnak3 = new anak("Dewi");

	varIbu->tambahanAnak(varAnak1);
	varIbu->tambahanAnak(varAnak2);
	varIbu2->tambahanAnak(varAnak3);
	varIbu2->tambahanAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
	delete varAnak1;
	delete varAnak2;
	delete varAnak3;
	
	return 0;

}