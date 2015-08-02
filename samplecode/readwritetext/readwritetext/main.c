//
//  main.c
//  readwritetext
//
//  Created by 강진영 on 8/2/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include <stdio.h>

struct people{
    char name[10];
    char job[10];
    int age;
    char city[10];
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct people person[3];
    int i;
    FILE *f;
    strcpy(person[0].name,"Derrick");
    person[0].age=15;
    strcpy(person[0].job,"Software Engineer");
    strcpy(person[0].city,"Seoul");
    
  
    
    for(i=0;i<1;i++)
        printf("%s %d %s %s\n",person[i].name,person[i].age, person[i].job, person[i].city);
    
    
    f=fopen("a.txt","w");
    
    for(i=0;i<1;i++)
        fprintf(f,"%s %d %s %s\n",person[i].name,person[i].age, person[i].job, person[i].city);
    
    
    fclose(f);
    
    return 0;

}
