#include <stdio.h>

int main()
{
  long A, B=0, X;
  int R;
  //Taking number input
  printf("Enter a number:");
  scanf("%ld",&X);
  A = X;
  while (X!=0)
  {
    R = X % 10;
    X = X / 10;
    B = B * 10 + R;
  }
  if (A == B)
  {
    printf("Entered number is a palindrome.\n");
  }
  else
  {
    printf("Entered number is not a palindrome.\n");
  }
}
