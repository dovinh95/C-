#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {
    printf("�޴�:\n");
    printf("'C' -  �޴� ��� \n");
    printf("'Q' - ���α׷� ����\n");
    printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���!.\n");
}

int main() {
    char input;
    printMenu();  // ó�� ���α׷��� ������ �� �޴��� ǥ��

    while (1) {  // ����ڰ� 'q' �Ǵ� 'Q'�� �Է��� ������ ���� ����
        printf("���� �Է� : ");
        scanf(" %c", &input);  // �Է� ���ۿ� ���� �ִ� ���� ���ڸ� �����ϱ� ���� %c �տ� ������ �߰�


        if (input == 'C' || input == 'c') {
            printMenu();   // ����ڰ� 'C' �Ǵ� 'c'�� �Է��ϸ� �޴��� �ٽ� ǥ��
        }
        else if (input == 'Q' || input == 'q') {
            printf("���α׷� ����.\n");
            break;  // 'Q' �Ǵ� 'q'�� �Է��ϸ� ������ �����ϰ� ���α׷��� ����
        }
        else {
            printf("�߸��� �Է��Դϴ�. �ٽ� �Է����ּ���!\n");  // ��ȿ���� ���� �Է¿� ���� �޽���
        }
    }

    return 0;
}