#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #д��
#include <conio.h>								// ���� _getch �����ڿ�
#include<stdio.h>



void change_Phone(int WIDTH, int HEIGHT)
{
	getchar();
	cleardevice();
	setcolor(BLACK);
	IMAGE backgroundImage;
	loadimage(&backgroundImage, _T("img19.jpg"), WIDTH, HEIGHT);	// ���ر���ͼƬ
	putimage(0, 0, &backgroundImage);
	Sleep(1000);

}

int main()
{
	IMAGE backgroundImage;
	int WIDTH = 900, HEIGHT = 600;
	initgraph(WIDTH, HEIGHT);

	loadimage(&backgroundImage, _T("background.jpg"), WIDTH, HEIGHT);	// ���ر���ͼƬ
	putimage(0, 0, &backgroundImage);								// ��ʾ����ͼƬ
	change_Phone(WIDTH, HEIGHT);

	//mciSendString("open 01.mp3", NULL, 0, NULL);
	//mciSendString("play 01.mp3", NULL, 0, NULL);
	//���������������

	//c----

	//{
	while (1)
	{
		PlayMusicOnce("�������.mp3");
		Sleep(200000);
		PlayMusicOnce("�������.mp3");
		Sleep(200000);
	}
	getch();
	return 0;
}