//Task: print out the numbers 1 to 100
//If a number is divisible by 3 then your program should print ‘Fizz’. If a number is divisible by 5 then your program should print ‘Buzz’. 
//If a number is divisible by both 5 and 3 (e.g., 15) then your program should print ‘FizzBuzz’
#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 100; i++)
  {
    if (i % 5 == 0 && i % 3 == 0)
    {
      printf("FizzBuzz");
    }
    else if (i % 3 == 0)
    {
      printf("Fizz");
    }
    else if (i % 5 == 0)
    {
      printf("Buzz");
    }
    else
    {
      printf("%i", i);
    }
    printf("\n");
  }
}