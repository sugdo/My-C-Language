

// #include <stdio.h>

/*
typedef struct point
{
	int xpos;
	int ypos;


}Point;

void showposition(Point pos)
{
	printf("[%d,%d]\n", pos.xpos, pos.ypos);
}

Point getcurrentposition(void)
{
	Point cen;
	printf("input:");
	scanf_s("%d %d", &cen.xpos, &cen.ypos);
	return cen;



}



int main()
{
	Point curpos = getcurrentposition();
	showposition(curpos);


}*/
/*
#include <stdio.h>
#pragma warning(disable:4996);
typedef struct person
{
	char name[20];
	char phonenum[20];
	int age;
}Person;

void showpersoninfo(Person man)
{
	printf("name:%s\n", man.name);
	printf("phone:%s\n", man.phonenum);
	printf("age:%d\n", man.age);


}

Person readpersoninfo (void)
{
	Person man;
	printf("name?");
	scanf("%s", man.name);
	printf("phone?");
	scanf("%s", man.phonenum);
	printf("age?"); 
	scanf("%d", &man.age);
	return man;

}

int main (void)
{
	Person man = readpersoninfo();
	showpersoninfo(man);
}
*/
/*
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;

}Point;

void orgsymtrans(Point * ptr) //������Ī
{
	ptr->xpos = (ptr->xpos)*-1;
	ptr->ypos = (ptr->ypos)*-1;
}

void showposition(Point pos)
{
	printf("[%d,%d]\n", pos.xpos, pos.ypos);

}

int main(void)
{
	Point pos = { 7,-5 };
	orgsymtrans(&pos);
	showposition(pos);
	orgsymtrans(&pos);
	showposition(pos);

}
*/
/*
#include <stdio.h>
#pragma warning(disable:4996);


typedef struct point
{
	int xpos;
	int ypos;

}Point;

int main()
{
	Point pos1 = { 1,2 };
	Point pos2;
	pos2 = pos1;
    
	printf("ũ��: %d\n", sizeof(pos1));
	printf("[%d , %d]\n", pos1.xpos, pos1.ypos);
	printf("ũ�� : %d\n", sizeof(pos2));
	printf("[%d , %d]\n", pos2.xpos, pos2.ypos);
}
*/
/*
#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;

}Point;

Point addpoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos + pos2.xpos,pos1.ypos+pos2.ypos };
	return pos;

}

Point minpoint(Point pos1, Point pos2)
{
	Point pos = { pos1.xpos - pos2.xpos,pos1.ypos-pos2.ypos };
	return pos;

}

int main()
{
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	result = addpoint(pos1, pos2);
	printf("[%d , %d]\n", result.xpos, result.ypos);
	result = minpoint(pos1, pos2);
	printf("[%d , %d]\n", result.xpos, result.ypos);

}
*/

/*
#include <stdio.h>

#pragma warning(disable:4996)

typedef struct point
{
	int xpos;
	int ypos;

}Point;

void swappoint(Point * ptr1, Point * ptr2)
{
	Point temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	  
}


int main()
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	swappoint(&pos1, &pos2);
	printf("%d %d\n%d %d", pos1.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}
*/

/*
#include <stdio.h>

#pragma warning(disable:4996)

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct circle
{
	Point cen;
	double rad;
}Circle;

void showcircleinfo(Circle * cptr)
{
	printf("[%d,%d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("%g\n\n", cptr->rad);
}

int main()
{
	Circle c1 = { {1,2},3.5 };
	Circle c2 = { 2,4,3.9 };
	showcircleinfo(&c1);
	showcircleinfo(&c2);

}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

typedef struct point
{
	int xpos;
	int ypos;
}Point;

typedef struct rectangle
{
	Point pos[2];

}Rectangle;

void math1(Rectangle * ptr)
{
	int result,width, high;
	width=((ptr->pos[0].xpos) - (ptr->pos[1].xpos));
	if (width < 0)
		width = width * -1;

	high = ((ptr->pos[0].ypos) - (ptr->pos[1].ypos));
	if (high < 0)
		high = high * -1;
	result = width * high;
	printf("%d�� ���� �Դϴ�\n", result);
	
}


void math2(Rectangle info)
{
	printf("%d %d\n", info.pos[0].xpos, info.pos[0].ypos);
	printf("%d %d\n", info.pos[1].xpos, info.pos[1].ypos);
	printf("%d %d\n", info.pos[0].xpos, info.pos[1].ypos);
	printf("%d %d\n", info.pos[1].xpos, info.pos[0].ypos);

}


int main()
{
	Rectangle sin
	printf("input:");
	scanf("%d %d", &sin.pos[0].xpos, &sin.pos[0].ypos);
	scanf("%d %d", &sin.pos[1].xpos, &sin.pos[1].ypos);
	math1(&sin);
	*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

typedef struct sbox
{
	int mem1;
	int mem2;
	double mem3;

}Sbox;

typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;

}Ubox;

int main()
{
	Sbox sbx;
	Ubox ubx;
	printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);

	printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);




}
*/


