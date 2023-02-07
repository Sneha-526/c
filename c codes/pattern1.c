#include<stdio.h>
void main()
{
    int i,j;
    for(i=0;i<=4;i++){
        for(j=0;j<=8;j++){
            if((i==0||i==4) && (j==0||j==4||j==8))
                printf("*\t");
            else if((i==1||i==3) &&(j==0||j==1||j==3||j==4||j==5||j==7||j==8))
                printf("*\t");
            else if(i==2 &&(j==0||j==2||j==4||j==6||j==8))
                printf("*\t");
            else
                printf("\t");
        }
        printf("\n");
    }
}