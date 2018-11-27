#include<stdio.h>
#include<stdlib.h>


struct Pos
{
    int row;
    int col;
};


void prArr(int m[][8])
{
    for(int i=0;i<8;i++)
    {
    	printf("|-----|-----|-----|-----|-----|-----|-----|-----|\n");
        for(int j=0;j<8;j++)
        {
            printf("|  %2d ",m[i][j]);
        }
        printf("|");
        printf("\n");
    }
    printf("|-----|-----|-----|-----|-----|-----|-----|-----|");
}


Pos findNextBestPos(int m[][8],int access[][8],int row,int col)
{
    int h[8]={2,1,-1,-2,-2,-1,1,2};
    int v[8]={-1,-2,-2,-1,1,2,2,1};
    Pos pos;
    int nextRow,nextCol;
    int min = 9;
    int minRow = -1 , minCol = -1;
    access[row][col]=0;

    for(int i=0;i<8;i++)
    {
        nextRow = row + v[i];
        nextCol = col + h[i];

        if(nextRow>=0 && nextRow<=7 && nextCol>=0 && nextCol<=7 && access[nextRow][nextCol]>0)
        {
            access[nextRow][nextCol]--;
            if(access[nextRow][nextCol] <= min)
            {
                min = access[nextRow][nextCol];
                minRow = nextRow;
                minCol = nextCol;
            }
        }
    }
    pos.row = minRow;
    pos.col = minCol;
    return pos;
}


int main()
{
    while(1)
    {
        int choice;
        int m[8][8]={0};
        int access[ 8 ][ 8 ] =
        { 2, 3, 4, 4, 4, 4, 3, 2,
        3, 4, 6, 6, 6, 6, 4, 3,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        4, 6, 8, 8, 8, 8, 6, 4,
        3, 4, 6, 6, 6, 6, 4, 3,
        2, 3, 4, 4, 4, 4, 3, 2 };
        Pos pos;
        int moves = 1;
        int row;
        int col;

        printf("Menu\n");
        printf("1. Knight Tour by entering position\n");
        printf("2. Check 64 cases\n");
        printf("3. Exit\n");
        printf("=> choice: ");
        scanf("%d",&choice);

        if(choice==3)break;
        switch(choice)
        {
            case 1 :
                printf("Enter row and col for number 1 :");
                scanf("%d %d",&row,&col);
                m[row][col] = 1;
                printf("The board for this test is:\n");
                for(int i=2;i<=64;i++)
                {
                    pos = findNextBestPos(m,access,row,col);
                    if(pos.row==-1 && pos.col==-1)
                    {
                        break;
                    }
                    else
                    {
                        m[pos.row][pos.col]= i;
                        moves++;
                        row = pos.row;
                        col = pos.col;
                    }
                }
                prArr(m);
                printf("\nThe tour ended with %d moves.\n", moves);
                if(moves==64)
                    printf("This was a full tour!\n\n");
                break;

            case 2 :
                int m_all[8][8]={0};
                for(int initrow=0;initrow<8;initrow++)
                {
                    for(int initcol=0; initcol<8; initcol++)
                    {
                        moves=1;
                        int m[8][8]={0};
                        int access[ 8 ][ 8 ] =
                        { 2, 3, 4, 4, 4, 4, 3, 2,
                            3, 4, 6, 6, 6, 6, 4, 3,
                            4, 6, 8, 8, 8, 8, 6, 4,
                            4, 6, 8, 8, 8, 8, 6, 4,
                            4, 6, 8, 8, 8, 8, 6, 4,
                            4, 6, 8, 8, 8, 8, 6, 4,
                            3, 4, 6, 6, 6, 6, 4, 3,
                            2, 3, 4, 4, 4, 4, 3, 2 
                        };
                        m[initrow][initcol] = 1;
                        row=initrow;
                        col=initcol;
                        for(int i=2;i<=64;i++)
                        {
                            pos = findNextBestPos(m,access,row,col);
                            if(pos.row==-1 && pos.col==-1)
                            {
                               break;
                            }
                            else
                            {
                               m[pos.row][pos.col]= i;
                               moves++;
                               row = pos.row;
                               col = pos.col;
                            }

                        }
                        m_all[initrow][initcol]= moves;
                   }
                }
                prArr(m_all);
                printf("\n\n");
                break;
	    }
    }
}
