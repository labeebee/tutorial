#include<stdio.h>

// function prototypes
void sec_func(int);
void call_twice(void (*fuction)(int), int);


// function definition
void sec_func(int a)
{
  printf("This is fun with argument %d\n",a);
}

void call_twice(void (*abc)(int ), int a)
  {
    
    printf("Calling the first time\n");
    abc(a);
    printf("Calling the second time\n");
    abc(a);
  }


// main
int main()
{
  int a = 3;
  call_twice(sec_func(a), a);
  return 0;
}