/*
#include <stdio.h>
#pragma warning(disable:4996)

typedef enum syllable
{
	Do=1,Re=2,Mi=3,Fa=4,So=5,La=6,Ti=7

}Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("���� �Ͼ� ������"); return;
	case Re:
		puts("���� �ձ� ���ڵ�"); return; 
	case Mi:
			puts("�̴� �Ķ� �̳���"); return;
	case Fa:

		puts("�Ĵ� ���� �Ķ���"); return;
	case So:
		puts("���� ���� �ֹ��"); return;
	case La:
		puts("��� �������"); return;
	case Ti:
		puts("�ô� ���� �ó���"); return;
	}

	puts("�� �Բ� �θ��� ~ �������� �ֶ�õ� �� �� §~");

}
int main()
{
	Syllable tone;
	for (tone = Do; tone <= Ti; tone += 1)
		Sound(tone);

}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()

{
	FILE * fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	fclose(fp);


}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{

	int ch, i;
	FILE * fp = fopen("data.txt", "rt");
	if (fp == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;

	}
	for (i = 0; i < 3; i++)
	{
		ch = fgetc(fp);
		printf("%c\n", ch);
	}
	fclose(fp);
}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE * fp = fopen("simple.txt", "wt");
	if (fp == NULL)
	{
		fputs("���� ���� ����!",stdout);
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong\n", fp);
	fputs("Your name is Yoon\n", fp);
	return 0;
}
*/
/*
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char str[30];
	int ch;
	FILE * fp = fopen("simple.txt", "rt");
	if (fp == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	ch = fgetc(fp);
	printf("%c \n", ch);
	ch = fgetc(fp);
	printf("%c \n", ch);
	
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);




}
*/


/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des == NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);
   
	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");

	fclose(src);
	fclose(des);



}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	FILE * src = fopen("src.txt", "rt");
	FILE * des = fopen("des.txt", "wt");
	char str[20];

	if (src == NULL || des == NULL) {
		puts("���Ͽ��� ����");
		return -1;
	}

	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);
	
	if (feof(src) != 0)
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");
	
	fclose(src);
	*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	FILE * src = fopen("src.bin", "rb");
	FILE * des = fopen("dst.bin", "wb");
	char buf[20];
	int readcnt;
      
	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;

	}

	while (1)
	{
		readcnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readcnt < sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, readcnt, des);
				puts("���� ���� �Ϸ�");
				break;
			}
			else
				puts("���Ϻ��� ����");
			break;
		}

		fwrite((void*)buf, 1, sizeof(buf), des);

	}

	fclose(src);
	fclose(des);

}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	FILE * fp = fopen("mystory.txt", "wt");
	fputs("#�̸�:������\n",fp);
	fputs("#�ֹι�ȣ:900208-1012589\n",fp);
	fputs("#��ȭ��ȣ:010-1111-2222\n",fp);
	fclose(fp);


}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	FILE * fp = fopen("mystory.txt", "at");
	fputs("#��ܸԴ� ����:«��,������\n",fp);
	fputs("#���:�౸\n",fp);
	fclose(fp);
	
}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char str[100];
	FILE * fp = fopen("mystory.txt", "rt");
	while(fgets(str, sizeof(str), fp)!=NULL)
	{
		printf(str);
	}
	fclose(fp);
}

*/
/*
#include <stdio.h>
#pragma warning(disable:4996)
int main() {

	char name[10];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "wt"); 
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�̸� ���� ���� �� �Է�:");
		scanf("%s %c %d", name, &sex, &age);
		getchar();
		fprintf(fp, "%s %c %d", name, sex, age);


	}
	fclose(fp);

}
*/
/*
#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char name[20];
	char sex;
	int age;

	FILE * fp = fopen("friend.txt", "rt");
	int ret;

	while (1)
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret == EOF)
			break;
		printf("%s %c %d", name, sex, age);


	}
	fclose(fp);
}
*/

