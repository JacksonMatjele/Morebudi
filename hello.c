#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string answer = get_string("Whats ur name? ");
  printf("hello, %s", answer);
}
