#include <stdio.h>
#include <math.h>

int main()
{
	
    float u[3];
    float v[3];
    float p;
    int i;

    for(i=0; i<3; i++){
    printf("u[%d]= ",i);
    scanf("%f",&u[i]);
    }
     for(i=0; i<3; i++){
        printf("v[%d]=",i);
    scanf("%f",&v[i]);
     }
    p=0;
    
   for(i+0;i<3;i++){
          p = p + u[i]*v[i];
   }
    printf("%0.2f\n",p);
    return 0;
}

