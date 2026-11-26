
#include <stdio.h>

int main(void) {
  int a[4][4];
  int number;
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

  printf("Massivdan qidiriladigan sonni kiriting: ");
  if (scanf("%d", &number) != 1) {
    printf("Kiritilgan qiymat noto'g'ri.\n");
    return 1;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (a[i][j] == number) {
        count++;
      }
    }
  }

  printf("%d soni massivda %d marta uchraydi.\n", number, count);

  return 0;
}
