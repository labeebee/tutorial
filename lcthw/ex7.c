#include <stdio.h>

int main(int argc, char* argv[])
{
  int distance =100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'L';
  char first_name[] = "Labeeb";
  char last_name[] = "Ibrahim";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power. \n", power);
  printf("Yiu have %f awesome super powers.\n", super_power);

  printf("I have an initial %c.\n", initial);
  printf("I have a last name, %s. \n", last_name);
  printf("I have a first name, %s.\n", first_name);

  printf("My whole name is %s. %c %s", first_name, initial, last_name);

  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f\n", bugs, bug_rate);
  long universe_of_defects = 1L *1024* 1024L *1024L;
  printf("The entire universe has %ld bugs", universe_of_defects);
  double expected_bugs = bugs * bug_rate;
  double part_of_universe = expect
