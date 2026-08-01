#include<stdio.h>
int main()
{
    printf("************************************\n");//cafe name
    printf("           BUNK CAFE                \n");
    printf("------------------------------------\n");
    printf("           MENU CARD                \n");
    printf("************************************\n");
    printf("  Items                      Rate\n");
    printf(" 1. Coffee                   120\n 2. Matcha                    180\n 3.pastries                  150\n 4.Cheese cake               180\n 5.Next page\n 6.Exit \n");//menu foe users
    int order;//initialize the order selection of customer
    short int n1=0,n2=0,n3=0,n4=0,n5=0;// initialize quantity of each item
    
    printf("Select Your treat \n");
    
    do// loop for continous ordering
    
    {
     scanf("%d", &order);
     
     switch(order)
     {
        case 1:// if customer choose coffee
        {
        n1=++n1;
        if(n1>0) printf("%d Coffee is added to your cart\n", n1);
        if(n2>0) printf("%d Matcha\n", n2);
        if(n3>0) printf("%d Pastries\n", n3);
        if(n4>0) printf("%d Cheese Cake\n", n4);
        printf("\nSelect another item(1-4)\n(5) Checkout\n(6) Exit\n");//go to next order
        
        }
        break;

        case 2: // if customer choose matcha
        {
        n2=++n2;
        if(n1>0) printf("%d Coffee\n", n1);
        if(n2>0) printf("%d Matcha is added to your cart\n", n2);
        if(n3>0) printf("%d Pastries\n", n3);
        if(n4>0) printf("%d Cheese Cake\n", n4);
        printf("\nSelect another item(1-4)\n(5) Checkout\n(6) Exit\n");
        }
        break;

        case 3: {// if customer choose pastries
        n3=++n3;
        if(n1>0) printf("%d Coffee\n", n1);
        if(n2>0) printf("%d Matcha\n", n2);
        if(n3>0) printf("%d pastries is added to your cart\n", n3);
        if(n4>0) printf("%d Cheese Cake\n", n4);
        printf("\nSelect another item(1-4)\n(5) Checkout\n(6) Exit\n");
        }
        break;

        case 4:{// if customer choose cheese cake
        n4=++n4;
        if(n1>0) printf("%d Coffee\n", n1);
        if(n2>0) printf("%d Matcha\n", n2);
        if(n3>0) printf("%d Pastries\n", n3);
        if(n4>0) printf("%d Cheese cake is added to your cart\n", n4);
        printf("\nSelect another item(1-4)\n(5) Checkout\n(6) Exit\n");
        }
        break;


        case 5:{   //cart of the customer 
         printf("-------------------------\n");
         printf("    Your orders are\n");
          printf("-------------------------\n");

    if(n1 > 0)//check if coffee is ordered or not
              printf("%d - Coffee\n", n1);

    if(n2 > 0)
             printf("%d - Matcha\n", n2);

    if(n3 > 0)
             printf("%d - Pastries\n", n3);

    if(n4 > 0)
             printf("%d - Cheese Cake\n", n4);

    printf("-------------------------\n");
    
       
        printf("\n");
        printf("Click (1) to proceed to Payment\n");
        scanf("%hd", &n5);}// A variable to get and recall payment page
        break;
        default:{
        printf("Thank You, Visit Again\n");//if invalid input is given
        }

        
      }
      
    }
    while(order!=5);
    int coffeet=n1*120;// total price for item
    int matchat=n2*180;// total price for item
    int pastriest=n3*150;// total price for item
    int caket=n4*180;// total price for item
    int total=(coffeet+matchat+pastriest+caket);// total of all item

    switch(n5)
{
    case 1:
        printf("-----------Bill-----------\n");

        if(n1 > 0)
            printf("%d - Coffee        120rs\n", n1);

        if(n2 > 0)
            printf("%d - Matcha        180rs\n", n2);

        if(n3 > 0)
            printf("%d - Pastries      150rs\n", n3);

        if(n4 > 0)
            printf("%d - Cheese Cake   180rs\n", n4);

        printf("--------------------------\n");
        printf("Total        = %.2f rs\n", (float)total);
        printf("GST (18%%)    = %.2f rs\n", (float)total * 18 / 100);// gst is calculating
        printf("Grand Total  = %.2f rs\n", total + (float)total * 18 / 100);

        break;

    default:
        break;
}
    
    return 0;
}
