/*Author : Mohit patel
This proggrame will randomly selct the number between 0 to 20 and you would have to guess the number in 5 tries*/

#include<stdio.h>
#include<stdlib.h> //for generating random number
#include<time.h>    //will provide seed for the selection of random number using the current time

int main()

{
    int g,a;
    time_t t;                                           //time variable
    srand((unsigned) time(&t)); //it will select the random number
    int rnum=rand() %21;
   printf("In this game a number between 0 to 20 is selected and you have to guess the number right in 5 tries\n");

for(a=5;a>0;a--)
    {
        if(rnum==g)    //it will break for loop if number is guessed right
        break;
        printf("you have %d guesses left: \n",a);
        scanf("%d",&g);

            while(g<0 | g>20)  //It will forcefully make user to enter a number between 0 to 20
                {
                    printf("please enter a number between 0 to 20\n");
                    scanf("%d",&g);
                }
//-----------------------------------------
                if(rnum==g)
                    {
                        printf("you have guessed the number right");
                        break;
                    }
                else
                        if(rnum>g)
                                    printf("the number is higher than this\n");
                        else
                                    printf("the number is lesser than this\n");

        }
    return 0;
}



