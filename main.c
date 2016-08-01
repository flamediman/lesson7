#include<stdio.h>

int main() {
  int first, second, current;

  scanf("%d", &first);
  scanf("%d", &second);
  int limit = first > second ? first : second;
  current = first;

  for(int i = 0; i <= limit; i++) {
    if( i == current ) {
      printf("yes");
      return 0;
    }
    // NOTE: If current is first then switch to second otherwise put first
    current = current == first ? second : first;
  }

  printf("no");

  return 0;
}
