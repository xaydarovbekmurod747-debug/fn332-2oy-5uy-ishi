
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
    int count = 0;
    for (int j = 0; j < 4; j++) {
      if (a[i][j] > 0) {
        count++;
      }
    }
    printf("%d-qatordagi musbat sonlar soni: %d\n", i + 1, count);
  }

  return 0;
}
