#pragma once
#include <iostream>
#include <Windows.h>
using namespace std;
#define N 4

struct chel {
	char secondname[30];
	int age;
	char gender[7];
};

chel Func() {
	chel e;
	cout << "������� ���������� � ������" << endl;
	cout << "�������: "; cin >> e.secondname;
	cout << "�������: "; cin >> e.age; 
	cout << "���: "; cin >> e.gender; cout << endl;
	
	return e;
}

void printchel(chel e[N]) {

	int males = 0;
	int females = 0;

	cout << "���������� � �������" << endl << endl;
	for (int i=0; i < N; i++)
	{
		cout << "�������: " << e[i].secondname << endl;
		cout << "�������: " << e[i].age << endl;
		cout << "���: " << e[i].gender << endl;

		if (strcmp(e[i].gender, "�������") == 0) { males++; }
		else if (strcmp(e[i].gender, "�������") == 0) { females++; }

	}
	
	cout << "������� �������� ���� - " << males << endl;
	cout << "������� �������� ���� - " << females << endl;

	cout << endl;

	if (males > females) {
        cout << "������ �������� ���� �����������." << endl;
        cout << "���������� � ������� �������� ����:" << endl;
        for (int i = 0; i < N; i++) {
            if (strcmp(e[i].gender, "�������") == 0) {
                cout << "�������: " << e[i].secondname << endl;
                cout << "�������: " << e[i].age << endl;
                cout << "���: " << e[i].gender << endl;
            }
        }
    }
    else if (females > males) {
        cout << "������ �������� ���� �����������." << endl;
        cout << "���������� � ������� �������� ����:" << endl;
        for (int i = 0; i < N; i++) {
            if (strcmp(e[i].gender, "�������") == 0) {
                cout << "�������: " << e[i].secondname << endl;
                cout << "�������: " << e[i].age << endl;
                cout << "���: " << e[i].gender << endl;
            }
        }
    }
    else {
        cout << "������� � ������� ����������� � ������ ����������." << endl;
    }
}
