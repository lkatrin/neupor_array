/*Задание 2. Дан массив A ненулевых целых чисел размера 10.
Вывести значение первого из тех его элементов AK, которые удовлетворяют неравенству AK < A10.
Если таких элементов нет, то вывести 0.*/

#include <stdio.h>
int main()
{
    int result=0;
    int A[10];   
    
    for(int i=0; i<10; i++)
    scanf("%d",&A[i]);
    
    for(int i=0; i<10; i++)
    {
       if(A[i] < A[9])
       {
       printf("%d",A[i]);
       result = 1;
       break;
       }
    }
    if(result==0)
    printf("0");
}
