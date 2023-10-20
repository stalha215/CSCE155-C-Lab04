/**
 * Author(s):
 * Date:
 *
 * This is a series of exercises to introduce loop
 * control structures.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{

  // A simple for loop that prints 0 thru 9

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", i);
  }
  printf("\n");

  // 1. Rewrite the given for loop as an equivalent while loop
  // for (int i = 10; i < 20; i += 3)
  //{
  //  printf("%d ", i);
  //}
  // printf("\n");
  printf("Q1\n");
  int i = 10;
  while (i < 20)
  {
    printf("%d ", i);
    i += 3;
  }
  printf("\n");

  // 2. Rewrite the given while loop as an equivalent for loop
  // int k = 3;
  // while (k > -4)
  //{
  //  printf("%d ", k);
  //  k--;
  //}
  // printf("\n");
  printf("Q2\n");
  for (int k = 3; k > -4; k--)
  {
    printf("%d ", k);
  }
  // 3. Print numbers 1 thru n separated by a comma except for
  //    the last one; example: 1, 2, 3, 4, 5
  printf("Q3\n");
  for (int i = 1; i <= 5; i++)
  {
    printf("%d, ", i);
  }
  printf("\n");

  // 4. Print squares of numbers 1 thru n separated by a comma
  //    except for the last one; example: 1, 4, 9, 16, 25
  printf("Q4\n");
  for (int i = 1; i <= 5; i++)
  {
    printf("%d, ", i * i);
  }
  printf("Q5\n");
  // 5. Compute the summation of numbers 1 thru n and print
  //    the result; example: 1 + 2 + 3 + 4 + 5 = 15
  int sum = 0;
  for (int i = 1; i <= 5; i++)
  {
    sum += i;
  }
  printf("%d \n", sum);
  printf("Q6\n");
  // 6. Compute the summation of squares of numbers 1 thru n
  //    and print the result; example: 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
  int square = 0;
  for (int i = 1; i <= 5; i++)
  {
    square += i * i;
  }
  printf("%d\n", square);

  // 7. Compute the summation of even numbers 1 thru n and print
  //    the result; example (n=5): 2 + 4 = 6
  printf("Q7\n");
  int sum2 = 0;
  for (int i = 1; i <= 5; i++)
  {
    if (i % 2 == 0)
    {
      sum2 += i;
    }
  }
  printf("%d\n", sum2);

  // 8. Write a solution to the following variation of the FizzBuzz
  //    problem.  Print out integers 1 thru n, one to a line, except
  //    that if the integer is divisible by 7 print "Foo" instead.
  //    If the integer is divisible by 11 print "Bar" instead.  If
  //    the integer is divisible by both 7 and 11, print "FooBar"
  //    instead.
  printf("Q8\n");
  for (int i = 0; i < 50; i++)
  {

    if (i % 7 == 0)
    {
      printf("Foo ");
    }
    else if (i % 11 == 0)
    {
      printf("Bar ");
    }
    else if (i % 7 == 0 && i % 11 == 0)
    {
      printf("FooBar ");
    }
    else
    {
      printf("%d ", i);
    }
  }

  return 0;
}
