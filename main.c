#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float x,y,p;
    printf("enter x:?");
    scanf("%f",&x);
    printf("enter y:?");
    scanf("%f",&y);
    p=pow(x,y);
    printf("%0.2f",p);

    return 0;
}
