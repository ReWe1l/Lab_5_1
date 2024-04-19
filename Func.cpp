#include "Header.h"

chel Func() {
    chel e;    

    cout << "Введите информацию о жителе" << endl;

    cout << "Фамилия: ";
    cin >> e.secondname;

    cout << "Возраст: ";
    while (!(cin >> e.age)) {
        cout << "Ошибка. Введите корректный возраст: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Пол: ";
    cin >> e.gender;

    cout << endl;

    return e;
}

void printchel(chel e[N]) {

    int males = 0;
    int females = 0;

    cout << "Информация о жителях" << endl << endl;
    for (int i = 0; i < N; i++)
    {
        cout << "Фамилия: " << e[i].secondname << endl;
        cout << "Возраст: " << e[i].age << endl;
        cout << "Пол: " << e[i].gender << endl;

        if (strcmp(e[i].gender, "мужской") == 0) { males++; }
        else if (strcmp(e[i].gender, "женский") == 0) { females++; }

    }

    cout << endl;

    cout << "Жителей мужского пола - " << males << endl;
    cout << "Жителей женского пола - " << females << endl;

    cout << endl;

    if (males > females) {
        cout << "Жители мужского пола преобладают." << endl << endl;
        cout << "Информация о жителях мужского пола:" << endl;
        for (int i = 0; i < N; i++) {
            if (strcmp(e[i].gender, "мужской") == 0) {
                cout << "Фамилия: " << e[i].secondname << endl;
                cout << "Возраст: " << e[i].age << endl;
                cout << "Пол: " << e[i].gender << endl;
            }
        }
    }
    else if (females > males) {
        cout << "Жители женского пола преобладают." << endl;
        cout << "Информация о жителях женского пола:" << endl;
        for (int i = 0; i < N; i++) {
            if (strcmp(e[i].gender, "женский") == 0) {
                cout << "Фамилия: " << e[i].secondname << endl;
                cout << "Возраст: " << e[i].age << endl;
                cout << "Пол: " << e[i].gender << endl;
            }
        }
    }
    else {
        cout << "Мужчины и женщины встречаются в равном количестве." << endl;
    }
}