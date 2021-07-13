#include<stdio.h>
int leapyear(int x){
    if(x%4==0){
        if(x%100==0){
            if(x%400==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}
int main()
{
    int s;
    int f,k,m,d,c;
    int day,month,year,a1,a2,a3,res,yr,i,j,z,b;
    while(1==1)
    {
        printf("Enter 1 for calendar\nEnter 2 for closing:\n");
        scanf("%d",&s);
        if(s==2)
        {
            break;
        }
        printf("\nYear:");
        scanf("%d",&year);
        printf("\nMonth:");
        scanf("%d",&month);
        printf("\n\n\t");
        
        if(s==1)
        {
            if(month==1){
                printf("\tJanuary");
            }
            else if(month==2)
            {
                printf("\tFebruary");
            }
            else if(month==3)
            {
                printf("\tMarch");
            }
            else if(month==4){
                printf("\tApril");
            }
            else if(month==5){
                printf("\tMay");
            }
            else if(month==6){
                printf("\tJune");
            }
            else if(month==7){
                printf("\tJuly");
            }
            else if(month==8){
                printf("\tAugust");
            }
            else if(month==9){
                printf("\tSeptember");
            }
            else if(month==10){
                printf("\tOctober");
            }
            else if(month==11){
                printf("\tNovember");
            }
            else if(month==12){
                printf("\tDecember");
            }
            printf("  %d\n\n",year);
            printf("  SUN   MON   TUE   WED   THU   FRI   SAT\n\n");
            if(month==1){
                m=11;
                d=(year%100)-1;
            }
            else if(month==2){
                m=12;
                d=(year%100)-1;
            }
            else{
                m=month-2;
                d=year%100;
            }
            c=year/100;
            a1=(13*m-1)/5;
            a2=d/4;
            a3=c/4;
            f=1+a1+d+a2+a3-2*c;
            if(f>=0){
            res=f%7;
            }
            else{
                res=(f%7)+7;
            }
            z=1;
            for(i=0;i<6;i++){
                if(i==0){
                    for(j=0;j<7;j++){
                        if(j==res){
                            printf("  %3d ",z);
                            res++;
                            z++;
                        }
                        else{
                            printf("      ");
                        }
                    }
                    printf("\n\n");
                }
                else{
                    for(b=0;b<7;b++){
                        if(1==leapyear(year)){
                            if(z==30 && m==12){
                                break;
                            }
                        }
                        else{
                            if(z==29 && m==12){
                                break;
                            }
                        }
                        if(z==31 && (m==2 || m==4 || m==7 || m==9)){
                            break;
                        }
                        if(z==32){
                            break;
                        }
                        printf("  %3d ",z);
                        z++;
                }
                printf("\n\n");
            }
        }
    }

    
    }
    
        
    
    
    return 0;
}