#include <stdio.h>
int main()
{  
    int array[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    float sum;
    int i=0;
    int j=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("\t%d",array[i][j]);
        printf("\n");
    }
  
    int*p=&array[0][0];&array[1][1];&array[2][2];
    
    
    printf("the elemnts to be added are %d,%d,%d",array[0][0],array[1][1],array[2][2]);
    sum=array[0][0]+array[1][1]+array[2][2];
    printf("the sum of the diagonals is %f\n",sum);
    return 0;
}

