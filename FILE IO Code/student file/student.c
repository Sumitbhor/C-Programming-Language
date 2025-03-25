#include<stdio.h>

struct Student
{
    char name[20];
    int rollNo;
    int div;
    int grade ;
};
void acceptData(struct Student *s1);
void readData(struct Student s1);

void acceptData(struct Student *s1){
    printf("enter name of student\n");
    scanf("%s",s1->name);
    
    printf("enter roll no of student\n");
    scanf("%d",&s1->rollNo);
    
    printf("enter div of student\n");
    scanf("%d",&s1->div);
    
    printf("enter grade of student\n ");
    scanf("%d",&s1->grade);
}

void readData(struct Student s1){
    printf("name :%s\n",s1.name);
    printf("roll NO : %d\n",s1.rollNo);
    printf("div : %d\n",s1.div);
    printf("grade :%d\n",s1.grade);
}

void writeFile(struct Student s1,int num ){
    FILE *file=NULL;
    file=fopen("student.txt","w");
    if (file==NULL){
        printf("this file is not open");
    }
    for (int i = 0; i < num; i++){
        fprintf(file,"name:%s\n", s1.name);
        fprintf(file,"roll no:%d\n", s1.rollNo);
        fprintf(file,"DIV:%d\n", s1.div);
        fprintf(file,"grade:%d\n", s1.grade);
    }
}

void readFile(){
    FILE *pfile =NULL;
    pfile = fopen("student.txt","r");
    if (pfile==NULL){
        printf("this file is not open");
    }
    char buffer[100];
    printf("****************************\n"); 
    while (fgets(buffer,100,pfile)!= NULL)
    {   
       
        printf("%s",buffer);
        
    }
    printf("****************************"); 
    fclose(pfile);
}

int main(){
    struct Student s1 ;
    int num;
   /*printf("enter total number of student data you want to add");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        acceptData(&s1);
    }
    for (int i = 0; i < num; i++)
    {   
        printf("****************************");    
        readData(s1);
        printf("****************************");
    }
   
   
    writeFile(s1,num);*/ 
    readFile();
    return 1;
}
