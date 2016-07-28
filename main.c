#include<stdio.h>

int main() {
  int a, b, mediator;
  int c = 0000;
  int limit = 9999;

  scanf("%a", &a);
  scanf("%d", &b);

  while(c != a & c < limit) {
    mediator = a;
    a = b;
    b = mediator;
    c = c + 1;
  }

  if( c == a ) {
    printf("yes");
  } else {
     printf("no");
    }

  return 0;
}
