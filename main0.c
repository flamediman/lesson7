#include<stdio.h>

int isOdd(int a) { return a % 2 != 0; }
int isEven(int a) { return a % 2 == 0; }

int main() {
  int first, second;

  scanf("%d", &first);
  scanf("%d", &second);

  isEven(first) || isOdd(second) ? printf("yes") : printf("no");
  return 0;
}
