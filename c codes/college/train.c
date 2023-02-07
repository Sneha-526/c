#include<stdio.h>
#include<string.h>
void main()
{
    struct TIME
    {
        int hr, min;
    };
    struct TRAIN_INFO
    {
        int tr_no;
        char tr_name[50], start_st[50], end_st[50];
        struct TIME dept, arrt;
    };

    struct TRAIN_INFO train[50];
    int ch, i, a=0, j, hrs, mins, c=0;
    char train_name[50], train_name1[50];
    for(i=0;i<50;i++)
    {

        printf("\t\t*********TRAIN EDIT MENU************\t\n");
        printf("(1) for Adding train details\n");
        printf("(2) for exit\n");
        scanf("%d",&ch);
        if (ch==1)
        {
            printf("Enter the details of the train:\n");
            printf("Train No.: ");
            scanf("%d",&train[i].tr_no);
            printf("Train Name: ");
            scanf("%s",train[i].tr_name);
            printf("Departure Time:\n");
            printf("Hours: ");
            scanf("%d",&train[i].dept.hr);
            printf("Minutes: ");
            scanf("%d",&train[i].dept.min);
            printf("Arrival Time:\n");
            printf("Hours: ");
            scanf("%d",&train[i].arrt.hr);
            printf("Minutes: ");
            scanf("%d",&train[i].arrt.min);
            printf("Start Sation: ");
            scanf("%s",train[i].start_st);
            printf("End Station: ");
            scanf("%s",train[i].end_st);
        } 
        a++;   
        if(ch!=1)
            break;
    }
    if(i>49)
        printf("No more details can be entered\n");
    for(i=0;i<50;i++)
    {
        printf("\t\t************** MENU *************\n");
        printf("(1) for List all the trains that depart from a particular station\n");
        printf("(2) for List all the trains that depart from a particular station at a particular time\n");
        printf("(3) for List all the trains that depart from a particular station within the next one hour of a given time \n");
        printf("(4) for List all the trains between a pair of start and end station\n");
        printf("(5) for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\t\t************ INPUT DETAILS **************\n");
                printf("Departure Station: ");
                scanf("%s",train_name);
                for(j=0;j<a;j++)
                {
                    if(strcmp(train[j].start_st,train_name)==0)
                    {
                        printf("%d\t%s\n",train[j].tr_no,train[j].tr_name);
                        c++;
                    }
                }
                if(c==0)
                    printf("No train found\n");
                break;
            case 2:
                printf("\t\t************ INPUT DETAILS **************\n");
                printf("Departure Station: ");
                scanf("%s",train_name);
                printf("Train Time:\n");
                printf("Hours: ");
                scanf("%d",&hrs);
                printf("Minutes: ");
                scanf("%d",&mins);
                for(j=0;j<a;j++)
                {
                    if(strcmp(train[j].start_st,train_name)==0 && (hrs==train[j].dept.hr)&&(mins==train[j].dept.min))
                    {
                        printf("%d\t%s\n",train[j].tr_no,train[j].tr_name);
                        c++;
                    }
                }
                if(c==0)
                    printf("No train found\n");
                break;
            case 3:
                printf("\t\t************ INPUT DETAILS **************\n");
                printf("Departure Station: ");
                scanf("%s",train_name);
                printf("Train Time:\n");
                printf("Hours: ");
                scanf("%d",&hrs);
                printf("Minutes: ");
                scanf("%d",&mins);
                for(j=0;j<a;j++)
                {
                    if(strcmp(train[j].start_st,train_name)==0 && ((hrs+1==train[j].dept.hr && mins==train[j].dept.min)
                    ||(hrs==train[j].dept.hr && train[j].dept.min<=mins)))
                    {
                        printf("%d\t%s\n",train[j].tr_no,train[j].tr_name);
                        c++;
                    }
                }
                if(c==0)
                    printf("No train found\n");
                break;
            case 4:
                printf("\t\t************ INPUT DETAILS **************\n");
                printf("Departure Station: ");
                scanf("%s",train_name);
                printf("Arrival Station: ");
                scanf("%s",train_name1);
                for(j=0;j<a;j++)
                {
                    if(strcmp(train[j].start_st,train_name)==0 && strcmp(train[j].end_st,train_name1))
                    {
                        printf("%d\t%s\n",train[j].tr_no,train[j].tr_name);
                        c++;
                    }
                }
                if(c==0)
                    printf("No train found\n");
                break;
            case 5:
                break;
            default: 
                printf("INVALID CHOICE");
        }
        if(ch>=5)
            break;
    }

}