#include <stdio.h>
 
int main()
{
  int i;
  char h[3] = {'0', '0',0};
 
  for(i = 0 ; i < 24 ; i++)
  {
    if((i % 10) < 6)
    {
      snprintf(h, 3, "%02d", i);
      printf("%s:%c%c\n", h, h[1], h[0]);
    }
  }
 
  return 0;
}

//sprintf(str, "%s", #var) ???
/*
# include <stdio.h>
# define getName(var, str) sprintf(str, "%s", #var) 

int main()
{
  int myVar;
  char str[20];
  getName(myVar, str);
  printf("%s", str);
  return 0;
} 
*/