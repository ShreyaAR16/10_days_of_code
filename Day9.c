#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int n, j;
    int i=0,RDS=0,LDS=0, firstarray, secondarray;

 scanf("%d",&n);
    int a[n][n];

 for(int firstarray = 0; firstarray < n; firstarray++)
 {
       for(int secondarray = 0; secondarray < n; secondarray++)
    {

          scanf("%d",&a[firstarray][secondarray]);
       }
    }

  while(i<n)
  {
    RDS = RDS +a[i][i];
    i++;
  }

 j=n-1,i=0;

  while(i<n)
  {
    LDS = LDS + a[i][j];
    i++;
    j--;
  }

 printf("%d",abs(RDS-LDS));
    return 0;
}
