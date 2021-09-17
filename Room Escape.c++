#include<stdio.h>
#include<unistd.h> // 리눅스 전용
#include <stdlib.h>
#define true 1;
#define false 0;
unsigned int sleep (unsigned int scd);
#define Mainkey = false;
void Mainroom(); // 안방 //
void Bathroom(); // 화장실 //
void Kitchen(); // 주방 //
void chimdae(); // 침대 //
void Closet(); // 옷장 //
void FamilyPhoto(); // 가족사진 //
void TV(); // TV //
int Bathroomkey = 0; // 화장실 키 //
int Mainroomkey = 0; // 안방 키 //
int flash = 0; // 손전등 //
int TVRemotecontrol = 0; // TV리모컨 //


int main(void)
{

    int number;
    system("clear");
    printf("게임을 시작합니다.\n");
    sleep(2);
    system("clear");
    printf("3\n");
    sleep(2);
    system("clear");
    printf("2\n");
    sleep(2);
    system("clear");
    printf("1\n");
    sleep(2);
    system("clear");

    

    while ( 1 )
    {
        printf("1. 안방 2. 화장실 3. 주방\n");
        printf("Number : ");
        scanf("%d", &number);
       switch (number)
    {
    case 1: if(Mainroomkey == 1){
            Mainroom();
            }
            else printf("안방 키가 없습니다.\n");
            system("clear");
            break;
    case 2: if(Bathroomkey == 1){
            Bathroom();
            }
            else printf("화장실 키가 없습니다.\n");
            system("clear");
            break;
    case 3: Kitchen();
            break;

    default:
        printf("잘못 입력 !!");
        break;
    }
    }
    
    
}


    //딜레이 시간 // 
void sleep(int scd)
{
    sleep(scd);    
}

// ------------------------------------------ 안방 --------------------------------------------------------------- //

    // 안방 // 
void Mainroom()
{
    int number1;

    system("clear");
    printf("1. 침대  2. 옷장  3. 가족사진  4. TV  0. 나가기\n");
    printf("Number : ");
    scanf("%d", &number1);
    system("clear");
    while (1)
    {
        switch (number1)
        {
        case 1: chimdae();
            break;
        
        case 2: Closet();
            break;
        
        case 3: FamilyPhoto();
            break;

        case 4: TV();
            break;

        default:
            main();
        }
    }
}

    // 침대 //
void chimdae()
{
    int number, number1, number2;
        while ( 1 )
        {
            printf("1. 침대 밑을 확인한다. \n");
            printf("2. 침대를 부순다. \n");
            printf("3. 베개를 확인한다. \n");
            printf("0. 나가기\n");
            printf("Number : ");
            scanf("%d", &number);
            switch ( number )
            {
            case 1: system("clear");
                    if (flash == 0)
                    {
                        printf("어두워서 아무것도 보이지 않는다.\n");
                    }
                    else 
                    {
                        printf("신문을 발견했다. 한 번 읽어볼까..?\n");
                        printf("1. 읽어본다. 2. 읽지 않는다.");
                        printf("Number : ");
                        scanf("%d", &number2);
                    }
                    
                    
                    
                    break;
            
            case 2: system("clear");
                    printf("침대가 박살났다.\n");

                    
                    break;

            case 3: system("clear");
                    printf("1. 베개 속을 확인한다  2. 베개를 살펴본다.\n");
                    printf("Number : ");
                    scanf("%d", &number1);
                    if (number1 == 1)
                    {
                        system("clear");
                        printf("손전등을 찾았습니다.\n");
                        flash++;
                        chimdae();
                    }
                    else 
                    {
                        system("clear");
                        printf("아무것도 보이지 않네...\n");
                        chimdae();
                    }
            default: Mainroom();
            }
        }
}

    // 옷장 //
void Closet()
{
    int number, number1;
    system("clear");
    printf("1. 청바지 2. 패딩 3. 코트 0. 나가기\n");
    printf("Number : ");
    scanf("%d", &number);
    system("clear");

    while ( 1 )
    {
        switch ( number )
        {
        case 1: system("clear");
                printf("다 찢어져서 뭔지 모르겠네...");
            break;
        
        case 2: system("clear");
                printf("편지를 발견했다.");
                printf("1. 편지를 확인한다. 2. 편지를 버린다. \n");
                printf("Number : ");
                scanf("%d", &number1);

                if (number1 == 1)
                {   
                    system("clear");
                    printf("--------- 힌트 ---------\n");
                    printf("0.00일 누군가 총을 들고 따라온다.\n");
                    printf("-----------------------\n");
                }
                else if(number1 == 2)
                {
                    system("clear");
                    printf("찌직...찌지직..찢어졌다\n");
                }
                else
                {
                    printf("잘못 입력 !!");
                    break;
                }

        case 3: system("clear");
                printf("--------- 힌트 ---------\n");
                printf("ㅁ월 25알 누군가가 쳐 들어왔다.\n");
                printf("-----------------------\n");

        default: Mainroom();
        }
    }
}

    // 가족사진 //
