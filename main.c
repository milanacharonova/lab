#include<stdlib.h>
#include<stdio.h>
#include "35.h"
void save(char *filename, hm*arr,int n){
  FILE *f = fopen(filename, "w");
  if(!f){
    puts("Nuh uh");
    return;
  }
  fwrite(arr,n,sizeof(hm),f);
  fclose(f); 
}
void load(char *filename,hm**arr,int*n){
  FILE *f=fopen(filename,"r");
  if(!f){
    puts("Nuh uh");
    return;
  }
  if(fscanf(f,"%i",n)!=1){
    puts("Nuh uh x2");
    fclose(f);
    return;
  }
  *arr=(hm*)calloc(*n,sizeof(hm));
  fread(arr,*n,sizeof(hm),f);
  }
