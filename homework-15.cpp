#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int h,m;
	
	printf("�п�J�{�b���ɶ�:\n");
	scanf("%d%d",&h,&m);
	
	if((h>=7)&&(h<=16))
	{
		if((h==7)&&(m>=30))
			printf("�{�b�O�W�Ǯɶ�\n");
		else if((h==16)&&(m<=59))
			printf("�{�b�O�W�Ǯɶ�\n");
		else if((h>=8)&&(h<=15))
			printf("�{�b�O�W�Ǯɶ�\n");
		else
			printf("�{�b�O�ۥѮɶ�\n");	
	}
	else
		printf("�{�b�O�ۥѮɶ�\n");
	system("pause");
	return 0;
	
}
