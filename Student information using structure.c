#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct student{
    char name[30];
    int age;
    int total_marks;
};


int main() {
    
    struct student s[20];
    int i,n,avg;
    scanf("%d",&n);
    //printf("%d",n);
    for(i=0;i<n;i++)
    {
       //gets(s[i].name[i]);
       scanf("%s",s[i].name);
        scanf("%d",&s[i].age);
        scanf("%d",&s[i].total_marks);
    }    
    for(i=0;i<n;i++)
    {
        //printf("Name: ");
        //puts(s[i].name);
        printf("Name: %s\n",s[i].name);
        printf("Age: %d  \n",s[i].age);
        printf("Total Marks: %d",s[i].total_marks);
        printf("\n\n");
    }
    return 0;
}
