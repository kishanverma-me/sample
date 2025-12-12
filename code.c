#include<stdio.h>
double bal=0;
void checkBal(){
    printf("\nCurrent Bal : %lf",bal);
}

void deposit(){
    double m;
    printf("\nEnter ammount to deposit ");
    scanf("%lf",&m);
    bal+=m;
    printf("\nMoney Deposited successfully!!\n");
}

void withdraw(){
     double m;
     printf("\nEnter ammount to withdraw ");
     scanf("%lf",&m);
    if(m<=bal){
     bal-=m;
     printf("\nMoney Withdrawed successfully!!\n");
    }else{
        printf("\nInsufficient balance ");
    }
     

}

int main(){
    int n=1;
    printf("\nEnter 1 for Check Balance\nEnter 2 for Deposit\nEnter 3 for Withdraw\nEnter 0 for exit\n");
    while(n!=0){
        printf("\n");
        scanf("%d",&n);
        switch(n){
            case 1: checkBal();break;
            case 2: deposit();break;
            case 3: withdraw();break;
            case 0 : break;
            default: printf("\nPlease Enter valid input!");break;
        }
    }
    printf("\nThanks!");
    return 0;
}