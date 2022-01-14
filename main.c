#include <stdio.h>




//functions
void start(){
    int op;
startloop:
    printf("\nOptions :\n\t[1]Registeration\n\t[2]Check\n\t[3]Count\n\t[4]Export details\nEnter any option number :");
    scanf("%d",&op);
    switch (op){
        case 1:
            reg();
            break;
        case 2:
            check();
            break;
        case 3:
            count();
            break;
        case 4:
            exp();
            break;
        default:
            printf("\nEnter only 1,2,3 or 4");
            goto startloop;
    }

}

void reg(){
    int op;
regloop:
    printf("\nOptions :\n\t[1]Register for dose 1\n\t[2]Register for dose 2\n\t[3]Register for booster dose");
    scanf("%d",&op);
    switch (op){
        case 1:
            regdose1();
            break;
        case 2:
            regdose2();
            break;
        case 3:
            regdoseb();
            break;
        default:
            printf("\nEnter only 1,2 or 3");
            goto regloop;
    }
}

void check(){
    int op;
checkloop:
    printf("\nOptions :\n\t[1]Check for dose 1 completion\n\t[2]Check for dose 2 completion\n\t[3]Check for booster dose completion");
    scanf("%d",&op);
    switch (op){
        case 1:
            checkdose1f();
            break;
        case 2:
            checkdose2f();
            break;
        case 3:
            checkdosebf();
            break;
        default:
            printf("\nEnter only 1,2 or 3");
            goto checkloop;
    }
}
void count(){
    int op;
countloop:
    printf("\nOptions :\n\t[1]Count of dose 1 completion\n\t[2]Count of dose 2 completion\n\t[3]Count of booster dose completion\n\t[4]Count of Teenages/Adults/Senior citizens\n\t[5]Count of Female/Male/Other gender");
    scanf("%d",&op);
    switch (op){
        case 1:
            ccdose1();
            break;
        case 2:
            ccdose2();
            break;
        case 3:
            ccdoseb();
            break;
        case 4:
            ctas();
            break;
        case 5:
            cfmo();
            break;
        default:
            printf("\nEnter only 1,2,3,4 or 5");
            goto countloop;
    }
}
void exp(){
//    export as text file
    printf("exp");
}

void regdose1(){
    int phonenum;
    printf("\nEnter Phone number : ");
    scanf("%d",&phonenum);
    if(checkdose1(phonenum)==1){
        getdetails(in); //how to get the array end number
    }else{
        printf("\nPhone number already linked with another registered patient");
    }
}

void regdose2(){
    checkdose2()
}

void regdoseb(){
    checkdoseb();
}

int checkdose1(int phonenum){
    for(int i;i<1000;i++){
        if(information1[i].phonenum == phonenum){
            return 1;
        }else return 0;
    }
}

int checkdose2(int phonenum){
    for(int i;i<1000;i++){
        if(information2[i].phonenum == phonenum){
            return 1;
        }else return 0;
    }
}
int checkdoseb(int phonenum){
    for(int i;i<1000;i++){
        if(informationb[i].phonenum == phonenum){
            return 1;
        }else return 0;
    }
}

void getdetails(char *name,*address,*gender, int *age,*phonenum,*aadharnum){
    
}
//Structures
struct dose1{
    char name[100],address[500],gender[100];
    int age,phonenum,aadharnum;
}information1[1000];
struct dose2{
    char name[100],address[500];
    int age,phonenum,aadharnum;
}information2[1000];
struct boosterdose{
    char name[100],address[500];
    int age,phonenum,aadharnum;
}informationb[1000];


void main() {
    printf("Welcome!!!");
    start();
}
