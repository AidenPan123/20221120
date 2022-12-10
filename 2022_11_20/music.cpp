#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #写好
#include <conio.h>								// 函数 _getch 的所在库
#include<stdio.h>



void change_Phone(int WIDTH, int HEIGHT)
{
	getchar();
	cleardevice();
	setcolor(BLACK);
	IMAGE backgroundImage;
	loadimage(&backgroundImage, _T("img19.jpg"), WIDTH, HEIGHT);	// 加载背景图片
	putimage(0, 0, &backgroundImage);
	Sleep(1000);

}

int main()
{
	IMAGE backgroundImage;
	int WIDTH = 900, HEIGHT = 600;
	initgraph(WIDTH, HEIGHT);

	loadimage(&backgroundImage, _T("background.jpg"), WIDTH, HEIGHT);	// 加载背景图片
	putimage(0, 0, &backgroundImage);								// 显示背景图片
	change_Phone(WIDTH, HEIGHT);

	//mciSendString("open 01.mp3", NULL, 0, NULL);
	//mciSendString("play 01.mp3", NULL, 0, NULL);
	//面向对象和面向过程

	//c----

	//{
	while (1)
	{
		PlayMusicOnce("告白气球.mp3");
		Sleep(200000);
		PlayMusicOnce("告白气球.mp3");
		Sleep(200000);
	}
	getch();
	return 0;
}