#include<stdio.h>

int main()

{
//initializing 5 by 12 matrix where row is years and collumn is Months

float rainFall [5] [12] = {{25.5 , 26.2, 26    , 30     , 12, 39    , 15    , 34    , 17,   45  ,22, 25},   // rainfall each month
                                              {35.2, 39.2, 26.2, 36.12, 25, 26.1, 26.4, 15.2, 9, 21, 25, 26},
                                              {22.3, 32.1, 10, 15.3, 12.5, 6, 12, 26, 23, 12, 23, 26},
                                              {35.2, 39.2, 26.2, 36.12,6, 12, 26, 23, 12,17,   45  ,22 },
                                              {35.2, 39.2, 26.2, 36.12, 25,26.4, 15.2, 9, 21, 25, 26, 29}};

 //initializing 5 years
int year[5] = {2017, 2018 , 2019, 2020, 2021};

float yearlyRainfall[5] ; //will store total rainfall in each year
float totalRainfall, averageRainfall,monthTotal,monthAverage;
int i,t;

printf("Year     Yearly Avrage  (Centimeters)\n");
for (t=0 ; t< 5 ; t++)      //For loop for row (year)
{
    printf("\n%d",year[t]);

    for(i=0 ; i<12 ; i++)       //For loop for collume (months)
    {
        /* we will need both totals 1>total rainfall in a year
                                                             2>tatal rainfall in all 5 years */

        yearlyRainfall[t] += rainFall[t][i];        // calculating rainfall in year : t
        totalRainfall+=yearlyRainfall[i];       //calculating total rainfall in 5 years
    }
      printf("\t %.2f",yearlyRainfall[t]);       //printing out total rainfall in the specific year
}

averageRainfall=totalRainfall/12; //calculating avrage rainfall throughout 5 years
printf("\n\nAvrage rainfall of all 5 years is :%.2f",averageRainfall);

printf("\n\nJanuary  Fabruary  March  April  May  June  July  August  September  October  November  december\n");

for (i=0 ; i<12 ; i++)      // for loop for raw : first row - months, second row- average rain
{
    for(t=0 ; t<5 ; t++)
        {
                monthTotal += rainFall[t][i] ;
        }
          monthAverage=monthTotal/5;
          printf("%f ",monthAverage);        //printing average monthly rain in month i
}

return 0;
}


