#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   int sz;
   printf("Enter the size of array::");
   scanf("%d",&sz);
   int randArray[sz],i;
   for(i=0;i<sz;i++)
   {
    //    srand(time(0));
        if(i < 100)
        {
            randArray[i]=rand()%10;
            if(randArray[i] == 0)
                randArray[i] = 43;
        }
        else if(i < 300)
        {
            randArray[i]=rand()%100;
            if(randArray[i] == 0)
                randArray[i] = 87;
        }
        else if(i < 600)
        {
            randArray[i]=rand()%10;
            if(randArray[i] == 0)
                randArray[i] = 5;
        }
        else if(i < 900)
        {
            randArray[i]=rand()%1000;
            if(randArray[i] == 0)
                randArray[i] = 13;
        }
        else
        {
            randArray[i]=rand()%100;
            if(randArray[i] == 0)
                randArray[i] = 77;
        }
   }   //Generate number between 0 to 99

   printf("\nElements of the array::");
   for(i=0;i<sz;i++)
   {
     printf("%d ",randArray[i]);
   }
   return 0;
}