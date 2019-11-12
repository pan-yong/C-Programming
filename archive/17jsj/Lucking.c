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
		"黎  希",
		"刘  祥",
		"任  劼",
		"黎振东",
		"李其浩",
		"刘小军",
		"李雨涛",
		"王  浩",
		"周锦鸿",
		"陈  庆",
		"谭  博",
		"文  轶",
		"胡芷杰",
		"黎职胜",
		"刘正扬",
		"黎易磊",
		"龙  亮",
		"万轶哲",
		"李云霞",
		"罗  佳",
		"周  蓉",
		"曹  凯",
		"邓家豪",
		"王  阳",
		"郭  东",
		"吴为波",
		"严  郁",
		"杜  航",
		"熊忠全",
		"赵旺洁",
		"胡震冉",
		"黄梵宇",
		"金振兴",
		"蔡梦柔",
		"莫  姣",
		"张夏蕾",
		"高天卓",
		"徐叶康",
		"周缘圆",
		"刘家骏",
		"涂  亮",
		"朱  爽"
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

