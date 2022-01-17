#include <stdio.h>
#include <string.h>

//functions
void start(){
    int op;
startloop:
    printf("\nOptions :\n\t[1]Registeration\n\t[2]Check\n\t[3]Count\nEnter any option number :");
    scanf("%d",&op);
    if (op==1) reg();
    else if (op==2) check();
    else if (op==3) count();
    else {printf("\nEnter only 1,2 or 3");
        goto startloop;}
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
    printf("\nOptions :\n\t[1]Count of dose 1 completion\n\t[2]Count of dose 2 completion\n\t[3]Count of booster dose completion\n\t[4]Count of Female/Male/Other gender");
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
//        case 4:
//            cfmo();
//            break;
        default:
            printf("\nEnter only 1,2,3 or 4");
            goto countloop;
    }
}


int regdose1(){
    inputDetails();
    fileWriter("dose1");
    return 0;
}
int regdose2(){
    inputDetails();
    fileWriter("dose2");
    return 0;
}
int regdoseb(){
    inputDetails();
    fileWriter("doseb");
}
int checkdose1(int phonenum){
}
int checkdose2(int phonenum){
}
int checkdoseb(int phonenum){

}

int ccdose1(){
    return fileCounter("dose1");
}
int ccdose2(){
    fileCounter("dose2");
}
int ccdoseb(){
    fileCounter("doseb");
}



//File Functions
int fileCounter(char dosen[100]){
    FILE * fptr;
    char fname[200]="//Users//neshaa.laksh//Desktop//College//Codes//C//cproject//cproject//cproject//";
    strcat(fname,dosen);
    strcat(fname,".txt");
    int count;
    fptr=fopen(fname,"r");
    for ( c = getc(fptr); c != EOF; c = getc(fptr)){
        if (c == '\n'){
            count = count + 1;}
    }
    fclose(fptr);
    return count;
}

void fileWriter(char dosen[100]){
    FILE * fptr;
  char fname[200]="//Users//neshaa.laksh//Desktop//College//Codes//C//cproject//cproject//cproject//";
    strcat(fname,dosen);
    strcat(fname,".txt");
    fptr=fopen(fname,"a");
    fprintf(fptr,"%s",information.all);
    fclose(fptr);
}
void inputDetails(){
    printf("\nEnter your name : ");
    scanf("%s",&information.name);
    printf("\nEnter your Phone number : ");
    scanf("%s",&information.phonenum);
    printf("\nGender\n Options\n\t[F]Female\n\t[M]Male\n\t[O]Other gender\nEnter : ");
    scanf("%s",&information.gender);
    printf("\nEnter your Age : ");
    scanf("%s",&information.age);
    printf("\nEnter your Aadhar number : ");
    scanf("%s",&information.aadharnum);
    strcat(information.all,"\n");
    strcat(information.all,information.name);
    strcat(information.all,"-");
    strcat(information.all,information.age);
    strcat(information.all,"-");
    strcat(information.all,information.gender);
    strcat(information.all,"-");
    strcat(information.all,information.aadharnum);
    strcat(information.all,"-");
    strcat(information.all,information.phonenum);
}
//Structures
struct dose{
    char name[100],gender[100],all[1000],age[20],phonenum[20],aadharnum[20];
}information;

void main() {
    printf("Welcome!!!");
    start();
    
}
