#include <stdio.h>
int main()
{
    int Maths, Physics  ,Chemistry ;
    float percentage;
 
printf(" Enter value of marks of Maths \n ");
         scanf("%d", &Maths);
printf(" Enter value of marks of Physics\n");
    scanf("%d", &Physics);
  printf(" Enter value of marks of Chemistry\n ");
  scanf("%d", &Chemistry);

  percentage = (Maths + Physics + Chemistry)/3;
    if((percentage < 40) || Maths<33 || Physics<33 || Chemistry<33)
    {
        printf(" Your  percentage is %f and you are failed \n",percentage  );
    }
    else
    {

        printf(" Your total percentage is %f and you are Passed \n",percentage  );
    }
    return 0;
}