#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct student{
    char name[25];
    int roll_no,tot;
    int m1,m2,m3,m4,m5;
    float per;
};

int main() {
    struct student s[10];
  int n,i,j;
  float sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%s",s[i].name);
      scanf("%d",&s[i].roll_no);
      /*for(j=0;j<5;j++)
      {
          scanf("%d",&s[i].marks[j]);
      }*/
      scanf("%d",&s[i].m1);
      scanf("%d",&s[i].m2);
      scanf("%d",&s[i].m3);
      scanf("%d",&s[i].m4);
      scanf("%d",&s[i].m5);
      //scanf("%d",&s[i].m6);
  }
  for(i=0;i<n;i++)
  {
      printf("Name: %s\n",s[i].name);
      printf("Roll No: %d\n",s[i].roll_no);
      //printf("Marks:");    
          sum=s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5; 
      s[i].per=(sum/500)*100;
      printf("Percentage: %.1f\n",s[i].per);
  }
    return 0;
}
