#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printMenu() {
    printf("메뉴:\n");
    printf("'C' -  메뉴 출력 \n");
    printf("'Q' - 프로그램 종료\n");
    printf("잘못된 입력입니다. 다시 입력해주세요!.\n");
}

int main() {
    char input;
    printMenu();  // 처음 프로그램을 시작할 때 메뉴를 표시

    while (1) {  // 사용자가 'q' 또는 'Q'를 입력할 때까지 무한 루프
        printf("문자 입력 : ");
        scanf(" %c", &input);  // 입력 버퍼에 남아 있는 공백 문자를 제거하기 위해 %c 앞에 공백을 추가


        if (input == 'C' || input == 'c') {
            printMenu();   // 사용자가 'C' 또는 'c'를 입력하면 메뉴를 다시 표시
        }
        else if (input == 'Q' || input == 'q') {
            printf("프로그램 종료.\n");
            break;  // 'Q' 또는 'q'를 입력하면 루프를 종료하고 프로그램을 종료
        }
        else {
            printf("잘못된 입력입니다. 다시 입력해주세요!\n");  // 유효하지 않은 입력에 대한 메시지
        }
    }

    return 0;
}