void FamilyPhoto()
{
    int number;
    system("clear");
    printf("1. 사진을 본다. 2. 사진을 찢는다. 0. 나가기\n");
    printf("Number : ");
    scanf("%d", &number);

    if (number == 1)
    {
        system("clear");
        printf("--------- 힌트 ---------\n");
        printf("군인 아들과 어머니가 같이 찍은 사진");
        printf("-----------------------\n");
        FamilyPhoto();

    }
    else if(number == 2)
    {
        system("clear");
        printf("찌익..찌이익..");
        FamilyPhoto();
        
    }
    else if ( number == 0)
    {
        system("clear");
        Mainroom();
    }
    else 
    {
        system("clear");
        printf("입력 오류 !!");
        FamilyPhoto();
    }
    
    
}

    // TV //
void TV()
{
    int number;
    printf("1. TV를 켠다. 2. 뉴스를 본다.  3. TV를 부순다. 0. 나가기\n");
    printf("Number : ");
    scanf("%d", &number);

    while ( 1 )
    {
        if (TVRemotecontrol == 1)
        {
            switch( number )
        {
            case 1: printf("뉴스가 하잖아...?");
                    break;

            case 2: printf("앵커 : '북한의 최고 지도자 김일성이 사망하였습니다.'");
                    break;

            case 3: printf("TV에서 무언가가 나왔다.");
        }
        }
        else 
        {   
            printf("리모컨이 없잖아...!!!\n");
            break;
        }
    }
}

// --------------------------------------------------------------------------------------------------------- //


    // 화장실 //
void Bathroom()
{
  
}




// ---------------------------------------------- 주방 --------------------------------------------------- //
    // 주방 //
void Kitchen()
{
    int number, number1, number2, number3, number4;
    system("clear");
    printf("1. 가스레인지 2. 전자레인지 3. 냉장고 4. 찬장 0. 나가기\n");
    printf("Number : ");
    scanf("%d", &number);

    while ( 1 )
    {
        switch(number)
        {
            case 1: system("clear");
                    printf("1. 불을 킨다. 2. 살펴본다.\n");
                    printf("Number : ");
                    scanf("%d", &number1);
                    if (number1 == 1)
                    {
                        printf("가스 폭파로 인해 사망하셨습니다.\n");
                        Bathroomkey = 0;
                        Mainroomkey = 0;
                        flash = 0;
                        TVRemotecontrol = 0;
                        main();
                    }
                    else if (number1 == 2)                
                    {
                        printf("아무것도 발견되지 않았다.\n");
                        break;
                    }
            case 2: system("clear");
                    printf("1. 전자레인지  연다 2. 전자레인지 돌리기 \n");
                    printf("Number : ");
                    scanf("%d", &number2);
                    if (number2 == 1)
                    {
                        printf("울할머니는 1950년에 태어나셨어\n");
                    }
                    else printf("종이가 다 타버렸어 !!\n");
                    break;

            case 3: system("clear");
                    printf("1. 비타500 2. 돼지고기 3. 김치 4. 우유\n");
                    printf("Number : ");
                    scanf("%d", &number3);
                    if (number3 == 1)
                    {
                        system("clear");
                        printf("비타500을 먹고 추리력이 500 상승했다 !!\n");
                    }
                    else if (number == 2)
                    {
                        system("clear");
                        printf("상해서 먹을 수가 없겠네...\n");
                    }
                    else if (number == 3)
                    {
                        system("clear");
                        printf("너무 쉰내가 나잖아 !!\n");
                    }
                    else if (number == 4)
                    {
                        system("clear");
                        printf("우유를 마시다 보니 뭐가 나왔다...!!\n");
                        printf("화장실 키 [열쇠] 획득 !!\n");
                        Bathroomkey = 1;
                        break;
                    }
                    else break;
                    break;

                case 4: system("clear");
                        printf("1. 찬장을 열어본다. 2. 나간다\n");
                        printf("Number : ");
                        scanf("%d", &number4);
                        if (number4 == 1)
                        {
                            printf("메모지를 발견했다...!!\n");
                            sleep(2);
                            system("clear");
                            printf("한번 읽어보자\n");
                            sleep(2);
                            system("clear");
                            printf("돌아 온다고 했잖아요...왜 여기 있어요...[태극기 휘날리며]\n");
                            sleep(2);
                            printf("힌트 획득!!\n");
                        }
                case 0: main();
                        
        }
    }
    
}