#include <stdio.h>

int main() {
    int i, j, n, m;
    int **a, **b, **c;
    
    int sum = 0;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            for (k = 0; k < l; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }    
    }    
}
