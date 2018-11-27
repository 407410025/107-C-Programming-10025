#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 100

struct Date
{
    int year;
    int month;
    int day;
} ;

struct Lotto
{
    Date date;
    int num[6];
};

int duplicate(int N[],int r)
{
    for(int i=0;i<r;i++)
    {
        if(N[i]==N[r])
            return 1;
    }
    return 0;
}

int main()
{
    Lotto *plottos[MAX];

    int n;
    int temp;
    Lotto lotto;
    Lotto lottos[MAX];
    srand(time(NULL));

    printf("Enter N:");
    scanf("%d",&n);
    printf("\n");

    for(int i=0;i<n;i++)
    {
        plottos[i] = (Lotto*)malloc(sizeof(struct Lotto));
        plottos[i]->date.year = rand()%11+2010;
        plottos[i]->date.month = rand()%12+1;
        plottos[i]->date.day = rand()%31+1;
        printf("%d/%02d/%02d   ",plottos[i]->date.year,plottos[i]->date.month,plottos[i]->date.day);

        for(int j=0;j<6;j++)
        {
            do
            {
                temp = rand()%49+1;
                lottos[i].num[j] = temp;
            }
            while(duplicate(lottos[i].num,j));

            printf("%02d ",lottos[i].num[j]);
        }
        printf("\n");
    }
}
