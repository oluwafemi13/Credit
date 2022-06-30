#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int first_digit;
    int second_digit;
    int sum;
    long credit_card;
    do{
    credit_card= get_long("Enter your credit card Number Here: ");
    }
    while(credit_card<=0);

    //first digit from the rear
        int card1 = (credit_card%10);

        //second digit from the rear
    int card2 = ((credit_card%100)/10)*2;

    //third digit from the rear
    int card3=(credit_card%1000)/100;

        //fourth digit from the rear
    int card4 = ((credit_card%10000)/1000)*2;

        //fifth digit from the rear
       int card5= (credit_card%100000)/10000;

        //sixth digit from the rear
        int card6=((credit_card%1000000)/100000)*2;

        //seventh digit from the rear
       int card7= (credit_card%10000000)/1000000;

        //eitht digit from the rear
        int card8 = ((credit_card%100000000)/10000000)*2;

        //ninth digit from the rear
       int card9= (credit_card%1000000000)/100000000;

        //tenth digit from the rear
        int card10 = ((credit_card%10000000000)/1000000000)*2;

        //eleventh digit from the rear
       int card11= (credit_card%100000000000)/10000000000;

        //twelvth digit from the rear
        int card12 = ((credit_card%1000000000000)/100000000000)*2;

        //thirteenth digit from the rear
       int card13= (credit_card%10000000000000)/1000000000000;

        //fourteenth digit from the rear
        int card14 = ((credit_card%100000000000000)/10000000000000)*2;

        //fifteen digit from the rear
       int card15= (credit_card%1000000000000000)/100000000000000;

        //sixteenth digit from the rear
        int card16 = ((credit_card%10000000000000000)/1000000000000000)*2;


if(card2>9){
            first_digit=card2/10;
            second_digit=card2%10;
            sum = first_digit + second_digit;
            card2 = sum;
} if(card4>9){
            first_digit=card4/10;
            second_digit=card4%10;
            sum = first_digit + second_digit;
            card4 = sum;
} if(card6>9){
            first_digit=card6/10;
            second_digit=card6%10;
            sum = first_digit + second_digit;
            card6 = sum;
} if(card8>9){
            first_digit=card8/10;
            second_digit=card8%10;
            sum = first_digit + second_digit;
            card8 = sum;
} if(card10>9){
            first_digit=card10/10;
            second_digit=card10%10;
            sum = first_digit + second_digit;
            card10 = sum;
} if(card12>9){
            first_digit=card12/10;
            second_digit=card12%10;
            sum = first_digit + second_digit;
            card12 = sum;
} if(card14>9){
            first_digit=card14/10;
            second_digit=card14%10;
            sum = first_digit + second_digit;
            card14 = sum;
} if(card16>9){
            first_digit=card16/10;
            second_digit=card16%10;
            sum = first_digit + second_digit;
            card16 = sum;
}

//check for validity
int sum_of_numbers1 = card1+card3+card5+card7+card9+card11+card13+card15;
int sum_of_numbers2 = card2+card4+card6+card8+card10+card12+card14+card16;
int sum_of_numbers3 = sum_of_numbers1 + sum_of_numbers2;
if((sum_of_numbers3%10)!=0){
    printf("Card is INVALID");
    return 0;
    }
    // int length = 0;
    // long VISA = credit_card;
    // long american_express = credit_card;
    // long master_card = credit_card;


    // while(credit_card>0){
    //     credit_card /=10;
    //     length++;
    // }
    long american_express= credit_card/10000000000000;
    long visa13 = credit_card/1000000000000;
    long visa16 = credit_card/1000000000000000;
    long mastercard = credit_card/100000000000000;

if(american_express== 37 || american_express==34){
    printf("American Express");
}
if(visa13 == 4 || visa16 ==4){
    printf("VISA");
}

if(mastercard ==51 ||mastercard ==52 ||mastercard ==53|| mastercard ==54 ||mastercard ==55){
    printf("Mastercard");
}
}

