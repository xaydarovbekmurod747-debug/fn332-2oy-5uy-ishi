
#include <stdio.h>

int main(void) {
  int a[4][3];

  printf("4x3 massiv elementlarini kiriting:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      if (scanf("%d", &a[i][j]) != 1) {
        printf("Kiritilgan qiymat noto'g'ri.\n");
        return 1;
      }
    }
  }

  for (int j = 0; j < 3; j++) {
    int min = a[0][j];
    for (int i = 1; i < 4; i++) {
      if (a[i][j] < min) {
        min = a[i][j];
      }
    }
    printf("%d-ustunning eng kichik elementi: %d\n", j + 1, min);
  }

  return 0;
}
