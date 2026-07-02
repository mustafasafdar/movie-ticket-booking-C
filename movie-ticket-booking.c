#include <stdio.h>
void myIdentity()
{
    printf("Muhammad Mustafa Safdar\n");
    printf("Roll No. 2025-CPE-36\n");
    printf("========================\n");
}
void displaySeats(int seats[5][5])
{
    int i, j;
    printf("MOVIE SEATS:\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(seats[i][j]==0)
            {
                printf("O ");
            }
            else
            {
                printf("X ");
            }
        }
        printf("\n");
    }
}
void bookSeat(int seats[5][5], int row, int col)
{
    int *ptr;
    ptr= &seats[row][col];
    if(*ptr==1)
    {
        printf("\nSeat already booked!\n");
    }
    else
    {
        *ptr=1;
        printf("\nBooking successful!\n");
        printf("Your seat address:\n\n");
    }
}
int main()
{
    myIdentity();
    int seats[5][5] = {0};
    int row, col;
    printf("\n'O' means seat is Avaliable,\n'X'");
    printf("'X' means seat is Unavaliable.\n\n");
    displaySeats(seats);
    printf("\nFor booking, select your seat.\n");
    printf("Enter row number (1-5): ");
    scanf("%d", &row);
    printf("Enter column number (1-5): ");
    scanf("%d", &col);
    row--;
    col--;
    if(row<0 || row>=5 || col<0 || col>= 5)
    {
        printf("\nInvalid seat address. Try again\n");
    }
    else
    {
        bookSeat(seats, row, col);
        displaySeats(seats);
    }

    return 0;
}
