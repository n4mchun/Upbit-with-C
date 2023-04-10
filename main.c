#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

enum {
    BLACK,
    DARK_BLUE,
    DARK_GREEN,
    DARK_SKYBLUE,
    DARK_RED,
    DARK_VOILET,
    DAKR_YELLOW,
    GRAY,
    DARK_GRAY,
    BLUE,
    GREEN,
    SKYBLUE,
    RED,
    VIOLET,
    YELLOW,
    WHITE,
};

void clearBuffer() {
    while (getchar() != '\n');
}
void setColor(unsigned short text) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}
void setcolor(unsigned short text, unsigned short back)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

char ub_Enter[256], ub_HomeEnter[256], ub_Kakao_email[256], ub_Kakao_password[256], ub_Login_Enter[256];
int ub_thread_enter;
long long ub_money;
short ub_Random, ub_PCThread = 0, ub_EXCHANGE_ENTER = 0, ub_Login_Clear = 0, TEST_const = 1000, TEST_price = 0, DOGE_const = 653, DOGE_price = 0, XRP_const = 1715, XRP_price = 0, MED_const = 125, MED_price = 0, XLM_const = 821, XLM_price = 0, ub_Coins = 0, ub_Markets = 0, ub_Login_if = 0;
float STMX_const = 51.5, STMX_price = 0;
int ETH_const = 4940000, ETH_price = 0, BTC_const = 62045000, BTC_price = 0;
void ub_loadingPage() {
    system("color f0");
    setcolor(9, 1); printf("\n                                                                                                                        ");
    setcolor(15, 1); printf("\n      UPbit                                                                                                             ");
    setcolor(9, 1); printf("\n                                                                                                                        ");
    setcolor(1, 15);
    printf("\n\n\t\t\t\t\t\t    잠시만 기다려주세요.\n");
    setcolor(8, 15);
    printf("\n\t\t\t\t\t    보안을 위해 브라우저를 확인중입니다.\n");
    printf("\n\t\t\t\t    이 과정은 자동으로 진행되며, 약 5초정도 소요됩니다.\n\n\n");
    setcolor(1, 15); printf("\n\n\t\t\t\t\t\t   Please wait 5 seconds\n");
    setcolor(0, 15); printf("\n\t\t\t\t    Checking your browser before accessing upbit.com.\n");
    setcolor(8, 15); printf("\n\t\t  This process is automatic. Your browser will redirect to your requested conted shortly\n");
    printf("\n\t\t\t\t\t\tPlease allow up to 5 seconds...\n");
    setcolor(0, 15); printf("\n\n\n\t-----------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t    두나무 주식회사 | 대표 이석우 | 서울시 강남구 테헤란로 4길 14,5층 | 사업자등록번호 119-86-54968\n");
    setcolor(9, 15); printf("\n\tUP"); setcolor(1, 15); printf("bit"); setcolor(0, 15); printf("\t    고객센터 1588-5682 (운영시간 : 평일 9:00~18:00)\n");
    setcolor(8, 15); printf("\n\t\t    COPYRIGHT 2017@DUNAMU. ALL RIGHT RESERVED");
    Sleep(5000);
}
void ub_headerPrint() {
    setcolor(9, 15); printf("\n      UP"); setcolor(1, 15); printf("bit  "); setcolor(0, 15); printf("\t거래소    입출금    거래내역    코인동향    고객센터\t\t          로그인    회원가입    국가");
}
void ub_iconPrint() {
    printf("\t\t\t\t\t\t\t 업비트");
    printf("\n\n\n");
    setcolor(15, 0);
    system("color 33");
    setcolor(15, 0); printf("\t\t\t\t        ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");//1
    setcolor(15, 0); printf("\t\t\t\t      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");//2
    setcolor(15, 0); printf("\t\t\t\t    ■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■■■\n");//3
    setcolor(15, 0); printf("\t\t\t\t  ■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■■■\n");//4
    setcolor(15, 0); printf("\t\t\t\t■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■■■\n");//5
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■■■"); setcolor(15, 0); printf("■■■■\n");//6
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■\n");//7
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■■■"); setcolor(15, 0); printf("■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■\n");//8
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■"); setcolor(1, 0); printf("■■■■■■"); setcolor(15, 0); printf("■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■\n");//9
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■■■"); setcolor(15, 0); printf("■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■\n");//10
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■■■"); setcolor(15, 0); printf("■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■\n");//11
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■\n");//12
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■■■"); setcolor(15, 0); printf("■■■■\n");//13
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■\n");//14
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■\n");//15
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■\n");//16
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■\n");//17
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■\n");//18
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■\n");//19
    setcolor(15, 0); printf("\t\t\t\t■■■■"); setcolor(1, 0); printf("■■■■■■■■"); setcolor(15, 0); printf("■■■■■■■■■■■■"); setcolor(1, 0); printf("■■■■"); setcolor(15, 0); printf("■■■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■\n");//20
    setcolor(15, 0); printf("\t\t\t\t■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■■■\n");//21
    setcolor(15, 0); printf("\t\t\t\t  ■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■■■\n");//22
    setcolor(15, 0); printf("\t\t\t\t    ■■■■■■"); setcolor(1, 0); printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■"); setcolor(15, 0); printf("■■■■■■\n");//23
    setcolor(15, 0); printf("\t\t\t\t      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");//24
    setcolor(15, 0); printf("\t\t\t\t        ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■\n");//25
    setcolor(0, 0); printf("\t\t\t\t\t\t\t    ");
    scanf("%c", &ub_Enter);
    printf("\x1b[%dA\r", 1); printf("\t\t\t\t\t\t\t    ");
    Sleep(500);
    system("cls");
}
void ub_Coins_pc() {
    DOGE_price = DOGE_const;
    STMX_price = STMX_const;
    XRP_price = XRP_const;
    BTC_price = BTC_const;
    MED_price = MED_const;
    XLM_price = XLM_const;
    ETH_price = ETH_const;
    TEST_price = TEST_const;
}
DWORD WINAPI Thread_COINS(LPVOID lpParam) {
    while (1) {
        ub_Random = rand() % 2;
        if (ub_Random % 2 == 0) {
            ub_Random = rand() % 2 + 1;
            DOGE_price += ub_Random;
            ub_Random = rand() % 2 + 1;
            STMX_price += ub_Random * 0.5;
            MED_price++;
            ub_Random = rand() % 2 + 1;
            XLM_price += ub_Random;
            ub_Random = rand() % 5 + 1;
            XRP_price += ub_Random;
            ub_Random = rand() % 10 + 1;
            ETH_price += ub_Random * 1000;
            ub_Random = rand() % 100 + 1;
            BTC_price += ub_Random * 1000;
        }
        else {
            ub_Random = rand() % 2 + 1;
            DOGE_price -= ub_Random;
            ub_Random = rand() % 2 + 1;
            STMX_price -= ub_Random * 0.5;
            MED_price--;
            ub_Random = rand() % 2 + 1;
            XLM_price -= ub_Random;
            ub_Random = rand() % 5 + 1;
            XRP_price -= ub_Random;
            ub_Random = rand() % 10 + 1;
            ETH_price -= ub_Random * 1000;
            ub_Random = rand() % 100 + 1;
            BTC_price -= ub_Random * 1000;
        }
        Sleep(2000);
    }
    return 0;
}
DWORD WINAPI Thread_EXCHANGE_SPACE(LPVOID lpParam) {
    while (1) {
        ub_thread_enter = GetAsyncKeyState(VK_SPACE);
    }
    return 0;
}
int main() {
    DWORD dwThreadId;
    HANDLE hThread = CreateThread(NULL, 0, Thread_COINS, 0, NULL, &dwThreadId);//상시 코인값 변동
    HANDLE EXThread = CreateThread(NULL, 0, Thread_EXCHANGE_SPACE, 0, 4, &dwThreadId);// 거래소에서 다른곳으로 이동
    // 4는 suspend 상태를 의미
    ub_Coins_pc();
    ub_iconPrint();
    void ub_Language(); {
        ub_loadingPage();
        system("cls");
        system("color f0");
        setcolor(1, 15);
        setcolor(0, 15);
        printf("\n\n\n\n\n\n\t\t\t\t\t\t     You can use Upbit\n\n\t\t\t\t\t        in English on Upbit Global.");
        printf("\n\n\t\t\t\t\t  이용하실 국가 또는 언어를 선택해주세요.");
        setcolor(1, 15);
        printf("\n\n\n\t\t\t\t\t\t   Go to Upbit Global  (ENG)");
        setcolor(0, 15);
        printf("\n\n\t\t\t\t\t\t   Stay on Upbit Korea (KOR)");
        printf("\n\n\n\t\t\t\t\t-------------------------------------------");
        printf("\n\n\t\t\t\t\tDo not show this message again\t\t  X\n");
        setcolor(0, 15);
        printf("\n\t\t\t\t\t\t\t    ");
        scanf("%s", &ub_Enter);
        printf("\x1b[%dA\r", 2); printf("\n\t\t\t\t\t\t\t       ");
        Sleep(200);
        if (strcmp(ub_Enter, "ENG") == 0) {
            goto ub_Home_KOR;
        }
        else if (strcmp(ub_Enter, "KOR") == 0) {
            goto ub_Home_KOR;
        }
        else if (strcmp(ub_Enter, "X") == 0) {
            goto ub_Home_KOR;
        }
    }
    void ub_Home_(); {
        void ub_Home_ENG(); {

            goto ub_Home_KOR;
        }
        void ub_Home_KOR(); {
        ub_Home_KOR:
            clearBuffer();
            system("cls");
            system("color f0");
            ub_headerPrint();
            setcolor(1, 15); printf("\n\n\t\t\t                                                        "); setcolor(1, 9); printf("                                        \n");
            setcolor(15, 15); printf("\t\t\t\t    "); setcolor(15, 9); printf("\t\t\t\t\t\t"); setcolor(6, 9); printf("  Notice                                \n");
            setcolor(1, 15); printf("\t\t\t                                                        "); setcolor(1, 9); printf("                                        \n");
            setcolor(15, 15); printf("\t\t\t\t\t\t\t\t\t        "); setcolor(15, 9); printf("  - [점검] 긴급 서버 점검 안내 (완료)   \n");
            setcolor(15, 15); printf("\t\t\t\t\t\t\t\t\t        "); setcolor(15, 9); printf("  - [공지] 현우 코인 정지당함ㅋㅋㅋㅋ   \n");
            setcolor(15, 15); printf("\t\t\t\t\t\t\t\t\t        "); setcolor(15, 9); printf("  - [점검] 원화마켓 서버점검 안내(완료) \n");
            setcolor(1, 15); printf("\t\t\t                                                        "); setcolor(1, 9); printf("                                        \n");
            setcolor(0, 15); printf("\n\t\t\t\t       가장 신뢰받는 글로벌 표준 디지털 자산 거래소\n"); setcolor(8, 15); printf("\n\n\t\t\t      안전하고 투명한 시스템으로 빠르고 편리한 거래 환경을 제공합니다.\n\n");
            while (ub_Markets < 294) {
                printf("\x1b[%dA\r", 200);
                if (ub_Coins < 178) {
                    ub_Coins++;
                }
                if (ub_Markets < 294) {
                    ub_Markets++;
                }
                setcolor(1, 15); printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t %3d         ", ub_Coins); setcolor(9, 15); printf("|"); setcolor(1, 15); printf("        %3d", ub_Markets);
                setcolor(8, 15); printf("\n\t\t\t\t\t\tCoins        "); setcolor(9, 15); printf("|"); setcolor(8, 15); printf("      Markets");
                setcolor(1, 15); printf("\n\n\n\t\t\t\t\t  "); setcolor(15, 1); printf(" 거래소 둘러보기 "); setcolor(1, 15); printf("     "); setcolor(15, 9); printf("     로그인     \n\n");
                setcolor(0, 15);
                fflush(stdout);
                Sleep(1);
            }
            ub_Coins = 0;
            ub_Markets = 0;
            void EEnter1(); {
                setcolor(0, 15);
                printf("\n\t\t\t\t\t\t\t   ");
                scanf("%s", &ub_HomeEnter);
                printf("\x1b[%dA\r", 1); printf("\t\t\t\t\t\t\t   ");

                if (strcmp(ub_HomeEnter, "거래소") == 0) {
                    Sleep(200);
                    goto ub_Exchange;
                }
                else if (strcmp(ub_HomeEnter, "UPbit") == 0) {
                    Sleep(200);
                    goto ub_Home_KOR;
                }
                else if (strcmp(ub_HomeEnter, "입출금") == 0) {
                    Sleep(200);
                    goto ub_Deposit;
                }
                else if (strcmp(ub_HomeEnter, "거래내역") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "코인동향") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "고객센터") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "로그인") == 0) {
                    Sleep(200);
                    if (ub_Login_Clear == 1) {
                        goto ub_Exchange;
                    }
                    else {
                        goto ub_Login;
                    }
                }
                else if (strcmp(ub_HomeEnter, "회원가입") == 0) {
                    Sleep(200);
                    if (ub_Login_Clear == 1) {
                        goto ub_Exchange;
                    }
                    else {
                        goto ub_Login;
                    }
                }
                else if (strcmp(ub_HomeEnter, "국가") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "거래소둘러보기") == 0) {
                    Sleep(200);
                    goto ub_Exchange;
                }
                else {
                    setcolor(9, 15);
                    printf("다시 입력해주세요.\n");
                    goto ub_Home_KOR;
                }
            }
        }
        void ub_Login(); {
        ub_Login:
            system("cls"); system("color f0");

            setcolor(15, 1); printf("                                                                                                                        ");
            setcolor(15, 1); printf("\n      UP"); setcolor(15, 1); printf("bit  "); setcolor(8, 1); printf("   거래소    입출금    거래내역    코인동향    고객센터                   "); setcolor(15, 1); printf("   로그인    회원가입    국가    \n");
            setcolor(15, 1); printf("                                                                                                                        ");
            setcolor(9, 15); printf("\n\n\n\n\n\t\t\t\t\t\t            UP"); setcolor(1, 15); printf("bit"); setcolor(8, 15); printf("\n\n\n\t\t\t\t    방문하신 사이트의 주소가 아래와 일치하는지 확인해주세요.");
            setcolor(1, 15); printf("\n\n\t\t\t\t\t\t     https:"); setcolor(0, 15); printf("//upbit.com\n\n");
            setcolor(15, 15); printf("\n     "); setcolor(6, 6); printf("\t\t\t\t\t                                            ");
            setcolor(15, 15); printf("\n     "); setcolor(0, 6); printf("\t\t\t\t\t            카카오 계정으로 로그인          ");
            setcolor(15, 15); printf("\n     "); setcolor(6, 6); printf("\t\t\t\t\t                                            ");
            if (ub_Login_if == 1) {
                setcolor(0, 15); printf("\n\n\n\t\t\t\t■"); printf(" 로그인 상태 유지\n");
            }
            else {
                setcolor(8, 15); printf("\n\n\n\t\t\t\t■"); printf(" 로그인 상태 유지\n");
            }
            setcolor(0, 15); printf("\n\n\t\t\t\t*"); setcolor(8, 15); printf(" 카카오계정으로 간편하고 안전하게 로그인(회원가입)할 수 있습니다.");
            setcolor(0, 15); printf("\n\n\t\t\t\t*"); setcolor(8, 15); printf(" 카카오계정이 기억나지 않으세요?"); setcolor(0, 15); printf("\t\t\t확인방법\n\n");
            printf("\n\t\t\t\t\t\t\t     ");
            void EEnter2(); {
                setcolor(0, 15);
                scanf("%s", &ub_HomeEnter);
                printf("\x1b[%dA\r", 2); printf("\n\t\t\t\t\t\t\t     ");
                if (strcmp(ub_HomeEnter, "거래소") == 0) {
                    Sleep(200);
                    goto ub_Exchange;
                }
                else if (strcmp(ub_HomeEnter, "UPbit") == 0) {
                    Sleep(200);
                    goto ub_Home_KOR;
                }
                else if (strcmp(ub_HomeEnter, "입출금") == 0) {
                    Sleep(200);
                    goto ub_Deposit;
                }
                else if (strcmp(ub_HomeEnter, "거래내역") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "코인동향") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "고객센터") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "로그인") == 0) {
                    Sleep(200);
                    goto ub_Login;
                }
                else if (strcmp(ub_HomeEnter, "회원가입") == 0) {
                    Sleep(200);
                    goto ub_Login;
                }
                else if (strcmp(ub_HomeEnter, "국가") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "로그인상태유지") == 0) {
                    ub_Login_if = 1;
                    Sleep(200);
                    goto ub_Login;
                }
                else if (strcmp(ub_HomeEnter, "확인방법") == 0) {
                    Sleep(200);
                    goto ub_Login;
                }
                else if (strcmp(ub_HomeEnter, "카카오계정으로로그인") == 0) {
                    Sleep(200);
                    goto ub_Kakao_Login;
                }
                else {
                    setcolor(9, 15);
                    printf("다시 입력해주세요.\n");
                    Sleep(500);
                    goto ub_Login;
                }
            }
        }
        void ub_Kakao_Login(); {
        ub_Kakao_Login:

            system("cls");
            system("color f0");
            setcolor(0, 15); printf("\n\n\n\t\t\t\t\t\t\tkakao");
            setcolor(0, 15); printf("\n\n\n\n\t\t\t\t\t\t        "); setcolor(9, 9); printf("                                       ");
            setcolor(0, 15); printf("\n\t\t\t\t\t\t        "); setcolor(9, 9); printf("                                       ");
            setcolor(0, 15); printf("\n\t\t\t\t\t\t        "); setcolor(9, 9); printf("                                       ");
            setcolor(8, 15); printf("\n\t\t\t\t\t\t        ---------------------------------------\n");
            setcolor(0, 15); printf("\n\t\t\t\t\t\t\t"); setcolor(4, 15); printf("TIP"); setcolor(8, 15); printf(" 카카오이메일이 있다면 메일 아이디만 입력해 보세요.");
            setcolor(0, 15); printf("\n\n\t\t\t\t\t\t        "); setcolor(9, 9); printf("                                       ");
            setcolor(0, 15); printf("\n\t\t\t\t\t\t        "); setcolor(9, 9); printf("                                       ");
            setcolor(0, 15); printf("\n\t\t\t\t\t\t        "); setcolor(9, 9); printf("                                       ");
            setcolor(8, 15); printf("\n\t\t\t\t\t\t        ---------------------------------------\n");
            setcolor(0, 15); printf("\n\n\t\t\t\t\t\t\t");
            if (ub_Login_if == 1) {
                setcolor(0, 15); printf("■"); setcolor(0, 15); printf(" 로그인 상태 유지");
            }
            else {
                setcolor(8, 15); printf("■"); setcolor(0, 15); printf(" 로그인 상태 유지");
            }
            printf("\n");
            setcolor(15, 15); printf("\n            "); setcolor(6, 6); printf("\t\t\t\t\t\t                                        ");
            setcolor(15, 15); printf("\n            "); setcolor(0, 6); printf("\t\t\t\t\t\t                  로그인                ");
            setcolor(15, 15); printf("\n            "); setcolor(6, 6); printf("\t\t\t\t\t\t                                        "); setcolor(0, 9);
            printf("\x1b[%dA\r", 18); printf("\n\n\t\t\t\t\t\t\t"); scanf("%s", &ub_Kakao_email);
            /*printf("\x1b[%dA\r", 2);*/ printf("\n\n\n\n\n\n\t\t\t\t\t\t\t"); scanf("%s", &ub_Kakao_password);
            setcolor(0, 15); printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t  ");
        Login_Scan:
            scanf("%s", &ub_Enter);

            if (strcmp(ub_Enter, "거래소") == 0) {
                Sleep(200);
                goto ub_Exchange;
            }
            else if (strcmp(ub_Enter, "UPbit") == 0) {
                Sleep(200);
                goto ub_Home_KOR;
            }
            else if (strcmp(ub_Enter, "입출금") == 0) {
                Sleep(200);
                goto ub_Deposit;
            }
            else if (strcmp(ub_Enter, "거래내역") == 0) {
                Sleep(200);
                /*goto ub_Deposit;*/
            }
            else if (strcmp(ub_Enter, "코인동향") == 0) {
                Sleep(200);
                /*goto ub_Deposit;*/
            }
            else if (strcmp(ub_Enter, "고객센터") == 0) {
                Sleep(200);
                /*goto ub_Deposit;*/
            }
            else if (strcmp(ub_Enter, "국가") == 0) {
                Sleep(200);
                /*goto ub_Deposit;*/
            }
            else if (strcmp(ub_Enter, "회원가입") == 0) {
                Sleep(200);
                goto ub_Login;
            }
            else if (strcmp(ub_Enter, "로그인") == 0) {
                Sleep(200);
                ub_Login_Clear = 1;
                goto ub_Home_KOR;
            }
            else if (strcmp(ub_Enter, "로그인상태유지") == 0) {
                ub_Login_if = 1;
                if (ub_Login_if == 1) {
                    printf("\x1b[%dA\r", 7); printf("\t\t\t\t\t\t\t"); setcolor(0, 15); printf("■"); setcolor(0, 15); printf(" 로그인 상태 유지\n");
                    setcolor(15, 15); printf("\n            "); setcolor(6, 6); printf("\t\t\t\t\t\t                                        ");
                    setcolor(15, 15); printf("\n            "); setcolor(0, 6); printf("\t\t\t\t\t\t                  로그인                ");
                    setcolor(15, 15); printf("\n            "); setcolor(6, 6); printf("\t\t\t\t\t\t                                        ");
                }
                Sleep(200);
                setcolor(0, 15);
                printf("\x1b[%dA\r", 1); printf("\n\n\t\t\t\t\t\t\t\t\t                                 ");
                printf("\n\t\t\t\t\t\t\t\t\t                                 ");
                printf("\x1b[%dA\r", 1); printf("\n\t\t\t\t\t\t\t\t\t  ");
                scanf("%s", &ub_Enter);
                if (strcmp(ub_Enter, "로그인") == 0) {
                    Sleep(200);
                    ub_Login_Clear = 1;
                    goto ub_Exchange;
                }
                else {
                    printf("\n\t\t\t\t\t\t\t\t\t다시 입력해주세요.");
                    goto Login_Scan;
                }
            }
        }
        void ub_Exchange(); {
        ub_Exchange:
            ub_thread_enter = 0;
            ResumeThread(EXThread);
            system("cls");
            srand((short)time(NULL));
            system("color 3");
            while (1) {
                printf("\x1b[%dA\r", 20);
                setcolor(15, 1); printf("                                                                                                                        ");
                setcolor(15, 1); printf("\n      UP"); setcolor(15, 1); printf("bit  "); setcolor(15, 1); printf("   거래소    "); setcolor(8, 1); printf("입출금    거래내역    코인동향    고객센터                     "); setcolor(15, 1); printf("로그인    회원가입    국가     \n");
                setcolor(15, 1); printf("                                                                                                                        \n\n");
                setcolor(15, 0); printf("     한글명                                       현재가                전일대비\n\n");
                void DOGE(); {
                    if (DOGE_price > DOGE_const) {
                        setcolor(4, 0); printf(" ■ "); setcolor(15, 0); printf("도지코인                                        "); setcolor(4, 0); printf("%d                  %5.2f%%\n", DOGE_price, (float)DOGE_price / (float)DOGE_const * 100 - 100);
                    }
                    else if (DOGE_price == DOGE_const) {
                        setcolor(15, 0); printf(" ■ "); setcolor(15, 0); printf("도지코인                                        "); setcolor(15, 0); printf("%d                  %5.2f%%\n", DOGE_price, (float)DOGE_price / (float)DOGE_const * 100 - 100);
                    }
                    else {
                        setcolor(9, 0); printf(" ■ "); setcolor(15, 0); printf("도지코인                                        "); setcolor(9, 0); printf("%d                  %5.2f%%\n", DOGE_price, (float)DOGE_price / (float)DOGE_const * 100 - 100);
                    }
                }
                void STMX(); {
                    if (STMX_price > STMX_const) {
                        setcolor(4, 0); printf(" ■ "); setcolor(15, 0); printf("야톰엑스                                      "); setcolor(4, 0); printf("%.2f                 %6.2f%%\n", STMX_price, (float)STMX_price / (float)STMX_const * 100 - 100);
                    }
                    else if (STMX_price == STMX_const) {
                        setcolor(15, 0); printf(" ■ "); setcolor(15, 0); printf("야톰엑스                                      "); setcolor(15, 0); printf("%.2f                 %6.2f%%\n", STMX_price, (float)STMX_price / (float)STMX_const * 100 - 100);
                    }
                    else {
                        setcolor(9, 0); printf(" ■ "); setcolor(15, 0); printf("야톰엑스                                      "); setcolor(9, 0); printf("%.2f                 %6.2f%%\n", STMX_price, (float)STMX_price / (float)STMX_const * 100 - 100);
                    }
                }
                void XRP(); {
                    if (XRP_price > XRP_const) {
                        setcolor(4, 0); printf(" ■ "); setcolor(15, 0); printf("리플                                           "); setcolor(4, 0); printf("%d                 %6.2f%%\n", XRP_price, (float)XRP_price / (float)XRP_const * 100 - 100);
                    }
                    else if (XRP_price == XRP_const) {
                        setcolor(15, 0); printf(" ■ "); setcolor(15, 0); printf("리플                                           "); setcolor(15, 0); printf("%d                 %6.2f%%\n", XRP_price, (float)XRP_price / (float)XRP_const * 100 - 100);
                    }
                    else {
                        setcolor(9, 0); printf(" ■ "); setcolor(15, 0); printf("리플                                           "); setcolor(9, 0); printf("%d                 %6.2f%%\n", XRP_price, (float)XRP_price / (float)XRP_const * 100 - 100);
                    }
                }
                void BTC(); {
                    if (BTC_price > BTC_const) {
                        setcolor(4, 0); printf(" ■ "); setcolor(15, 0); printf("비트코인                                   "); setcolor(4, 0); printf("%d                  %5.2f%%\n", BTC_price, (float)BTC_price / (float)BTC_const * 100 - 100);
                    }
                    else if (BTC_price == BTC_const) {
                        setcolor(15, 0); printf(" ■ "); setcolor(15, 0); printf("비트코인                                   "); setcolor(15, 0); printf("%d                  %5.2f%%\n", BTC_price, (float)BTC_price / (float)BTC_const * 100 - 100);
                    }
                    else {
                        setcolor(9, 0); printf(" ■ "); setcolor(15, 0); printf("비트코인                                   "); setcolor(9, 0); printf("%d                  %5.2f%%\n", BTC_price, (float)BTC_price / (float)BTC_const * 100 - 100);
                    }
                }
                void MED(); {
                    if (MED_price > MED_const) {
                        setcolor(4, 0); printf(" ■ "); setcolor(15, 0); printf("야디블록                                        "); setcolor(4, 0); printf("%3d                 %6.2f%%\n", MED_price, (float)MED_price / (float)MED_const * 100 - 100);
                    }
                    else if (MED_price == MED_const) {
                        setcolor(15, 0); printf(" ■ "); setcolor(15, 0); printf("야디블록                                        "); setcolor(15, 0); printf("%3d                 %6.2f%%\n", MED_price, (float)MED_price / (float)MED_const * 100 - 100);
                    }
                    else {
                        setcolor(9, 0); printf(" ■ "); setcolor(15, 0); printf("야디블록                                        "); setcolor(9, 0); printf("%3d                 %6.2f%%\n", MED_price, (float)MED_price / (float)MED_const * 100 - 100);
                    }
                }
                void XLM(); {
                    if (XLM_price > XLM_const) {
                        setcolor(4, 0); printf(" ■ "); setcolor(15, 0); printf("스텔라루멘                                      "); setcolor(4, 0); printf("%d                  %5.2f%%\n", XLM_price, (float)XLM_price / (float)XLM_const * 100 - 100);
                    }
                    else if (XLM_price == XLM_const) {
                        setcolor(15, 0); printf(" ■ "); setcolor(15, 0); printf("스텔라루멘                                      "); setcolor(15, 0); printf("%d                  %5.2f%%\n", XLM_price, (float)XLM_price / (float)XLM_const * 100 - 100);
                    }
                    else {
                        setcolor(9, 0); printf(" ■ "); setcolor(15, 0); printf("스텔라루멘                                      "); setcolor(9, 0); printf("%d                  %5.2f%%\n", XLM_price, (float)XLM_price / (float)XLM_const * 100 - 100);
                    }
                }
                void ETH(); {
                    if (ETH_price > ETH_const) {
                        setcolor(4, 0); printf(" ■ "); setcolor(15, 0); printf("이더리움                                    "); setcolor(4, 0); printf("%7d                  %5.2f%%\n", ETH_price, (float)ETH_price / (float)ETH_const * 100 - 100);
                    }
                    else if (ETH_price == ETH_const) {
                        setcolor(15, 0); printf(" ■ "); setcolor(15, 0); printf("이더리움                                    "); setcolor(15, 0); printf("%7d                  %5.2f%%\n", ETH_price, (float)ETH_price / (float)ETH_const * 100 - 100);
                    }
                    else {
                        setcolor(9, 0); printf(" ■ "); setcolor(15, 0); printf("이더리움                                    "); setcolor(9, 0); printf("%7d                  %5.2f%%\n", ETH_price, (float)ETH_price / (float)ETH_const * 100 - 100);
                    }
                }
                setcolor(15, 0);
                fflush(stdout);
                Sleep(1000);
                if (ub_thread_enter != 0) {
                    SuspendThread(EXThread);
                    goto ub_Home_KOR;
                }
            }
        }
        void ub_Deposit(); {
        ub_Deposit:

            system("cls"); system("color f0");
            setcolor(15, 1); printf("                                                                                                                        ");
            setcolor(15, 1); printf("\n      UP"); setcolor(15, 1); printf("bit  "); setcolor(8, 1); printf("   거래소    "); setcolor(15, 1); printf("입출금"); setcolor(8, 1); printf("   거래내역    코인동향    고객센터                     "); setcolor(15, 1); printf("   로그인    회원가입    국가   \n");
            setcolor(15, 1); printf("                                                                                                                        \n");
            setcolor(0, 15); printf("\n\n\t\t\t\t\t\t  카카오뱅크 7777-01-6108331\n\n\n\n");
            void EEnter4(); {
                setcolor(0, 15); printf("\t\t\t\t\t\t\t    ");
                scanf("%s", &ub_HomeEnter);
                if (strcmp(ub_HomeEnter, "거래소") == 0) {
                    Sleep(200);
                    system("cls");
                    goto ub_Exchange;
                }
                else if (strcmp(ub_HomeEnter, "UPbit") == 0) {
                    Sleep(200);
                    goto ub_Home_KOR;
                }
                else if (strcmp(ub_HomeEnter, "입출금") == 0) {
                    Sleep(200);
                    goto ub_Deposit;
                }
                else if (strcmp(ub_HomeEnter, "거래내역") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "코인동향") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "고객센터") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "로그인") == 0) {
                    Sleep(200);
                    if (ub_Login_Clear == 1) {
                        goto ub_Exchange;
                    }
                    else {
                        goto ub_Login;
                    }
                }
                else if (strcmp(ub_HomeEnter, "회원가입") == 0) {
                    Sleep(200);
                    if (ub_Login_Clear == 1) {
                        goto ub_Exchange;
                    }
                    else {
                        goto ub_Login;
                    }
                }
                else if (strcmp(ub_HomeEnter, "국가") == 0) {
                    Sleep(200);
                    /*goto ub_Deposit;*/
                }
                else if (strcmp(ub_HomeEnter, "거래소둘러보기") == 0) {
                    Sleep(200);
                    goto ub_Exchange;
                }
                else {
                    setcolor(9, 15);
                    printf("다시 입력해주세요.\n");
                    goto ub_Login;
                }
            }
        }
        void ub_TransactionDetails(); {
            //거래내역
        }
        void ub_CoinTrends(); {
            //코인동향
        }
        void ub_CustomerService(); {
            //고객센터
        }
        void ub_Nation(); {

        }
    }
}
