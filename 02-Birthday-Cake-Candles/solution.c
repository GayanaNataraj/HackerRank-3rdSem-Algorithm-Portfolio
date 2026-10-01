#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int candles[n];
    int max = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &candles[i]);

        if (candles[i] > max) {
            max = candles[i];
            count = 1;
        } else if (candles[i] == max) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
