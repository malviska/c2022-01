#include<stdio.h>
#include<math.h>
int main ()
{
  int point, x, y;
  scanf("%d", &point);
  if(point % 2 == 0 && point/2%2 == 0){
    x = point/2;
    y = 0;
  }else if(point % 2 == 0 && point/2%2 == 1){
    x = -1*point/2 -1;
    y = 0;
  }
  else{
    x = (point/-2 -1) %2;
    y = pow(-1,point/2)*(point/2 +1);
  }
  printf("%d %d\n", x, y);
  return 0;
}