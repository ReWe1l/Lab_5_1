#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <algorithm>
#include <Windows.h>
#include <limits>
#include <string>

using namespace std;
#define N 4

struct chel {
	char secondname[30];
	int age;
	char gender[7];
};

chel Func();
void printchel(chel e[N]);

#endif



