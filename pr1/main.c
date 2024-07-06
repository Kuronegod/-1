#include <stdio.h>

int main() {
    double t1, t2, t3, rate, time;

    printf("Enter three values: ");
    scanf("%lf %lf %lf", &t1, &t2, &t3);

    rate = (1.0/t1) + (1.0/t2) + (1.0/t3);
    time = 1.0 / rate;

    printf("Time required to eat the pie: %.2f hours\n", time);

    return 0;
}
