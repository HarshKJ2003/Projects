#include <stdio.h>
#include <string.h>

struct r {
    char name[30];
    char rno[10];
    int age;
    char address[50];
    char mail[25];
    int mobile;
    char prog[5];
    char sem[5];
};

struct s {
    char el1[20];
    char el2[20];
    char com1[20];
    char com2[20];
};

struct r record;
struct s subject;

void store(struct r r1);
void reg(struct s subject);
void opt(struct s subject);
void dis(struct r r1);

int main()
{
   int a; 
   char sub[15][3]={"AA","BB","CC","DD","EE","FF","GG","HH","II","JJ","KK","LL","MM","NN","OO"};

    printf("Press \n1 to store information.\n2 for registration.\n3 to opt subject.\n4 for modify search or display.\n");
    scanf("%d",&a);

    if(a==1){
        store(record);
    } else if(a==2){
        reg(subject);
    } else if(a==3){
        opt(subject);
    } else{
        dis(record);
    }

    return 0;
}

void store(struct r r1)
{
    printf("Enter the information in the order \nName\nRollNo.\nAge\nAddress\nMail\nMobileNumber\nProgram\nSemester\n");
    scanf("%s", record.name);
    scanf("%s", record.rno);
    scanf("%d", &record.age);
    scanf("%s", record.address);
    scanf("%s", record.mail);
    scanf("%d", &record.mobile);
    scanf("%s", record.prog);
    scanf("%s", record.sem);

    strcpy(subject.el1, "NA");
    strcpy(subject.el2, "NA");
    strcpy(subject.com1, "NA");
    strcpy(subject.com2, "NA");

    dis(record);
}

void reg(struct s subject)
{
    if(strcmp(record.sem, "1") == 0) {
        strcpy(subject.com1, "AA");
        strcpy(subject.com2, "BB");
    } else if(strcmp(record.sem, "2") == 0) {
        strcpy(subject.com1, "BB");
        strcpy(subject.com2, "CC");
    } else if(strcmp(record.sem, "3") == 0) {
        strcpy(subject.com1, "CC");
        strcpy(subject.com2, "DD");
    } else if(strcmp(record.sem, "4") == 0) {
        strcpy(subject.com1, "DD");
        strcpy(subject.com2, "EE");
    } else if(strcmp(record.sem, "5") == 0) {
        strcpy(subject.com1, "EE");
        strcpy(subject.com2, "FF");
    } else if(strcmp(record.sem, "6") == 0) {
        strcpy(subject.com1, "FF");
        strcpy(subject.com2, "GG");
    } else if(strcmp(record.sem, "7") == 0) {
        strcpy(subject.com1, "GG");
        strcpy(subject.com2, "HH");
    } else {
        strcpy(subject.com1, "HH");
        strcpy(subject.com2, "II");
    }
}

void opt(struct s subject)
{
    printf("Enter in the order \nElectiveCourse1\nElectivecourse2\n");
    scanf("%s", subject.el1);
    scanf("%s", subject.el2);
}

void dis(struct r r1)
{
    printf("Name:%s\nRollNo.:%s\nAge:%d\nAddress:%s\nMail:%s\nMobileNumber:%d\nProg:%s\nSem:%s\nElectiveCourse1:%s\nElectiveCourse2:5%s\nCompulsaryCourse1:%s\nCompulsaryCourse2:%s",record.name,record.rno,record.age,record.address,record.mail,record.mobile,record.prog,record.sem,subject.el1,subject.el2,subject.com1,subject.com2);
}
