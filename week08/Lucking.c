#include<stdio.h>
#include<windows.h>
void gotoxy(int x, int y) 
{
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos={x,y};
    SetConsoleCursorPosition(handle, pos); 
}
int main()
{
	int num;
	char* jsj2b[45] = {
		"��  ϣ",
		"��  ��",
		"��  ��",
		"����",
		"�����",
		"��С��",
		"������",
		"��  ��",
		"�ܽ���",
		"��  ��",
		"̷  ��",
		"��  ��",
		"���ƽ�",
		"��ְʤ",
		"������",
		"������",
		"��  ��",
		"������",
		"����ϼ",
		"��  ��",
		"��  ��",
		"��  ��",
		"�˼Һ�",
		"��  ��",
		"��  ��",
		"��Ϊ��",
		"��  ��",
		"��  ��",
		"����ȫ",
		"������",
		"����Ƚ",
		"������",
		"������",
		"������",
		"Ī  �",
		"������",
		"����׿",
		"��Ҷ��",
		"��ԵԲ",
		"���ҿ�",
		"Ϳ  ��",
		"��  ˬ"
	};
	int c = 1;
	system("color f4");
	srand(time(NULL));
	while(1){
		num = rand() % 45;
		gotoxy(10,10);
		printf("%s", jsj2b[num]);
		if(c++ == 100000) break;
	}
	
	return 0;
}

