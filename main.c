#include <stdio.h>

#include "pcl_Unicode.h"
#include "pcl/pcl.h"
#include "pac/md5.h"

int main(void) {

	char* hash = md5("Ala ma kota");
	puts(hash);

/*
	struct Console * console = start();
	struct UnicodeScreen * unicode = initunicode(console);

	setcharunicode(unicode, L"🦒");
	refreshunicode(console, unicode);
	setcharcursorunicode(unicode, L"ý", 3, 3);
	refreshunicode(console, unicode);

	setstringunicode(unicode, L"figa🦒 z◌𞋬 makie₼");
	refreshunicode(console, unicode);

	system("pause");*/
	return 0;
}