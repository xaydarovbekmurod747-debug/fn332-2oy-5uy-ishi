
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

  printf("Qatorlari teskari tartibda chiqarilgan massiv:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 3; j >= 0; j--) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
