#include <stdio.h>
#include <cs50.h>

int main(void){

    int height=get_int("enter the hight : ");

    for(int i=0; i<height; i++)
    {

        for(int j=height-i-1; j>0; j--)
        {
            printf(" ");
        }

        for(int x=0; x<i+1; x++)
        {
            printf("#");
        }

        printf("  ");

        for(int y=0; y<i+1; y++)
        {
            printf("#");
        }

        printf("\n");

    }

}
