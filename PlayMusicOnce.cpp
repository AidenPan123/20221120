#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #д��



void PlayMusicOnce(char *fileName)
{
	char cmdString1[50] = "open ";
	strcat(cmdString1,fileName);
	strcat(cmdString1," alias tmpmusic");
	mciSendString("close tmpmusic", NULL, 0, NULL); // �Ȱ�ǰ��һ�ε����ֹر�
	mciSendString(cmdString1, NULL, 0, NULL); // ������
	mciSendString("play tmpmusic", NULL, 0, NULL); // ������һ��
}