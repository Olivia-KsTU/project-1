#include <stdio.h>

int main()
{// Hi this program here was built to help  calculate student marks in exams;//
    float m1,m2,m3,total,avg;
    printf("please enter the score for Maths:");
    scanf("%f",&m1);
    printf("Please enter the score for Science:"); 
    scanf("%f", &m2);
    printf("Please enter the score for English:");
    scanf("%f", &m3);
    total = m1 + m2 + m3;
    avg = total/3.0;
    printf("\ntotal =%.2f\n",total);
    printf("average =%.2f",avg);
    return 0;
}
