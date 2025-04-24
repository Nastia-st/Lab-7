#include <stdio.h>
#include <stdlib.h>
#include "distance.h"

int main() {
    system("chcp 65001");
    int N;
    printf("Введіть кількість точок: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Має бути щонайменше 2 точки.\n");
        return 1;
    }

    Point* points = malloc(N * sizeof(Point));

    for (int i = 0; i < N; i++) {
        printf("Точка %d (x y): ", i + 1);
        scanf("%lf %lf", &points[i].x, &points[i].y);
    }

    for (int i = 0; i < N - 1; i++) {
        double d = distance(points[i], points[i + 1]);
        printf("Відстань між %d і %d: %.2lf\n", i + 1, i + 2, d);
    }

    free(points);
    return 0;
}