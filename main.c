#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,Total,Average;

    printf("Enter Mathematics marks(out of 100):",m1);
    scanf("%f",&m1);

    printf("Enter Science marks (out of 100):",m2);
    scanf("%f",&m2);

    printf("Enter English marks (out of 100):",m3);
    scanf("%f",&m3);

    Total = m1+m2+m3;
    Average = Total/3;
    printf("Total   :%.2f\n",Total);
    printf("Average : %.2f\n",Average);

    if (100 >= Average >=80) {
        printf(" Grade: A\n");
    } else
    if (79 >= Average >= 70){
        printf(" Grade: B\n");
    } else
     if (69 >= Average >=60){
        printf(" Grade: c\n");
    } else
    if (59 >= Average >=50){
        printf(" Grade: D\n");
    } else printf("Grade:F\n");

    if (m1,m2,m3 >= 40) {
        printf("Result   : Pass\n");
    }else printf ("Result:fail\n");



    return 0;
}
