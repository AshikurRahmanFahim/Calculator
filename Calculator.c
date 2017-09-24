#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define PI 3.141592654;
float currency;             //global variable

int factorial(int number){
    int i,answer=1;
    for(i=1;i<=number;i++){
      answer=answer*i;
    }
return answer;
}

//*******************************************************************************
//*******************************************************************************
 void currencyshow(){
        system("cls");
        system("color F5");
    printf("\n\n\t******CURRENCY CONVERTER*******");
    printf("\n   1.  US DOLLAR        -->  EURO                2. BRITISH POUND    --> EURO");
    printf("\n   3.  CANADIAN DOLLAR  -->  EURO                4. AUSTRALIAN DOLLAR--> EURO");
    printf("\n   5.  BANGLADESHI TAKA -->  EURO                6. EURO             --> BANGLADESHI TAKA");
    printf("\n   7.  BANGLADESHI TAKA -->  US DOLLAR           8. US DOLLAR        --> BANGLADESHI TAKA");
    printf("\n   9.  BANGLADESHI TAKA -->  BRITISH POUND      10. BRITISH POUND    --> BANGLADESHI TAKA");
    printf("\n  13.  BANGLADESHI TAKA -->  CANADIAN DOLLAR    12. CANADIAN DOLLAR  --> BANGLADESHI TAKA");
    printf("\n  15.  BANGLADESHI TAKA -->  AUSTRALIAN DOLLAR  14. AUSTRALIAN DOLLAR--> BANGLADESHI TAKA");
    printf("\n  17.  BANGLADESHI TAKA -->  INDIAN RUPEE       16. INDIAN RUPEE     --> BANGLADESHI TAKA");
    printf("\n  18.  BANGLADESHI TAKA -->  SPANISH PEASTA     18. SPANISH PEASTA   --> BANGLADESHI TAKA");
    printf("\n  19.  BANGLADESHI TAKA -->  SWISS FRANCE       20. SWISS FRANCE     --> BANGLADESHI TAKA");
    printf("\n  21.  BANGLADESHI TAKA -->  S.KOREAN WON       22. S.KOREAN WON     --> BANGLADESHI TAKA");
    printf("\n  23.  BANGLADESHI TAKA -->  QATAR REAL         24. QATAR REAL       --> BANGLADESHI TAKA");
    printf("\n  25.  BANGLADESHI TAKA -->  JAPANESE YEN       26. JAPANESE YEN     --> BANGLADESHI TAKA");
    printf("\n  27.  BANGLADESHI TAKA -->  NEWZELAND DOLLAR   28. NEWZELAND DOLLAR --> BANGLADESHI TAKA");
    printf("\n  29.  BANGLADESHI TAKA -->  GERMAN MARK*       30. GERMAN MARK*     --> BANGLADESHI TAKA");
    printf("\n  31.  TOPMENU\n\n");

 }
 //*******************************************************************************
//*******************************************************************************
 int us_euro(){
        system("cls");
        system("color F1");
    int n;
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f us dollar (USD) = %f EURO(EUR)\n",currency,currency*.91480);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
 }
//*******************************************************************************
//*******************************************************************************
 int ged_euro(){
    system("cls");
    system("color f5");
    int n;
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f BRITISH pound (ged) = %f EURO(EUR)\n",currency,currency*1.32786);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
 }

//*******************************************************************************
//*******************************************************************************

 int cad_euro(){
    system("cls");
    system("color f2");
    int n;

    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Canadian dollar (CAD) = %f EURO(EUR)\n",currency,currency*.64540);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
 }

