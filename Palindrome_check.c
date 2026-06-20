#include <conio.h>
#include <stdio.h>

int main()
{
  int A, B=0, R, X;
  //Taking number input
  printf("Enter a number:");
  scanf("%d",&X);
  A = X;
  while (x!=0)
  {
    R = X % 10;
    X = X / 10;
    B = B * 10 + R;
  }
  if (A == B)
  {
    printf("Entered number is a palindrome./n");
  }
  else
  {
    printf("Entered number is not a palindrome./n");
  }
}
