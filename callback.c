#include <stdio.h>
#include "reg_callback.h"

void my_callback(void)
{
  printf("Inside my call back\n");
}

int main(void)
{
  callback ptr_my_callback = my_callback;
  printf("This is the main demoing callback\n");
  register_callback(ptr_my_callback);
  printf("Back inside main\n");
  return 0;
}
