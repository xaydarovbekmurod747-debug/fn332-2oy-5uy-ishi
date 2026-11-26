#include <stdio.h>

int main(void) {
  int a[3][4];

  printf("3x4 massiv elementlarini kiriting:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (scanf("%d", &a[i][j]) != 1) {
        printf("Kiritilgan qiymat noto'g'ri.\n");
        return 1;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    int max = a[i][0];
    for (int j = 1; j < 4; j++) {
      if (a[i][j] > max) {
        max = a[i][j];
      }
    }
    printf("%d-qatorning eng katta elementi: %d\n", i + 1, max);
  }

  return 0;
}
