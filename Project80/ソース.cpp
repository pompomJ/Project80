#include <stdio.h>

int main(int argc, char* argv[])
{
	char c;

	printf("ローマ数字かアルファベットを入力してください：　\n");

	scanf_s("%c", "&c");

	if (c >= 'A' && c <= 'Z')
	{
		printf("アルファベットの大文字です！\n");
	}

	else if (c >= 'a' && c <= 'z')
	{
		printf("アルファベットの小文字です！\n");
	}
	else
	{
	    printf("ローマ数字です！\n");
	}

	return 0;

}