#include <stdlib.h>
#include <stdio.h>
void main()
{
  char mkd,mkdir;
  printf("请键入名字");
  scanf("%s",mkd);
  if(access(mkd,0))
    {
    sprintf(mkd,"mkdir %s",mkdir);
    system(mkdir);
    printf("%s 创建成功")
    else
      {
      prntf("目录以存在");
      }

    }
}
