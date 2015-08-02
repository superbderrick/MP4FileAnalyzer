//
//  main.c
//  SimpleTextFileIO
//
//  Created by Derrick on 8/2/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include <stdio.h>

struct people{
    char name[10];
    int age;
    char nationality[20];
    char city[10];
};

void readData() {
    struct people info[3];
    int i;
    FILE *f;
    f=fopen("test.txt","r");
    
    for(i=0;i<3;i++)
        fscanf(f,"%s %d %s %s",&info[i].name,&info[i].age, &info[i].nationality, &info[i].city);
    fclose(f);
    
    for(i=0;i<3;i++)
        printf("%s %d %s %s\n",info[i].name,info[i].age, info[i].nationality, info[i].city);
};

void writeData() {
    struct people info[3];
    int i;
    FILE *f;
    strcpy(info[0].name,"JisungPark");
    info[0].age=32;
    strcpy(info[0].nationality,"Korean");
    strcpy(info[0].city,"Seoul");
    
    
    
    for(i=0;i<1;i++)
        printf("%s %d %s %s\n",info[i].name,info[i].age, info[i].nationality, info[i].city);
    
    
    f=fopen("test.txt","w");
    
    for(i=0;i<1;i++)
        fprintf(f,"%s %d %s %s\n",info[i].name,info[i].age, info[i].nationality, info[i].city);
    
    
    fclose(f);
    
    
}



int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Simple Test to understand as Test Paring mechanism  from normal Text file. ");
    
    //readData();
    
    writeData();
    
    
}


