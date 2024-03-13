#include <stdio.h>
#include <string.h>

int main() {
    char id[10] = "bluestraw", pw[10] = "1234", inid[10], inpw[10];
    int sol = 1500, cok = 1000, sy = 2000, i = 0, j = 0, k = 0, r = 0 ;
    char d[4], p[4], a[10];

    printf("관리자입니까? (네/아니오): ");
    scanf("%3s", d); // Read up to 3 characters (네 or 아니오)

    r = strcmp("네", d);
    if (r == 0) {
        printf("아이디와 비밀번호를 입력하세요: ");
        scanf("%s %s", inid, inpw);

        if (strcmp(id, inid) == 0 && strcmp(pw, inpw) == 0) {
            printf("무엇을 하시겠습니까? 1. 음료수 가격 수정, 2. 아이디 패스워드 수정: ");
            scanf("%7s", a);
            if(strcmp("1번", a) == 0){
                printf("어떤 음료수의 가격을 수정하시겠습니까? 1번 코카콜라, 2번 솔의눈, 3번 사이다.");

            }
            else if(strcmp("2번", a) == 0){
                printf("현재 아이디는 %10s 이고, 비밀번호는 %10s입니다.", id, pw);
                printf("바꾸실 아이디와 비번을 순차적으로 입력해주세요\n");
                scanf("%10s %10s", id, pw);
                printf("성공적으로 바뀌었습니다!");
            }
            else{
                printf("다시 입력해주세요");
            }


        } else {
            printf("다시 입력하세요.");
        }
    } else {
        while (1) {
            printf("어서오세요, 무슨 음료를 고르시겠습니까?\n");
            printf("1번 코카콜라, 2번 솔의눈, 3번 사이다: ");
            scanf("%d", &i);

            if (i == 1) {
                printf("가격은 %d원입니다. 몇원어치를 얼마나 넣으시겠습니까? ", cok);
                scanf("%d %d", &j, &k);
                if (i * k < cok) {
                    printf("돈을 더 넣어주시길 바랍니다.\n");
                    continue;
                }
                printf("거스름돈은 %d원입니다. 더 결제하시겠습니까? (네/아니오): ", (j * k) - cok);
                scanf("%3s", p);
                if (strcmp("네", p) == 0) {
                    continue;
                } else {
                    break;
                }
            } else if (i == 2) {
                printf("가격은 %d원입니다. 몇원어치를 얼마나 넣으시겠습니까? ", sol);
                scanf("%d %d", &j, &k);
                if (i * k < sol) {
                    printf("돈을 더 넣어주시길 바랍니다.\n");
                    continue;
                }
                printf("거스름돈은 %d원입니다. 더 결제하시겠습니까? (네/아니오): ", (j * k) - sol);
                scanf("%3s", p);
                if (strcmp("네", p) == 0) {
                    continue;
                } else {
                    break;
                }
            } else if (i == 3) {
                printf("가격은 %d원입니다. 몇원어치를 얼마나 넣으시겠습니까? ", sy);
                scanf("%d %d", &j, &k);
                if (i * k < sy) {
                    printf("돈을 더 넣어주시길 바랍니다.\n");
                    continue;
                }
                printf("거스름돈은 %d원입니다. 더 결제하시겠습니까? (네/아니오): ", (j * k) - sy);
                scanf("%3s", p);
                if (strcmp("네", p) == 0) {
                    continue;
                } else {
                    break;
                }
            } else {
                printf("다시 입력하세요.\n");
            }
        }
    }
    return 0;
}
