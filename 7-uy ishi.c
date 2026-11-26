
#include <stdio.h>

int main(void) {
  int a[4][4];

  printf("4x4 massiv elementlarini kiriting:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (scanf("%d", &a[i][j]) != 1) {
        printf("Kiritilgan qiymat noto'g'ri.\n");
        return 1;
      }
    }
  }

  int min = a[0][0];
  int max = a[0][0];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (a[i][j] < min) {
        min = a[i][j];
      }
      if (a[i][j] > max) {
        max = a[i][j];
      }
    }
  }

  printf("Eng katta element: %d\n", max);
  printf("Eng kichik element: %d\n", min);
  printf("Ularning ayirmasi: %lld\n", (long long)max - min);

  return 0;
}
