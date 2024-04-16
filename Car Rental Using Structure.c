#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct car{
    int car_id;
    char model[20];
    int rate;
};

int main() {
   struct car c[20];
    
  int i,n,price;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&c[i].car_id);
      scanf("%s",c[i].model);
      //gets(c[i].model)
      scanf("%d",&c[i].rate);
      //scanf("%d",&days);
  }
  for(i=0;i<n;i++)
  {
      printf("Car ID: %d\n",c[i].car_id);
      printf("Model: %s\n",c[i].model);
      printf("Rental Rate per Day: %d\n",c[i].rate);
      price=10*c[i].rate;
      printf("Total Rental Cost for Car %d",i+1);
      printf(": %d\n",price);
  }
    return 0;
}
