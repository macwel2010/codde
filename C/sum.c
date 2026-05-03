#include <stdio.h>
int main() {
  double long n = 0, sum = 0, i;

  printf("Enter the number to sum n : ");
  scanf("%Lf", &n);

  for (i = 0; i <= n; i++) {
    sum = sum + i;
  }

  printf("The sum of first %Lf numbers is : %Lf.", n, sum);

  return 0;
}
