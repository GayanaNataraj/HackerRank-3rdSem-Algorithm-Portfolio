#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int maximumToys(int n, int prices[], int k) {
    qsort(prices, n, sizeof(int), compare);

    int total = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (total + prices[i] <= k) {
            total += prices[i];
            count++;
        } else {
            break;
        }
    }

    return count;
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int prices[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("%d\n", maximumToys(n, prices, k));

    return 0;
}
