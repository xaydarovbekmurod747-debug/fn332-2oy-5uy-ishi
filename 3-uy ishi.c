
#include <stdio.h>

int main(void) {
  int a[4][4];
  int count = 0;

  printf("4x4 massiv elementlarini kiriting:\n");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (scanf("%d", &a[i][j]) != 1) {
        printf("Kiritilgan qiymat noto'g'ri.\n");
        return 1;
      }
    }
  }

  printf("5 ga qoldiqsiz bo'linadigan sonlar: ");
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (a[i][j] % 5 == 0) {
        printf("%d ", a[i][j]);
        count++;
      }
    }
  }
  printf("\nUlarning soni: %d\n", count);

  return 0;
}
