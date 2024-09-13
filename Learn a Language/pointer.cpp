#include <math.h>
#include <stdio.h>
void sumSub(int *a, int *b) {
  int temp = *a;
  *a = *a + *b;
  *b = abs(temp - *b);
  printf("%d\n", *a);
  printf("%d\n", *b);
}

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  sumSub(&a, &b);
  return 0;
}
