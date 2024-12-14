#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab.h"
int main(){
FILE* fp;
struct taxi a;
for(;;){
  printf("What do u want to do?\n1 - Show data\n2 - Find smth\n3 - Add new car\n4 - Del smth\n5 - Edit data\n6 - Exit\n");
  int b;
  scanf("%i", &b);
  switch(b){
    case 1://display
      display(fp);
      break;
    case 2://find
      find(fp);
      break;
    case 3://add
        add(fp);
        break;
    case 4://del
      del(fp);
      break;
    case 5://redact
      redact(fp);
      break;
    case 6://exit
      return 0;
      break;
    default:
      break;
  }}
  return 0;
}
