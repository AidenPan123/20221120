#include <graphics.h>
#include <conio.h>
#include <string.h>
#pragma comment(lib,"Winmm.lib")
#include "PlayMusicOnce.h"  #写好



void PlayMusicOnce(char *fileName)
{
	char cmdString1[50] = "open ";
	strcat(cmdString1,fileName);
	strcat(cmdString1," alias tmpmusic");
	mciSendString("close tmpmusic", NULL, 0, NULL); // 先把前面一次的音乐关闭
	mciSendString(cmdString1, NULL, 0, NULL); // 打开音乐
	mciSendString("play tmpmusic", NULL, 0, NULL); // 仅播放一次
}