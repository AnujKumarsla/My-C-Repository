#include <math.h>
int main () {
  int year = 1998;
  int a = year % 19;
  int b = year % 4;
  int c = year % 7;
  int k = floor (year/100);
  int p = floor ((13 + 8k)/25);
  int q = floor (k/4);
  int M = (15 − p + k − q) % 30;
  int N = (4 + k − q) % 7;
  int d = (19a + M) % 30;
  int e = (2b + 4c + 6d + N) % 7;
  if (d == 29 && e == 6) {
    printf("19 April");
  }
  else if (d == 28 && e = 6 && (11M + 11) % 30 < 19) {
    printf("18 April");
  }
  else if (22 + d + e < 32) {
    printf("%d March", (22 + d + e));
  }
  else {
    printf("%d April", d + e - 9);
  }
  return 0;
}