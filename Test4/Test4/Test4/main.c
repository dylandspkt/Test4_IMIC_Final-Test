#include <stdio.h>
#include<Windows.h>
WINAPI function(LPVOID doiso)
{
	while (1)
	{
		printf("Say Hello\r\n");
		Sleep(1500);
	}
	return NULL;
}

void main()
{
	CreateThread(NULL, 16, function, NULL, NULL, NULL);
	while (1)
	{
		printf("Xin chao\r\n");
		Sleep(2000);
	}


}


