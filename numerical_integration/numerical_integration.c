#include<stdio.h>
#include<common_include.h>
#include<math.h>

#define TRAPEZOIDAL_RULE 1
#define SIMPSON_RULE 2
#define GAUSS_QUADRATURE 3


int main()
{
  int  number_of_interval = 0;
  int method_of_integration = 0;
  float area = 0.0;
  int i = 0;

  printf("\numercial Integration\r\n\n");

  printf("  1 for Trapezoidal Rule\n");
 
  printf("  2 for Simpson's Rule\n");

  printf("  3 for Gauss Quadrature\n\n");

  printf("Press 1 / 2 / 3   ");

  scanf("%d", &method_of_integration);

  if (method_of_integration < 1 || method_of_integration > 3)
  {
     printf("enter  valid integration type\n");
     return 0;
  }

  switch(method_of_integration)
  {
    case TRAPEZOIDAL_RULE:
         printf("\n number of Intervals  ");

         scanf("%d", &number_of_interval);
         area = trapezodial_rule(number_of_interval);       
         printf("\ntrapezodial Rule for interval[ %d ] is %.10f\n", number_of_interval, area);
    break;

    case SIMPSON_RULE:
         printf("\nEnter the Number of Intervals ");

         scanf("%d", &number_of_interval);

         if (numner_of_interval % 2 != 0)
         {
            printf("enter the even number of intervals\r\n");
            return 0;
         }

         area = simpson_rule(number_of_interval);
         printf("\nSimpson Rule for interval[ %d ] is %.10f\n", number_of_interval, area);
    break;

    case GAUSS_QUADRATURE:
         area = gauss_quadrature();
         printf("\naussQuadrature for the interval[ %d ] is %.10f\n", 2, area);
    break;

    default:
    
    break;
  }

  printf("\n***\n");

  for (i = 1; i <= 6; i++)
  {
      if (i == 2 || i == 5)
      {
         continue;
      }

      number_of_interval = pow(2,i);

      printf("\n**");
      printf("\nArea Sin(x)  %d \r\n\n", number_of_interval);
      printf("trapezodial    %.10f\r\n",trapezodial_rule(number_of_interval));
      printf("simpsonRule        %.10f\r\n",simpson_rule(number_of_interval));
      printf("gaussquadrature    %.10f\r\n", gauss_quadrature()); 
      printf("***\n");
      printf("\n");     
  }

  return 0;
}

