#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab.h"
struct taxi a;
void display(FILE * fp){
  fp = fopen("data.txt", "r");
      if (!fp) return;
      while(!feof(fp)){
          fscanf(fp, "%s %s %i %s\n", a.brand, a.model, &a.km, a.cu);
          printf("%s %s %i %s\n", a.brand, a.model, a.km, a.cu);
      }
      fclose(fp);
}
void find(FILE * fp){
  int flag = 0;
      fp = fopen("data.txt", "r");
      if(!fp) return;
      int ch;
      printf("Choose what to search\n1 - Brand\n2 - Model\n3 - KM\n4 - Current user\n");
      scanf("%i", &ch);
      switch(ch){
        case 1:
          printf("Type brand: \n");
          char brand[20];
          scanf("%s", brand);
          while(!feof(fp)){
            fscanf(fp, "%s %s %i %s\n", a.brand, a.model, &a.km, a.cu);
            if(strcmp(brand, a.brand) == 0){
              printf("%s %s %i %s\n", a.brand, a.model, a.km, a.cu);
              flag = 1;
            }
          }
          break;
        case 2:
          printf("Type model of car: \n");
          char model[20];
          scanf("%s", model);
          while(!feof(fp)){
            fscanf(fp, "%s %s %i %s\n", a.brand, a.model, &a.km, a.cu);
            if(strcmp(model, a.model) == 0){
              printf("%s %s %i %s\n", a.brand, a.model, a.km, a.cu);
              flag = 1;
            }
          }
          break;
        case 3:
          printf("Type how many km did car drive: ");
          int km;
          scanf("%i", &km);
          while(!feof(fp)){
            fscanf(fp, "%s %s %i %s\n", a.brand, a.model, &a.km, a.cu);
            if(km == a.km){
              printf("%s %s %i %s\n", a.brand, a.model, a.km, a.cu);
              flag = 1;
            }
          }
          break;
         case 4:
          printf("Type current user: \n");
          char cu[50];
          scanf("%s", cu);
          while(!feof(fp)){
            fscanf(fp, "%s %s %i %s\n", a.brand, a.model, &a.km, a.cu);
            if(strcmp(cu, a.cu) == 0){
              printf("%s %s %i %s\n", a.brand, a.model, a.km, a.cu);
              flag = 1;
            }
          }
          break;
        default:        
      fclose(fp);
      return;
      }
      if(flag == 0){
        printf("Nothing found\n");
        }}
void add(FILE * fp){
  printf("Enter brand of car: ");
        scanf("%s", a.brand);
        printf("Enter model of car: ");
        scanf("%s", a.model);
        printf("Enter how many km did car ride: ");
        scanf("%i", &a.km);
        printf("Enter current user of car: ");
        scanf("%s", a.cu);
        fp = fopen("data.txt", "a");
        if (!fp) return;
        fprintf(fp, "%s %s %i %s\n", a.brand, a.model, a.km, a.cu);
        fclose(fp);
      }
void del(FILE * fp){
  fp = fopen("data.txt", "r");
       if (!fp) return;
      int n = 0;
      while(!feof(fp)){
        fscanf(fp, "%s %s %i %s\n", a.brand, a.model, &a.km, a.cu);
        printf("%i)%s %s %i %s\n",n, a.brand, a.model, a.km, a.cu);
        n++;
      }
      rewind(fp);
      struct taxi *arr = calloc(n, sizeof(struct taxi));
      for(int i = 0; i < n; i++){
        fscanf(fp, "%s %s %i %s\n", arr[i].brand, arr[i].model, &arr[i].km, arr[i].cu);
      }
      fclose(fp);
      fp = fopen("data.txt", "w");
      if (!fp) return;
      int num;
      printf("Enter number of line u want to del: ");
      scanf("%i", &num);
      for(int i = 0; i < n; i++){
        if(i == num){
        }else{
          fprintf(fp, "%s %s %i %s\n", arr[i].brand, arr[i].model, arr[i].km, arr[i].cu);
        }
      }
      fclose(fp);
      free(arr);
    }
void redact(FILE * fp){
  fp = fopen("data.txt", "r");
       if (!fp) return;
      int c = 0;
      while(!feof(fp)){
        fscanf(fp, "%s %s %i %s\n", a.brand, a.model, &a.km, a.cu);
        printf("%i)%s %s %i %s\n",c, a.brand, a.model, a.km, a.cu);
        c++;
      }
      rewind(fp);
      struct taxi *arra = calloc(c, sizeof(struct taxi));
      for(int i = 0; i < c; i++){
        fscanf(fp, "%s %s %i %s\n", arra[i].brand, arra[i].model, &arra[i].km, arra[i].cu);
      }
      fclose(fp);
      fp = fopen("data.txt", "w");
      if (!fp) return;
      int numb;
      printf("Enter number of line u want to edit: ");
      scanf("%i", &numb);
      for(int i = 0; i < c; i++){
        if(i == numb){
          printf("Enter brand of car: ");
          scanf("%s", a.brand);
          printf("Enter model of car: ");
          scanf("%s", a.model);
          printf("Enter how many km did car ride: ");
          scanf("%i", &a.km);
          printf("Enter current user of car: ");
          scanf("%s", a.cu);
          fprintf(fp, "%s %s %i %s\n", a.brand, a.model, a.km, a.cu);
        }else{
          fprintf(fp, "%s %s %i %s\n", arra[i].brand, arra[i].model, arra[i].km, arra[i].cu);
        }
      }
      fclose(fp);
      free(arra);
  }