//*******************************************************************************
//*******************************************************************************
 int aud_euro(){
    system("cls");
    system("color F3");
    int n;
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Australian dollar (USD) = %f EURO(EUR)\n",currency,currency*.63593);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_euro(int n1,int n2){
             system("cls");
        system("color f2");
    int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f EURO(EUR)\n",currency,currency*.01148);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f EURO(EUR) = %f Bangladeshi taka (BDT) \n",currency,currency/.01148);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }

 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_usd(int n1,int n2){
    system("cls");
    system("color f1");
  int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f USDOLLAR(USD)\n",currency,currency*.01255);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f USDOLLAR(USD) = %f Bangladeshi taka (BDT) \n",currency,currency/.01255);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_gbp(int n1,int n2){
             system("cls");
        system("color f3");
     int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f British pound(GBP)\n",currency,currency*.00864);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f British pound(GBP) = %f Bangladeshi taka (BDT) \n",currency,currency/.00864);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_cad(int n1,int n2){
             system("cls");
        system("color f1");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f CANADIAN DOLLAR(CAD)\n",currency,currency*.01778);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f CANADIAN DOLLAR(USD) = %f Bangladeshi taka (BDT) \n",currency,currency/.01778);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_aud(int n1,int n2){
             system("cls");
        system("color f1");
      int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f AUSTRALIAN DOLLAR(AUD)\n",currency,currency*.01804);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f AUSTRALIAN DOLLAR(AUD) = %f Bangladeshi taka (BDT) \n",currency,currency/.01804);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_inr(int n1,int n2){
             system("cls");
        system("color F3");
    int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f INDIAN RUPEE\n",currency,currency*.83706);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f INDIAN RUPEE = %f Bangladeshi taka (BDT) \n",currency,currency/.83706);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_esp(int n1,int n2){
             system("cls");
        system("color f4");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f SPANISH PEASTA(ESP)\n",currency,currency*1.90985);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f SPANISH PEASTA(ESP) = %f Bangladeshi taka (BDT) \n",currency,currency/1.90985);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_csf(int n1,int n2){
             system("cls");
        system("color f2");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f SWISS FRANC.(CSF)\n",currency,currency*.1248);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f SWISS FRANC.(CSF) = %f Bangladeshi taka (BDT) \n",currency,currency/.1248);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_krw(int n1,int n2){
             system("cls");
        system("color f4");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f S.KOREAN(WON)\n",currency,currency*14.6481);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f S.KOREAN(WON) = %f Bangladeshi taka (BDT) \n",currency,currency/14.6481);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_qar(int n1,int n2){
             system("cls");
        system("color F4");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f QATAR REAL(REAL)\n",currency,currency*.04567);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f QATAR REAL(REAL) = %f Bangladeshi taka (BDT) \n",currency,currency/.04567);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
 int bdt_jpy(int n1,int n2){
             system("cls");
        system("color f1");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f JAPANESE YES(YEN)\n",currency,currency*1.47);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f JAPANESE YEN(YEN) = %f Bangladeshi taka (BDT) \n",currency,currency/1.47);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
//*******************************************************************************
int bdt_nzd(int n1,int n2){
            system("cls");
        system("color f3");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f NEWZEALAND DOLLAR(NZD)\n",currency,currency*.01916);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f NEWZEALAND DOLLAR(NZD) = %f Bangladeshi taka (BDT) \n",currency,currency/.01916);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }
//*******************************************************************************
//*******************************************************************************
 int bdt_dem(int n1,int n2){
             system("cls");
        system("color f1");
 int n;
    if(n1==0){
    jump:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f Bangladeshi taka (BDT) = %f GERMAN MARK*(DEM)\n",currency,currency*.02245);
     jump2:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump2;
     }
     }
    else if(n1==1){
    jump12:
     printf("\nENTER currency ==  ");
     scanf("%f",&currency);
     printf("\n\t**%f GERMAN MARK*(DEM) = %f Bangladeshi taka (BDT) \n",currency,currency/.02245);
     jump22:
    printf("\n\n1. CHECK AGAIN \n2. CURRENCY MENU\n");
     printf("\nENTER choice ==  ");
     scanf("%d",&n);
     if(n==1){
     goto jump12;
     }
     else if(n==2){
     return 1;
     }
     else{
     printf("\n*_* enter valid option");
     goto jump22;
     }
     }
 }

