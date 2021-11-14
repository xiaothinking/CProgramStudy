#include <stdio.h>

union un_t
{
	int  a;
	char b;

}un;
 
int check()
{
  un.a=1;
  return un.b;
}

typedef union
{
	unsigned int word;
	struct
	{
		unsigned int a:1;
		unsigned int b:1;
		unsigned int c:1;
		unsigned int d:1;

        unsigned int e:1;
		unsigned int f:1;
		unsigned int g:1;
		unsigned int h:1;
	}bit;
}UNION_FALG;

typedef struct
{
   UNION_FALG error; 
   unsigned char i;
   unsigned int  j;
}STR;

STR str;

/*int main()
{
	int ret;
	ret = check();
	if(ret==1)
	{
		printf("小端模式\n");
	}
	else
	{
        printf("大端模式\n");
	}
  
}*/

int main()
{
   str.error.word=0;

   str.error.bit.a=1;
   str.error.bit.b=0;
   str.error.bit.c=1;
   str.error.bit.d=0;

   str.error.bit.e=0;
   str.error.bit.f=1;
   str.error.bit.g=0;
   str.error.bit.h=1;

   printf("str.error.word=%x\n",str.error.word);
}