/*
 * CԴ������: hhcx.c
 * ����: Mike Akiba
 * �汾: v0.1
 * ����: ����ҵ�����ߵ�̨���ŷ�����Ϣ��ѯC����
 * ����&���У�
 *   GNU/Linux:
 *     $ pcc hhcx.c -o hhcx && ./hhcx
 *   Windows��
 *     D:\src>pcc hhcx.c -o hhcx.exe && .\hhcx.exe
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void func(char *temp) {
	char *name;
	name = strtok(temp, ":");

	// Convert to upper case
	char *s = name;
	while (*s) {
		*s = toupper((unsigned char) *s);
		s++;
	}

}

int main(void) {
	printf("\n��ѯ�й���½ҵ�����ߵ�̨���������Ϣ�ĳ���\n\n");
	printf("  Ŀǰ���ܲ�ѯ�۰�̨�ĺ���\n");
	printf("  ���ܲ�׼��������ٷ��۵�\n");
	printf("  �����ʽ�����ӣ���BG7XTQ\n");
	printf("------------------------------------------\n\n");

	char h[11]; /* �10 */
	int check;
	do {
		printf("����Ҫ��ѯ�ĺ��ţ�");
		check = scanf("%10s", h);
		while (getchar()!='\n');
		/*printf("%s\n", h);*/
	} while (check != 1);
	func(h);  /* ת��Ϊ��д */

	/* ��β����ĸ */

	/* �ڶ�λ��̨���� ����ĸ */
	if (h[0] != 'B' || h[1] < 'A' || h[1] > 'Z' || h[2] < '0' || h[2] > '9' || strlen(h) > 10 || strlen(h) < 4) {
		printf("\n  ������󣡺��Ÿ�ʽ�����Ϸ��ɹ涨\n\n");
		return 0;
	}
	printf("\n�ú�����Ϣ��\n\n");
	if ((h[1] > 'K' && h[1] < 'R') || (h[1] > 'T' && h[1] < 'Y')) {   /* LMNOPQ || UVWX */
		printf("  �������ߵ���������������\n");
	} else {
		if (h[1] == 'J') printf("  ҵ���ű�̨��ռ�ҵ�����ߵ�̨\n");
		if (h[1] == 'R') printf("  ҵ���м�̨\n");
	}
	switch (h[2]) {
	case '1':
		printf("  ��1��������\n");
		break;
	case '2':
		printf("  ��2���������������֡�����\n");
		break;
	case '3':
		printf("  ��3����������ɹš��ӱ���ɽ��\n");
		break;
	case '4':
		printf("  ��4�����Ϻ���ɽ��������\n");
		break;
	case '5':
		printf("  ��5�����㽭������������\n");
		break;
	case '6':
		printf("  ��6�������ա����ϡ�����\n");
		break;
	case '7':
		if ((strlen(h) == 4) && (h[1] == 'S') && (h[3] == 'H')) {   /* BS7H */
			printf("  ���ҵ�ҵ�����ߵ�̨\n");
			break;
		}
		printf("  ��7�������ϡ��㶫������������\n");
		break;
	case '8':
		printf("  ��8�����Ĵ������졢���ݡ�����\n");
		break;
	case '9':
		printf("  ��9�������������ࡢ���ġ��ຣ\n");
		break;
	case '0':
		printf("  ��0�����½�������\n");
		break;
	}
	printf("\n");
	return 0;
}