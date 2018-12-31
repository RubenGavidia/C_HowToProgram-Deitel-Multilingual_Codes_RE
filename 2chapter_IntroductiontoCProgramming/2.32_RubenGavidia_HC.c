/*3.2 Write four different C statements that each add 1 to integer variable x.
x = x + 1;
x += 1;
x++;
++x;*/
#include<stdio.h>
int main(){
 int x;
  printf("enter x:");
  scanf("%d",&x);
  x=x+1;
  printf("x=x+1:  %d\n",x);
  x+=1;
  printf("x+=1:   %d\n",x);
  x++;
  printf("x++:    %d\n",x);
  ++x;
  printf("++x:    %d\n",x);
 return(0);
}
