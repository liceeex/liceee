#include <stdio.h>
#include <stdlib.h> 

    main(){
    int a,b;
    scanf("%d,%d",&a,&b);
    int *pointer_1=&a;
    int *pointer_2=&b;
	int *p_1=&*pointer_1;
	int *p_2=&*pointer_2;
    printf("%d,%d\n",a,b);
    printf("%d,%d\n",*pointer_1, *pointer_2);
    printf("%d,%d\n",*p_1, *p_2);
    remate
 }
