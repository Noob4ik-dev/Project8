#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "RU");

    int date;

    printf("Введите дату в формате ддмм (например, 1306 для 13 июня): ");
    if (scanf_s("%d", &date) != 1) {
        printf("Ошибка ввода.\n");
        return 1;
    }

    int dd = date / 100;
    int mm = date % 100;

    switch (mm) {
    case 1:
        switch (dd >= 21) {
        case 0: printf("Козерог\n"); break;
        case 1: printf("Водолей\n"); break;
        }
        break;
    case 2:
        switch (dd >= 19) {
        case 0: printf("Водолей\n"); break;
        case 1: printf("Рыбы\n"); break;
        }
        break;
    case 3:
        switch (dd >= 21) {
        case 0: printf("Рыбы\n"); break;
        case 1: printf("Овен\n"); break;
        }
        break;
    case 4:
        switch (dd >= 21) {
        case 0: printf("Овен\n"); break;
        case 1: printf("Телец\n"); break;
        }
        break;
    case 5:
        switch (dd >= 21) {
        case 0: printf("Телец\n"); break;
        case 1: printf("Близнецы\n"); break;
        }
        break;
    case 6:
        switch (dd >= 22) {
        case 0: printf("Близнецы\n"); break;
        case 1: printf("Рак\n"); break;
        }
        break;
    case 7:
        switch (dd >= 23) {
        case 0: printf("Рак\n"); break;
        case 1: printf("Лев\n"); break;
        }
        break;
    case 8:
        switch (dd >= 24) {
        case 0: printf("Лев\n"); break;
        case 1: printf("Дева\n"); break;
        }
        break;
    case 9:
        switch (dd >= 24) {
        case 0: printf("Дева\n"); break;
        case 1: printf("Весы\n"); break;
        }
        break;
    case 10:
        switch (dd >= 24) {
        case 0: printf("Весы\n"); break;
        case 1: printf("Скорпион\n"); break;
        }
        break;
    case 11:
        switch (dd >= 23) {
        case 0: printf("Скорпион\n"); break;
        case 1: printf("Стрелец\n"); break;
        }
        break;
    case 12:
        switch (dd >= 22) {
        case 0: printf("Стрелец\n"); break;
        case 1: printf("Козерог\n"); break;
        }
        break;
    default:
        printf("Введен некорректный месяц!\n");
        break;
    }

    return 0;
}