/*
#include <stdio.h>
#pragma warning(disable:4996)

typedef struct fren {
	char name[10];
	char sex;
	int age;

}Friend;

int main()
{
	FILE * fp;
	Friend myfren1;
	Friend myfren2;

	fp = fopen("friend.bin", "wb");
	printf("�̸�,����,���� �� �Է�:");
	scanf("%s %c %d", myfren1.name, &(myfren1.sex), &(myfren1.age));
	fwrite((void*)&myfren1,sizeof(myfren1), 1, fp);
	fclose(fp);


	fp = fopen("friend.bin", "rb");
	fread((void*)&myfren2, sizeof(myfren2), 1, fp);
	printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
	fclose(fp);

}
*/
/*
#include <stdio.h>

#pragma warning(disable:4996)

int main()
{
	FILE * fp = fopen("text.txt", "wt");
	fputs("123456789", fp);
	fclose(fp);

	fp = fopen("text.txt", "rt");

	fseek(fp, -2, SEEK_END);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_SET);
	putchar(fgetc(fp));

	fseek(fp, 2, SEEK_CUR);
	putchar(fgetc(fp));
	
	fclose(fp);

}
*/
/*
#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	long fpos;
	int i;

	FILE*fp = fopen("text.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp));
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}
	fclose(fp);

}

*/

/*
#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


long getfilesize(FILE * fp) {

	long fpos;
	long fsize;
	fpos = ftell(fp);

	fseek(fp, 0, SEEK_END);
	fsize = ftell(fp);
	fseek(fp, fpos, SEEK_SET);
	return fsize;
}



int main()
{
	char str[100];
	FILE * fp = fopen("ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��:%ld\n", getfilesize(fp)); 
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��:%ld\n", getfilesize(fp)); 
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��:%ld\n", getfilesize(fp));



}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * ptr1 = (int*)malloc(sizeof(int));
	int * ptr2 = (int *)malloc(sizeof(int) * 7);
	int i;

	*ptr1 = 20;
	for (i = 0; i < 7; i++)
		ptr2[i] = i + 1;

	printf("%d\n", *ptr1);
	for (i = 0; i < 7; i++)
		printf("%d ", ptr2[i]);
	free(ptr1);
	free(ptr2);
}

*/

/*
#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

char * readusername(void)
{
	char * name = (char*)malloc(sizeof(char) * 30);
	printf("What`s your name?");
	gets(name);
	return name;
}

int main()
{
	char * name1;
	char * name2;
	name1 = readusername();
	printf("name1:%s\n", name1);
	name2 = readusername();
	printf("name2:%s\n", name2);

	printf("again name1:%s\n", name1);
	printf("again name2:%s\n", name2);
	free(name1);
	free(name2);
	
}
*/



/*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable:4996)

int main()
{
	int maxlen, len, i;
	char * str;
	printf("���ڿ��� �ִ� ���� �Է�:");
	scanf("%d", &maxlen);
	 getchar(); //\n ������ ����
	str = (char *)malloc(sizeof(char)*(maxlen + 1));
    
	printf("���ڿ� �Է�:");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; // \n������ ���� 
	len = strlen(str);

	
	for (i = len; i > 0; i--)
	{
		if (str[i] == ' ')
		{
			printf("%s ", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s ", &str[0]);
	free(str);

}
*/




/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main()

{
	int arrlen = 5; //�ʱ� �迭 ����
	int idx = 0;
	int i;
	int * arr=(int*)malloc(sizeof(int)*arrlen);
	
	while (1)
	{
		printf("���� �Է�:");
		scanf("%d", &arr[idx]);
		if (arr[idx] == -1)
			break;

		if (arrlen == idx + 1)
		{
			arrlen += 3;
			arr = (int*)realloc(arr, sizeof(int)*arrlen);

		}
		idx++;

	}
	for(i=0; i<idx; i++)

}

*/


#include <stdio.h>
#pragma warning(disable:4996)
#define size 100

void push(int);
int pop();
int stack_full();
int stack_empty();
int top = -1;
void printA();

int stack[size];

int main()
{
	int data, choice;

	printf("Enter choice number\n");
	scanf("%d", &choice);
	while (choice != 4)
	{
		switch (choice)
		{
		case 1:
			if (stack_full() != -1)
			{
				printf("Enter number to push\n");
				scanf("%d", &data);
				push(data);

			}
			else
			{
				printf("stack is full\n");	
			}
			break;

		case 2:
			if (stack_empty() != -1)
			{
				printf("stack is empty\n");
			}
			else
			{
				printf("stack is empty");
			}
			break;

		case 3: 
			printA();
			break;
		}

		printf("\nEnter choice\n");
		scanf("%d", &choice);
	}

}
/*
push
description : appends data to the stack
	input : data to append(the stack is a global structure)
	output : none
*/
void push(int data) {
	top++;
	stack[top] = data;
}

int pop()
{
	return stack[top--];
}

int stack_full(void)
{
	if (top == size-1)
		return -1;
	else
		return 0;
}

int stack_empty(void)
{
	if (top == -1)
	{
		printf("it is a empty");
		return -1;
	}
	return 0;
}

void printA()
{
	int i = 0;
	for (i=top; i>=0; i--)
	{
		printf("%d ",stack[i]);
	}
}

