#include <stdio.h>

int main(){
int a[100];

for(int i = 0; i<100; i++) 
    a[i]=i;
int loop;

int *pa = &a[-10];
int *pb = pa + 23;

for(int i = 20; i <= 40; i++)
    a[i]=pb[i];

for(loop = 0; loop < 100; loop++)
printf("%d \n", a[loop]);


}