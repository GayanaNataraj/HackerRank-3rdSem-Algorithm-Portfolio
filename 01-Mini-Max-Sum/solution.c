#include <stdio.h>

int main() {
    long long a[5];
    long long sum = 0;
    long long min, max;

    for (int i = 0; i < 5; i++) {
        scanf("%lld", &a[i]);
        sum += a[i];
    }

    min = max = a[0];

    for (int i = 1; i < 5; i++) {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];
    }

    printf("%lld %lld\n", sum - max, sum - min);

    return 0;
}
