#include <stdio.h>
void floydRecursive(int totalRows, int currentRow) {
    if (currentRow == totalRows) return;
    int start = (currentRow * (currentRow + 1)) / 2 + 1;
    for (int j = start; j <= (currentRow +1) * (currentRow +2) / 2; j++) {
        printf("%4d ", j);
    }
    printf("\n");
    floydRecursive(totalRows, currentRow + 1);
}
int main() {
    int rows;
    printf("Enter rows: ");
    scanf("%d", &rows);
    floydRecursive(rows, 0);
    return 0;
}