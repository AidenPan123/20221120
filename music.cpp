#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #д��




int main()
{
	IMAGE backgroundImage;
	int WIDTH =900,HEIGHT = 600;
	initgraph(WIDTH, HEIGHT);

	loadimage(&backgroundImage, _T("background.jpg"), WIDTH, HEIGHT);	// ���ر���ͼƬ
	putimage(0, 0, &backgroundImage);								// ��ʾ����ͼƬ

	{
	while (1)
		PlayMusicOnce("�������.mp3");
		Sleep(200000);
		PlayMusicOnce("�������.mp3");
		Sleep(200000);
	}
	getch();
	return 0;
}
