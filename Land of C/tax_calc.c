/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
("Note that there is no tax below 2.5L. Take income amount as an input from the user.")
*/

//solution
#include <stdio.h>

int main (){
      
      int income ;
      float tax =0;

      printf("enter the your income amount \n");
      scanf("%d",&income);

      //progessive Tax calculation based on income slab
      if (income<=250000){
        printf("there no tax for your income \n");
      }

      else if (income>250000 && income<=500000){
        tax= 0.05*(income - 250000);
      }
      else if ( income>500000  && income<=1000000 ){
        tax = 0.05*(500000 - 250000) + 0.2*(income - 500000);
      }
      else{
        tax = 0.05*(500000 - 250000)+ 0.2*(1000000 - 500000)+ 0.3*(income - 1000000);
      }


      printf(" the total tax need to pay is %f \n", tax);
      
  
    return 0;
}