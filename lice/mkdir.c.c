#include<io.h>
#include <stdlib.h>
#include <stdio.h>
void main()
{
  char filename[100],filename2[105];
  printf("请输入目录");
  scanf("%s",filename);    
  if(access(filename,0))//判断目录是否存在
    {
      sprintf(filename2,"md   %s",filename);
      system(filename2);
      printf("创建成功！");
    }
  else
    {
      printf("目录已经存在！");
    }
  return ;
}
