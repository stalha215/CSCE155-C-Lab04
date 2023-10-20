/**
 * Author:
 * Date:
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main()
{
  int num;
  printf("Enter number to get table\n");
  scanf("%d", &num);

  if (num <= 0)
  {
    printf("empty table!\n");
    exit(0);
  }

  for (int i = 1; i <= 10; i++)
  {
    printf("%dx%d=%d\n", num, i, num * i);
  }

  return 0;
}