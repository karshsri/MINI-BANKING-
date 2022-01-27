#include<stdio.h> 
#include<conio.h> 
void creation(); 
void deposit(); 
void withdraw(); 
void lowbal(); 
int a=0,i = 1001; 
struct bank 
{ 
        int no; 
        char name[20]; 
        float bal; 
        float dep; 
}s[100]; 
        int main() 
       { 
        int ch; 
        do 
        {  
        	printf("\n*********************"); 
            printf("\n BANKING "); 
            printf("\n*********************"); 
            printf("\n1. Create New Account"); 
            printf("\n2. Cash Deposit "); 
            printf("\n3. Cash Withdraw"); 
            printf("\n4. Low Balance Enquiry"); 
            printf("\n5. Exit"); 
            printf("\nEnter your choice : "); 
            scanf("%d",&ch); 
            switch(ch) 
            { 
              case 1: creation(); 
                 break; 
              case 2: deposit(); 
            	 break; 
              case 3: withdraw(); 
                 break; 
              case 4: lowbal(); 
                 break; 
             case 5: 
			 	  break; 
                defalut: printf("Choice a Valid option !!"); 
            getch(); 
            } 
        }while(ch!=5); 
      } 
      
      
      
    void creation() 
        { 
        printf("\n*************************************"); 
        printf("\n NEW ACCOUNT CREATION "); 
        printf("\n*************************************"); 
        printf("\nCreate Your account number ");
        scanf("%d",&s[a].no); 
        printf("\nYour Account Number is :%d",s[a].no); 
        printf("\nEnter your Name: "); 
        scanf("%s",s[a].name); 
        printf("\nYour Deposit is Minimum Rs.500"); 
        s[a].dep=500; 
        a++; 
        i++; 
        getch(); 
        } 




        
    void deposit() 
    { 
        int no,b=0,m=0; 
        float aa; 
        printf("\n*************************************"); 
        printf("\n CASH DEPOSIT "); 
        printf("\n*************************************"); 
        printf("\nEnter your Account Number : "); 
        scanf("%d",&no); 
        for(b=0;b<s[a].no;b++) 
        { 
        	if(s[b].no == no) 
        	m = b; 
        } 
        if(s[m].no == no) 
        { 
        printf("\n Account Number : %d",s[m].no); 
        printf("\n Name : %s",s[m].name); 
        printf("\n Deposit : %f",s[m].dep); 
        printf("\n Deposited Amount : "); 
        scanf("%f",&aa); 
        s[m].dep+=aa; 
        printf("\nThe Balance in Account is :%f",s[m].dep); 
        getch(); 
        } 
        else 
        { 
        printf("\nACCOUNT NUMBER IS INVALID"); 
        getch(); 
        } 
    } 





    
    void withdraw() 
         { 
        int no,b=0,m=0; 
        float aa; 
        printf("\n*************************************"); 
        printf("\n CASH WITHDRAW "); 
        printf("\n*************************************"); 
        printf("\nEnter your Account Number : "); 
        scanf("%d",&no); 
        for(b=0;b<s[a].no;b++) 
        { 
           if(s[b].no == no) 
           m = b; 
        } 
        if(s[m].no == no) 
             { 
                printf("\n Account Number : %d",s[m].no); 
        	    printf("\n Name : %s",s[m].name); 
                printf("\n Deposit : %f",s[m].dep); 
                printf("\n Withdraw Amount : "); 
                scanf("%f",&aa); 
                if(s[m].dep<aa+500) 
            	   { 
                        printf("\nCANNOT WITHDRAW YOUR ACCOUNT HAS MINIMUM BALANCE"); 
                    	getch(); 
                    } 
               else 
                   { 
                  s[m].dep-=aa; 
                  printf("\nThe Balance Amount in Account is:%f",s[m].dep); 
                    } 
            } 
            else 
            { 
              printf("INVALID"); 
              getch(); 
            } 
            getch(); 
          }


 
    void lowbal() 
          { 
                  int no,b=0,m=0; 
                  float aa; 
                 
                  for(b=0;b<a;b++)
                  
                  {
                    if(s[b].dep>1000) 
                    { 
                        printf("\n\n Account Number : %d",s[b].no); 
                        printf("\n Name : %s",s[b].name);
                       printf("\nBalance Amount = %f", s[b].dep);
                    } 
                      else
                      {
                           printf("\n*************************************"); 
                  printf("\n FOLLOWING ACCOUNT HOLDER'S BALANCE IS LESS THAN 1000 ");
                  printf("\n*************************************");
                  printf("\nBalance Amount = %f", s[b].dep);
                      }
            }
		}

