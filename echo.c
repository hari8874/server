#include<stdio.h>

#include <string.h>

int main()

{

char command[200];



strcpy(command,"echo 1 > /sys/class/leds/led5/brightness");

system(command);



}
