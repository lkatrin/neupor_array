/*Задание 1. Дан массив целых чисел A и целое число X. Найти индекс первого вхождения числа X в массив A.
В случае отсутствия - отпечатать -1*/

#include <stdio.h>
int main()
{
    int N,x,result=0;
    scanf("%d",&N);       //ввод длины массива
    
    int A[N];
    scanf("%d",&x);       //ввод х
    
    for(int i=0; i<N; i++)
    scanf("%d",&A[i]);    //ввод элементов массива
    
    for(int i=0; i<N; i++)
    {
       if(A[i] == x)
       {
       printf("%d ",i);
       result=1;
       }
    }
    if(result==0)
    printf("-1");
}