//*******************************************************************************
//*******************************************************************************
 int currencyconverter(){
        int option,n;
        jump:
        currencyshow();
        printf("ENTER your choice == ");
        scanf("%d",&option);
        if(option==1){
        n=us_euro();
         if(n==1){
         goto jump;
         }
        }
        else if(option==2){
        n=ged_euro();
         if(n==1){
         goto jump;
         }
        }
        else if(option==3){
        n=cad_euro();
         if(n==1){
         goto jump;
         }
        }
        else if(option==4){
        n=aud_euro();
         if(n==1){
         goto jump;
         }
        }
        else if(option==5){
        n=bdt_euro(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==6){
        n=bdt_euro(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==7){
        n=bdt_usd(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==8){
        n=bdt_usd(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==9){
        n=bdt_gbp(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==10){
        n=bdt_gbp(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==11){
        n=bdt_cad(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==12){
        n=bdt_cad(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==13){
        n=bdt_aud(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==14){
        n=bdt_aud(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==15){
        n=bdt_inr(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==16){
        n=bdt_inr(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==17){
        n=bdt_esp(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==18){
        n=bdt_esp(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==19){
        n=bdt_csf(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==20){
        n=bdt_csf(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==21){
        n=bdt_krw(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==22){
        n=bdt_krw(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==23){
        n=bdt_qar(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==24){
        n=bdt_qar(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==25){
        n=bdt_jpy(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==26){
        n=bdt_jpy(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==27){
        n=bdt_nzd(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==28){
        n=bdt_nzd(1,0);
         if(n==1){
         goto jump;
         }
        }
        else if(option==29){
        n=bdt_dem(0,1);
         if(n==1){
         goto jump;
         }
        }
        else if(option==30){
        n=bdt_dem(1,0);
         if(n==1){
         goto jump;
         }
        }

        else if(option==31){
        return 1;
        }
        else{
        printf("\n\nenter valid option\n");
        goto jump;
        }

 }


//*******************************************************************************
//*******************************************************************************
  void unitchartshow(){

    printf("\n\n\n|----------------------|\n");
    printf("|  1.  inch -> cm.    |\n");
    printf("|  2.  cm   -> inch.  |\n");
    printf("|  3.  ft   -> m      |\n");
    printf("|  4.  m    -> ft     |\n");
    printf("|  5.  mile -> km     |\n");
    printf("|  6.  km   -> mile   |\n");
    printf("|  7.  atm  -> Pa     |\n");
    printf("|  8.  Pa   -> atm    |\n");
    printf("|  9.  km/h -> m/s    |\n");
    printf("| 10.  m/s  -> km/h   |\n");
    printf("| 11.  hp   -> kw     |\n");
    printf("| 12.  kw   -> hp     |\n");
    printf("| 13.  j    -> cal    |\n");
    printf("| 14.  cal ->  j      |\n");
    printf("| 15.  Top menu       |\n");
    printf("|---------------------|\n");
  }
//*******************************************************************************
//*******************************************************************************
int  UNITCONVERSATION(){
    int option;
    system("cls");

    printf("\n\t\t>>>>>>>>UNIT CONVERSATION<<<<<<<<<\n");
    printf("\t\t-------------------------\n");
    jump:
    system("color F9");
    unitchartshow();
    printf("\n       Enter your choice   ==> ");
    scanf("%d",&option);
    float value;
     if(option==1){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f inch =  %f centimeter",value,value*(30.48/12));
        printf("\n\n");
        goto jump;
     }
    else if(option==2){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f centimeter =  %f Inch",value,value*(12/30.48));
        printf("\n\n");
        goto jump;
     }
     else if(option==3){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f ft =  %f meter",value,value/3.28);
        printf("\n\n");
        goto jump;
     }
      else if(option==4){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
         printf("\n %f meter =  %f ft",value,value*3.28);
        printf("\n\n");
        goto jump;
     }
         else if(option==5){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f mile =  %f kilometer ",value,value*1.609344);
        printf("\n\n");
        goto jump;
     }
         else if(option==6){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f kilometer  =  %f mile ",value,value/1.609344);
        printf("\n\n");
        goto jump;
     }
         else if(option==7){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f atm =  %f*10^5 pa ",value,value*1.01325);
        printf("\n\n");
        goto jump;
     }
     else if(option==8){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f Pa =  %.3f * 10^(-5) atm ",value,value/1.01325);
        printf("\n\n");
        goto jump;
     }
    else if(option==9){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f km/h  =  %f m/s",value,value*0.0277777);
        printf("\n\n");
        goto jump;
     }
         else if(option==10){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f m/s  =  %f km/h",value,value/0.0277777);
        printf("\n\n");
        goto jump;
     }
         else if(option==11){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f Hp =  %f Kw ",value,value*1.34048);
        printf("\n\n");
        goto jump;
     }
         else if(option==12){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f Kw =  %f  Hp" ,value,value*0.746);
        printf("\n\n");
        goto jump;
     }
         else if(option==13){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f joule =  %f  cal.",value,value/4.184);
        printf("\n\n");
        goto jump;
     }
         else if(option==14){
        printf("\n   input value  ==> ");
       scanf("%f",& value);
        printf("\n %f cal. =  %f  joule ",value,value*4.184);
        printf("\n\n");
        goto jump;
     }
     else if(option==15){
        return 1;
      }

    else {
    goto jump;
    }
}
//*******************************************************************************
//*******************************************************************************
    void matrixchartshow(){

printf("\n\n\n|-----------------------------------|\n");
    printf("|  1.  Multiplication of 3*3 matrix |\n");
    printf("|  2.  Substraction of 3*3 matrix   |\n");
    printf("|  3.  Determenent of 3*3 matrix    |\n");
    printf("|  4.  Determenent of 2*2 matrix    |\n");
    printf("|  5.  Top menu                     |\n");
    printf("|-----------------------------------|\n");
    }

//*******************************************************************************
//*******************************************************************************
int MATRIX(){
    int option;
    system("cls");

    printf("\n\t\t>>>>>>>>MATRIX<<<<<<<<<\n");
    printf("\t\t-------------------------\n");
    jump:
    system("color F9");
    matrixchartshow();
    printf("\n       Enter your choice   ==> ");
    scanf("%d",&option);
    if(option==1){
      int i,j,k;
      float a[3][3],b[3][3],c[3][3];
      printf("\nEnter the A matrix\n");

      for(i=0;i<3;i++){
             for(j=0;j<3;j++){
              printf("A[%d][%d] : ",i+1,j+1);
              scanf("%f",&a[i][j]);
             }
       }
      printf("\nEnter the B matrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("B[%d][%d] : ",i+1,j+1);
            scanf("%f",&b[i][j]);
        }
     }
    printf("\nMultiplication of the 2 matrices :\n\n");
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
          c[i][j]=0;
        for(k=0;k<3;k++){
          c[i][j]+=a[i][k]*b[k][j];
        }
        printf("\t%f",c[i][j]);
       }
     printf("\n\n");
     }
     goto jump;
    }

   else if(option==2){
            int i,j;
            float a[3][3],b[3][3],c[3][3];
         printf("Enter the First matrix->");
      for(i=0;i<3;i++){
          for(j=0;j<3;j++){
          printf("\nelement of a[%d][%d] = ",i+1,j+1);
           scanf("%f",&a[i][j]);
           }
           }
      printf("\nEnter the Second matrix->");

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nelement of b[%d][%d] = ",i+1,j+1);
           scanf("%f",&b[i][j]);
           }
           }
        printf("\nThe First matrix is\n");
          for(i=0;i<3;i++){
           printf("\n");
             for(j=0;j<3;j++){
             printf("%f\t",a[i][j]);
             }
           }
  printf("\nThe Second matrix is\n");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++){
      printf("%f\t",b[i][j]);
      }
   }
   for(i=0;i<3;i++){
       for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            }
        }
       printf("\nThe Addition of two matrix is\n");
         for(i=0;i<3;i++){
           printf("\n");
          for(j=0;j<3;j++){
            printf("%f\t",c[i][j]);
           }
        }

        printf("\n\n\n");
        goto jump;
   }


  else if(option==3){
      int i,j;
      float a[4][4];
  long determinant;
  printf("Enter the 9 elements of matrix: ");
  for(i=0;i<3;i++){
      for(j=0;j<3;j++){
            printf("\nelement of a[%d][%d] = ",i+1,j+1);
           scanf("%f",&a[i][j]);
           }
           }

  printf("\nThe matrix is\n");
  for(i=0;i<3;i++){
      printf("\n");
      for(j=0;j<3;j++){
           printf("%f\t",a[i][j]);
           }
    }

  determinant = a[0][0]*((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);

  printf("\nDeterminant of 3X3 matrix: %ld",determinant);

      printf("\n\n");
      goto jump;
   }


  else if(option==4){
       int i,j;
       float a[2][2],determinant;

  printf("Enter the 4 elements of matrix: ");
  for(i=0;i<2;i++){
      for(j=0;j<2;j++){
      printf("\nElement A[%d][%d] =  ",i+1,j+1);
           scanf("%f",&a[i][j]);
       }
    }
  printf("\nThe matrix is\n");
  for(i=0;i<2;i++){
      printf("\n");
      for(j=0;j<2;j++){
           printf("%f\t",a[i][j]);
           }
  }

  determinant = a[0][0]*a[1][1] - a[1][0]*a[0][1];
  printf("\nDeterminant of 2X2 matrix: %f",determinant);
      printf("\n\n");
      goto jump;
   }


   else if(option==5){
      return 1;
   }
    else {
    printf("## enter valid option. \n\n");
    goto jump;
    }

}

//*******************************************************************************
//*******************************************************************************
   void mensurationchartshow(){
    printf("\n\n\n|----------------------|\n");
    printf("|  1.  print half pyramid as using * . \n");
    printf("|  2.  inverted half pyramid using *\n");
    printf("|  3.  print half pyramid using numbers\n");
    printf("|  4.  print pyramid using *  .\n");
    printf("|  5.  display reverse pyramid .  \n");
    printf("|  6.  Draw Pascal's triangle  .   \n");
    printf("|  7.  display Floyd's Triangle. \n");
    printf("|  8.  Top menu       . \n");
    printf("|----------------------|\n");

   }

//*******************************************************************************
//*******************************************************************************
int MENSURATION(){
    int option;
    system("cls");

    printf("\n\t\t>>>>>>>>MENSURATION<<<<<<<<<\n");
    printf("\t\t-------------------------\n");
    jump:
    system("color F9");
    mensurationchartshow();
    int i,j,rows;
    printf("\n       Enter your choice   ==> ");
    scanf("%d",&option);
    if(option==1){
      printf("Enter the number of rows: ");
      scanf("%d",&rows);
      for(i=1;i<=rows;++i)
        {
        for(j=1;j<=i;++j)
        {
           printf("* ");
        }
        printf("\n\n\n");
       }
       goto jump;
    }
     else  if(option==2){
       printf("Enter the number of rows: ");
       scanf("%d",&rows);
       for(i=rows;i>=1;--i)
        {
         for(j=1;j<=i;++j)
          {
           printf("* ");
          }
         printf("\n\n");
       }
       goto jump;
     }

    else if(option==3){
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(j=1;j<=i;++j)
        {
           printf("%d ",j);
        }
        printf("\n\n\n");
    }
    goto jump;
    }

    else if(option==4){
            int space,k=0;
        printf("Enter the number of rows: ");
        scanf("%d",&rows);
     for(i=1;i<=rows;++i)
        {
        for(space=1;space<=rows-i;++space)
         {
           printf("  ");
         }
        while(k!=2*i-1)
          {
           printf("* ");
           ++k;
          }
          k=0;
         printf("\n\n");
     }
     goto jump;
    }

  else if(option==5){
    int space;
       printf("Enter number of rows: ");
       scanf("%d",&rows);
    for(i=rows;i>=1;--i)
    {
        for(space=0;space<rows-i;++space)
           printf("  ");
        for(j=i;j<=2*i-1;++j)
          printf("* ");
        for(j=0;j<i-1;++j)
            printf("* ");
        printf("\n");
    }
    goto jump;
  }

  else if(option==6){
    int coef=1,space;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=0;i<rows;i++)
    {
        for(space=1;space<=rows-i;space++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                coef=1;
            else
               coef=coef*(i-j+1)/j;
            printf("%4d",coef);
        }
        printf("\n");
    }
   goto jump;
  }

  else if(option==7){
    int k=0;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;++j)
          printf("%d ",k+j);
        ++k;
        printf("\n");
    }
   goto jump;
  }

  else if(option==8){
      return 1;
  }
    else {
    printf("## enter valid option. \n\n");
    goto jump;
    }

}

//*******************************************************************************
//*******************************************************************************
    void physicschartshow(){

    printf("\n\n\n|----------------------|\n");
    printf("|  1.  E= mc^2         |\n");
    printf("|  2.  v=u+at          |\n");
    printf("|  3.  s=ut +(1/2)*at^2|\n");
    printf("|  4.  v^2= u^2+2as    |\n");
    printf("|  5.  g=(GM)/R^2      |\n");
    printf("|  6.  PV= nRT         |\n");
    printf("|  7.  F=ma            |\n");
    printf("|  8.  E= (1/2)mv^2    |\n");
    printf("|  9.  temp. (C->K->F) |\n");
    printf("| 10.  Top menu        |\n");
    printf("|----------------------|\n");
    }

//*******************************************************************************
//*******************************************************************************
int PHYSICS(){
    int option;
    system("cls");

    printf("\n\t\t>>>>>>>>PHYSICS<<<<<<<<<\n");
    printf("\t\t-------------------------\n");
    jump:
    system("color F9");
    physicschartshow();
    printf("\n       Enter your choice   ==> ");
    scanf("%d",&option);
    if(option==1){
            float m,c=3;
        printf("\n  Enter mass value  ,m = ");
       scanf("%f",&m);
       printf("  light speed, C=3*10^8");
       printf("\n  *** Energy, E = mc^2 = %.2f * 10^16kgm/s",m*9);
       goto jump;
    }
    else if(option==2){
            float v,u,a,t,s;
        printf("\n  Enter  value of starting velocity   ,u = ");
       scanf("%f",&u);
        printf("\n  Enter value of acceleration  ,a = ");
       scanf("%f",&a);
        printf("\n  Enter  value of time  ,t = ");
       scanf("%f",&t);
       v=u+a*t;
       s=(v*v-u*u)/2*a;
        printf("\n#### motion law , v=u+at   ");
       printf("\n## final velocity,v=%.3fm/s \n## across distance,S=  %.3fm",v,s);
        printf("\n##########\n");
       goto jump;
    }
    else if(option==3){
            float u,a,t,s;
        printf("\n  Enter  value of starting velocity   ,u = ");
       scanf("%f",&u);
        printf("\n  Enter value of acceleration  ,a = ");
       scanf("%f",&a);
        printf("\n  Enter  value of time  ,t = ");
       scanf("%f",&t);
       s=u*t+0.5*a*t*t;

        printf("\n#### motion law , s=ut +(1\2)*at^2");
       printf("\n## across distance,S=  %.3fm",s);
        printf("\n##########\n");
       goto jump;
    }
    else if(option==4){
            float v,u,a,s;
        printf("\n  Enter  value of starting velocity   ,u = ");
       scanf("%f",&u);
        printf("\n  Enter value of acceleration  ,a = ");
       scanf("%f",&a);
        printf("\n  Enter  value of distance  ,s = ");
       scanf("%f",&s);
       v=u*u+2*a*s;
       v=sqrt(v);
       printf("\n###v^2= u^2+2as ");
       printf("\n### final velocity,V=  %.3fm/s",v);
        printf("\n##########\n");
       goto jump;
    }
    else if(option==5){
            float g,G=6.7,R=6.4,M=0;
        printf("\n  Enter value of mass ,M = ");
       scanf("%f",&M);
        g=(M*G)/(R*R);
       printf("\n### g=(GM)/R^2  ");
       printf("\n### gravity acceleration, g =   %.3f*10^(-23)",g);
        printf("\n##########\n");
       goto jump;
    }
    else if(option==6){
        float p,V,n,R=8.31,t;
        printf("\n  Enter  value of  velocity(m^3)   ,V = ");
       scanf("%f",&V);
        printf("\n  Enter value of temperature(C)  ,t = ");
       scanf("%f",&t);
        printf("\n  Enter  number of mole (mol) ,n = ");
       scanf("%f",&n);
       p=n*R*(t+273)/V;
       printf("\n### pV=nRt  ");
       printf("\n### pressure, p =   %.6f Nm^(-2)",p);
        printf("\n##########\n");
       goto jump;
    }
    else if(option==7){
         float f,m,a;
        printf("\n  Enter  value of  mass (kg)   ,m = ");
       scanf("%f",&m);
        printf("\n  Enter value of  acceleration (m/s^2)  ,a  = ");
       scanf("%f",&a);
         f=m*a;
       printf("\n### F=ma  ");
       printf("\n### Force, F =   %.6f N",f);
        printf("\n##########\n");
       goto jump;

    }
    else if(option==8){
        float v,m,e;
        printf("\n  Enter  value of  mass (kg)   ,m = ");
       scanf("%f",&m);
        printf("\n  Enter value of velocity (m/s)  ,a  = ");
       scanf("%f",&v);
         e=0.5*m*v*v;
       printf("\n### E=(1/2)*m*v^2  ");
       printf("\n###  motion power, E =   %.6f kgm^2/v^2",e);
        printf("\n##########\n");
       goto jump;
    }
    else if(option==9){
        float c,k,f;
        printf("\n  Enter  value temperature(C) in celsious   ,t = ");
       scanf("%f",&c);
        k=c+273.15;
        f=(9*c/5)+32;
        printf("\n#####");
        printf("\n##temperature in Celcious scale = %f C \n##temperature in Fahrenheit scale = %f f\n## temperature in Kelvin scale = %f k",c,f,k);
        printf("\n######################\n");
       goto jump;
    }
    else if(option==10){
        return 1;
    }
    else{
            printf("\n **_** Enter Valid option.\n");
        goto jump;
    }

}
//********************************************************************************
//********************************************************************************
void divition(){                            //divition  function      [BASICFUNCTION]
    float a,b;
    printf("\n\nEnter first number   -->> ");
    scanf("%f",&a);
     printf("\n\nEnter second number   -->> ");
    scanf("%f",&b);
    printf("\nDIVITION   %f / %f = %.3f       %f / %f = %.3f   \n\n",a,b,a/b,b,a,b/a);

}
//*******************************************************************************
//*******************************************************************************
void difference(){                        //difference  function      [BASICFUNCTION]
    float a,b;
    printf("\n\nEnter first number   -->> ");
    scanf("%f",&a);
     printf("\n\nEnter second number   -->> ");
    scanf("%f",&b);
    printf("\nDIFFERENCE   %f - %f = %.6f     \n\n",a,b,a-b);

}
//*************************************************************************
//************************************************************************
void multiplication(){                                //multiplication  function      [BASICFUNCTION]
    float number[30],sum=1;
    int n,i;
    jump:
    printf("\n\n\tEnter how many number--->>>   ");
    scanf("%d",&n);
    if(n>0 && n<=30){
        for(i=0;i<n;i++){
            printf("Enter %d'th number-->>> ",i+1);
            scanf("%f",&number[i]);
         }
        for(i=0;i<n;i++){
            sum=number[i]*sum;
        }
     printf("\nmultiplication of all numbers  =  %f\n\n\n",sum);
    }
    else {
        printf("\n\n*_*You can't input more than 30'th numbers\n\n\n");
        goto jump;
    }
}
//*****************************************************************************
//*****************************************************************************
void summation(){                           //summation  function      [BASICFUNCTION]
    float number[60],sum=0;
    int n,i;
    jump:
    printf("\n\n\tEnter how many number--->>>   ");
    scanf("%d",&n);
    if(n>0 && n<=60){
        for(i=0;i<n;i++){
            printf("Enter %d'th number-->>> ",i+1);
            scanf("%f",&number[i]);
         }
        for(i=0;i<n;i++){
            sum=number[i]+sum;
        }
     printf("\nsum of all numbers  =  %f\n\n\n",sum);
    }
    else {
        printf("\n\n*_*You can't input more than 60'th numbers\n\n\n");
        goto jump;
    }
}
//******************************************************************************
//******************************************************************************
int TRIGONOMETRY(){
    float angle,number,result;
    int option;
    system("cls");
    jump:
        system("color F2");
    printf("\n\n>>>>>>>>>>>>>>sinX , cosX , tanX<<<<<<<<<<<<<<<\n");
    printf("\n*********");
    printf("\n 1. sinX");
    printf("\n 2. cosX");
    printf("\n 3. tanX");
    printf("\n 4. Basic Menu");
    printf("\n*********");
    printf("\nEnter option  ==>>");
    scanf("%d",&option);
    if(option==1){
        printf("\nInput angle, X = ");
        scanf("%f",&angle);
        result=sin(angle);
        printf("\nResult sinX = sin(%.2f) = %.6f (rad.)",angle,result);
        goto jump;
    }
    else if(option==2){
        printf("\nInput angle, X = ");
        scanf("%f",&angle);
        result=cos(angle);
        printf("\nResult cosX = cos(%.2f) = %.6f (rad.)",angle,result);
        goto jump;
    }
    else if(option==3){
        printf("\nInput angle, X = ");
        scanf("%f",&angle);
        result=tan(angle);
        printf("\nResult tanX = tan(%.2f) = %.6f (rad.)",angle,result);
        goto jump;
    }
    else if(option==4){
        return 1;
    }
    else {
        printf("\n\n\t\t*_*Enter valid option.\n");
        goto jump;
    }
}
//******************************************************************************
//******************************************************************************
int nCr_nPr(){
    int option,n,p,i,answer;
     flag:
    printf("\n\n 1.  nCr\n 2.  nPr\n 3.  Topchart\n\n");
    printf("\n\nEnter Your Choice--->>  ");
    scanf("%d",&option);
    if(option==1){
        jump:
        answer=1;
        printf("\nInput value of   n  --->>");
        scanf("%d",&n);
        printf("\nInput value of   r  --->>");
        scanf("%d",&p);

     if(n>=p){
        answer=(factorial(n)/(factorial(n-p)*factorial(p)));
        printf("\n       nCr   %dC%d  =  %d",n,p,answer);
        goto flag;
     }
       else {
            printf("\n\ninput valid data \n");
            goto jump;
        }
    }
    else if(option==2){
        int count=1,answer=1;
        jump1:
        printf("\nInput value of   n  --->>");
        scanf("%d",&n);
        printf("\nInput value of   r  --->>");
        scanf("%d",&p);
        if(n>=p){
            i=n;
        while(count<=p){
        count++;
          answer=answer*n;
          n=n-1;
        }
        printf("\n      nPr   %dP%d  =  %d",i,p,answer);
        goto flag;
        }
        else {
            printf("\n\ninput valid data \n");
            goto jump1;
        }
    }
    else if(option==3){
        return 0;
    }
    else {
        printf("\n**enter valid option  ");
        goto flag;
    }

}
//*******************************************************************************
//*******************************************************************************
int root_factorial_power(){
    int option;
    float number,answer,power;
            system("cls");
        jump:
        system("color F3");
    printf("\n\n\n\n\t\t[  X^x , root, factorial ,x-|  ]\t\n\n");
    printf("   1.  X^x\n");
    printf("   2.  root \n");
    printf("   3.  factorial \n");
    printf("   4.  x-| \n");
    printf("   5.  X^(-x) \n");
    printf("   6.  BASIC Menu");
    printf("\n\nEnter Your Choice--->>>  ");
    scanf("%d",&option);
        if(option==1){
        printf("\n\n\t    Enter value of X = ");
        scanf("%f",&number);
        printf("\n\n\t    Enter power of X , x = ");
        scanf("%f",&power);
        answer=pow(number,power);
        printf("\n\n\t\tResult %f ^ %f = %f\n",number,power,answer);
        goto jump;
     }
       else if(option==2){
           float a,b,d;
            printf("\n\n\t\tX^(a/b) ");
            printf("\n\n\tEnter value of X =  ");
            scanf("%f",&number);
            printf("\n\t\tEnter value of a =  ");
            scanf("%f",&a);
            printf("\n\t\tEnter value of b =  ");
            scanf("%f",&b);
            d=a/b;
            answer=pow(number,d);
            printf("\nResult ,X^(a/b) = %f ^(%f/%f) = %f\n",number,a,b,answer);
       }
       else if(option==3){
         int n,result;
         flag:
            printf("\n\n\t\tn! ");
            printf("\n\n\tEnter value of n =  ");
            scanf("%d",&n);
           if(n>=0){
              result=factorial(n);
              if(n>12){
                printf("\nRange not coverage.\n");
                goto jump;
              }
             else {
                printf("\n\t\tfactorial %d! = %d \n",n,result);
                goto jump;
             }
           }
           else {
                printf("*_*Factorized number can not be negetive.\n");
                goto jump;
           }

        }
        else if(option==4){
            printf("\n\n\t\tX-| \n");
            printf("\n\n\tEnter value of X =  ");
            scanf("%f",&number);
            answer=pow(number,-1);
            printf("\t\tResult ,X-| = %f-| = %f\n",number,answer);
            goto jump;
        }
        else if(option==5){
            printf("\n\n\t\tX^(-x) ");
            printf("\n\tEnter value of X =  ");
            scanf("%f",&number);
            printf("\n\tEnter value of x =  ");
            scanf("%f",&power);
            answer=pow(number,-power);
            printf("\tResult ,X^(-x) = %f(-%f) = %f\n",number,power,answer);
            goto jump;
        }

     else if(option==6){
      return 1;
     }
     else {
        printf("\nEnter valid option   \n\n");
         goto jump;
     }
}
//*******************************************************************************
//*******************************************************************************
int log_ln(){                       //log_ln   function     [topmenu]
    int option;
    float number,answer;
        jump:
    printf("\n\n\n\n\t\t[  Log ,ln , e^x  ]\t\n\n");
    printf("   1.  log\n");
    printf("   2.  ln \n");
    printf("   3.  exponent(e) \n");
    printf("   4.  Top Menu");
    printf("\n\nEnter Your Choice--->>>  ");
    scanf("%d",&option);
     if(option==1){
        printf("\n\n\tlog(X)= ?    enter X = ");
        scanf("%f",&number);
        answer=log10(number);
        printf("\n\nlog(X) = log(%f) = %f",number,answer);
        goto jump;
     }
     else if(option==2){
         printf("\n\n\tln(X)= ?    enter X = ");
        scanf("%f",&number);
        answer=log(number);
        printf("\n\nln(X) = ln(%f) = %f",number,answer);
        goto jump;
     }
     else if(option==3){
         printf("\n\n\te^X= ?    enter X = ");
        scanf("%f",&number);
        answer=exp(number);
        printf("\n\ne^X = e^%f = %f",number,answer);
        goto jump;
     }
     else if(option==4){
      return 1;
     }
     else {
        printf("\nEnter valid option   \n\n");
         goto jump;
     }

}

//******************************************************************************
//******************************************************************************
int BASICFUNCTION(){
    int option;
         system("cls");                           //BASICFUNCTION   function     [topmenu]
    jump:
    // clrscr();

        system("color F0");
    printf("\n\t>>>>>>>>>BASIC<<<<<<<<<<\n\n");
    printf("   1.  Summation\n");
    printf("   2.  Multiplication \n");
    printf("   3.  Divition \n");
    printf("   4.  Difference \n");
    printf("   5.  Log, ln , exponent (e)\n");
    printf("   6.  X^x , root, factorial ,x-1 etc.\n");
    printf("   7.  nCr , nPr \n");
    printf("   8.  Top Menu");
    printf("\n\nEnter Your Choice -->>  ");
    scanf("%d",&option);
     if(option==1){
        summation();
        goto jump;
     }
     else if(option==2){
        multiplication();
        goto jump;
     }
     else if(option==3){
        divition();
        goto jump;
     }
     else if(option==4){
     difference();
     goto jump;
     }
     else if(option==5){
     log_ln();
        goto jump;
     }
    else if(option==6){
    root_factorial_power();
    goto jump;
     }
     else if(option==7){
      nCr_nPr();
        goto jump;
     }
     else if(option==8){
      return 1;
     }
     else {
        printf("\n**Enter valid option  \n\n");
         goto jump;

     }
}
//*****************************************************************************
//*****************************************************************************
void chartshow(){                      //chartshow    function      [topmenu]
            system("cls");
        system("color F1");
    printf("\n\t\t>>>>>>>>>>>>>>>>TOP MENU<<<<<<<<<<<<<<<<<<\n\n");
    printf("   1.  BASIC \n");
    printf("   2.  PHYSICS \n");
    printf("   3.  MATRIX\n");
    printf("   4.  UNIT CONVERSATION\n");
    printf("   5.  TRIGONOMETRY \n");
    printf("   6.  MENSURATION \n");
    printf("   7.  CURRENCY CONVERTER\n");
    printf("   8.  EXIT\n\n");
}
//******************************************************************************
//******************************************************************************
void topmenu(){                               //topmenu   function       [main]
    int option,n;
    jump111:
    chartshow();
    printf("\n\nEnter Your Choice--->>>  ");
    scanf("%d",&option);
   switch(option)                              //   use of switch case
   {
   case 1:
      n=BASICFUNCTION();
      if(n==1){
        goto jump111;
      }
   case 2:
     n=PHYSICS();
      if(n==1){
      goto jump111;
      }
   case 3:
     n=MATRIX();
     if(n==1){
        goto jump111;
     }
   case 4:
     n=UNITCONVERSATION();
     if(n==1){
    goto jump111;
     }
        case 5:
     n=TRIGONOMETRY();
     if(n==1){
    goto jump111;
     }
   case 6:
    n=MENSURATION();
    if(n==1){
    goto jump111;
    }
       case 7:
    n=currencyconverter();
    if(n==1){
        goto jump111;
    }
   case 8:
       break;
   default:
       printf("\n\n\t\t*_*Enter valid option.\n\n");
    goto jump111;
   }
}
//******************************************************************************
//******************************************************************************
int main(){                                               //main  function
    printf("\n\t\t\t*********MENUAL MATH SYSTEM*********\n\n\n\n");
    topmenu();
    printf("\n\t\t\t*********THANK YOU**********\n");
return 0;
}

