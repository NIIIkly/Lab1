#include <stdio.h>

int main() {
    int t1, t2, t3;
    float total_time;

    // Ввід значень t1, t2, t3
    printf("Введіть час (t1, t2, t3): ");
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислення загального часу
    total_time = (float)(1 / (1.0 / t1 + 1.0 / t2 + 1.0 / t3));

    // Виведення результату
    printf("Загальний час: %.2f год\n", total_time);

    return 0;
}
