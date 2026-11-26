
#include <stdio.h>

int main(void) {
  int a[3][3];
  int sums[3];

  printf("3x3 massiv elementlarini kiriting:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (scanf("%d", &a[i][j]) != 1) {
        printf("Kiritilgan qiymat noto'g'ri.\n");
        return 1;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    sums[i] = 0;
    for (int j = 0; j < 3; j++) {
      sums[i] += a[i][j];
    }
    printf("%d-qator yig'indisi: %d\n", i + 1, sums[i]);
  }

  int maxSum = sums[0];
  for (int i = 1; i < 3; i++) {
    if (sums[i] > maxSum) {
      maxSum = sums[i];
    }
  }

  printf("Eng katta yig'indi: %d\n", maxSum);
  printf("Eng katta yig'indiga ega qator(lar): ");
  for (int i = 0; i < 3; i++) {
    if (sums[i] == maxSum) {
      printf("%d ", i + 1);
    }
  }
  printf("\n");

  return 0;
}
