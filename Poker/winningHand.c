#include<stdio.h>
#include<stdlib.h>

const char D[9]={'D','i','a','m','o','n','d','s','\0'};
const char H[7]="Hearts";
const char S[]="Spades";
const char C[6]={'C','l','u','b','s','\0'};



int main( )
{
   /*Get hand*/
   //1=A,2=2...11=J, 12=Q, 13=K
   //D= Diamonds, S= Spades, C= Clubs, H= Hearts
   int handN[5] ={1,10,11,12,13};
   char handS[5] ={'D','D','D','D','D'};
   
   //call a function that returns the result + High Kick
   /*
   Results:
   1- High Card
   2- 1 pair
   3- 2 pairs
   4- 3 of a kind
   5- Straight
   6- Flush
   7- Full House
   8- 4 of a kind
   9- Straight Flush
   10- Royal Flush
   */

   //Case 10
   //Sort handN function (sorting handS too)

   //checking function:
   if ((handS[0]=handS[1])&&(handS[0]==handS[2])&&(handS[0]==handS[3])&&(handS[0]==handS[4]))
	if((handN[0]==1)&&(handN[1]==10)&&(handN[2]==11)&&(handN[3]==12)&&(handN[4]==13))
	   switch (handS[0])
           {
	   case 'D':
           printf("Congratulations! You got a Royal Flush on %s ", D);
           break;
           case 'S':
           printf("Congratulations! You got a Royal Flush on %s ", S);
           break;
 	   case 'H':
           printf("Congratulations! You got a Royal Flush on %s ", H);
           break;
	   case 'C':
           printf("Congratulations! You got a Royal Flush on %s ", C);
           break;
  	   }
return 0;









}


