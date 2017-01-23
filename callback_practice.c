#include<stdio.h>
void first_func(void);
void sec_func(char);
void call_twice(void(*)(char));
  
void main()
{
  char data = 'L';
  call_twice(sec_func(data));
}

//void first_func()
// {
//   printf("Hello\n");
// }

void sec_func(char abc)
{
  printf("This is fun with arguments %s\n",abc);
}

//void call_twice(void abc(void))
// {
//  printf("Calling the first time\n");
//  abc();
//  printf("Calling the second time\n");
//  abc();
//}

void call_twice(void abc(char xyz))
  {
    printf("Calling the first time\n");
    abc(xyz);
    printf("Calling the second time\n");
    abc(xyz);
  }

