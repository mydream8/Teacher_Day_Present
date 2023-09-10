#include <stdio.h>
#include <Windows.h>
#include <string.h>
//#include <stdlib.h>
#define PROGRESSBAR_LINE 10

void startInfo(void)//开始信息
{
	puts("作者:mydream8");
	puts("代码已托管于Github,URL:");
}
void progressBar(void)
{
	printf_s("加载中,进度:[");
	for (int i = 0; i < PROGRESSBAR_LINE; i++)
	{
		printf_s(" ");
	}
	printf_s("]");
	for (int i = PROGRESSBAR_LINE; i >= 0; i--)
	{
		printf_s("\b");
	}
	for (int i = 0; i < PROGRESSBAR_LINE; i++)
	{
		Sleep(500);
		putchar('=');
	}
}

int main(void)
{
	//第一屏幕
	{
		startInfo();
		progressBar();
	}
	system("cls");
	//第二屏幕
	{
		char text[400] = "\0";
		for(int i=0;i<5;i++)
		{
			switch (i)
			{
			case 0:
				strcpy(text, "三人行，必有我师焉。择其善者而从之，其不善者而改之。——《论语·述而篇》");
				break;
			case 1:
				strcpy(text, "春蚕到死丝方尽，蜡炬成灰泪始干。——李商隐《无题·相见时难别亦难》");
				break;
			case 2:
				strcpy(text, "采得百花成蜜后，为谁辛苦为谁甜？——罗隐《蜂》");
				break;
			case 3:
				strcpy(text, "令公桃李满天下，何用堂前更种花。——白居易《奉和令公绿野堂种花》");
				break;
			case 4:
				strcpy(text, "国将兴，必贵师而重傅——《荀子·大略》");
				break;
			}
			puts(text);
			system("pause");
		}
	}
	return 0;
}