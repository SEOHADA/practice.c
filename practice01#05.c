#include <stdio.h>
int main(){
    int a;
    printf("나이 : ");
    scanf("%d",&a);

    printf("20살 이상인가? %d\n",20<=a);
    printf("30살 이하인가? %d\n", 30>=a);
    printf("20살 이상이면서 30살 이하인가? %d", 20<=a&&30>=a);
}