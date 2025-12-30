#include <stdio.h>
#include <time.h>

void run_lin(long a) {
    long count = 0;
    for (long i = 0; i < a;i++) {
        count += i;}
}
int main() {
    long n = 10000;
    clock_t start = clock();
    run_lin(n);
    clock_t end = clock();
    double t = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Time for n = %ld: %f sec\n", n, t);
    return 0;
}
