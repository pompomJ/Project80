#include <stdio.h>

int main(int argc, char* argv[])
{
	char c;

	printf("���[�}�������A���t�@�x�b�g����͂��Ă��������F�@\n");

	scanf_s("%c", "&c");

	if (c >= 'A' && c <= 'Z')
	{
		printf("�A���t�@�x�b�g�̑啶���ł��I\n");
	}

	else if (c >= 'a' && c <= 'z')
	{
		printf("�A���t�@�x�b�g�̏������ł��I\n");
	}
	else
	{
	    printf("���[�}�����ł��I\n");
	}

	return 0;

}