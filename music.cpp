#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #Ð´ºÃ




int main()
{
	IMAGE backgroundImage;
	int WIDTH =900,HEIGHT = 600;
	initgraph(WIDTH, HEIGHT);

	loadimage(&backgroundImage, _T("background.jpg"), WIDTH, HEIGHT);	// ¼ÓÔØ±³¾°Í¼Æ¬
	putimage(0, 0, &backgroundImage);								// ÏÔÊ¾±³¾°Í¼Æ¬

	{
	while (1)
		PlayMusicOnce("¸æ°×ÆøÇò.mp3");
		Sleep(200000);
		PlayMusicOnce("¸æ°×ÆøÇò.mp3");
		Sleep(200000);
	}
	getch();
	return 0;
}
