#include <stdlib.h>

char *get_bin_v(int n) {
    char *bin;
    int i = n;
    int len = 0;

    while (i > 0) {
        i /= 2;
        len++;
    }

    if (n == 0) len = 1;

    bin = malloc(sizeof(char) * (len + 1));
    if (!bin) return (NULL);

    bin[len] = '\0';
    i = len - 1;

    while (i >= 0) {
        bin[i] = (n % 2) + '0';
        n /= 2;
        i--;
    }

    return bin;
}
