#include <stdio.h>
int main() {
    int c,u,cl;
    double ec,fc,ed,total;
    printf("1  : Domestic \n2  : Commercial\n3  : Public Workship \n4  : Govt Colonies \n5  : Cottage & Tiny Industries \n6  : Power Looms \n7  : Temporary Supply \n8  : Town Water & Light \n9 : Govt Institution/Hostel \n10 : Privare Institution/Hostel \nEnter your choice: ");
    scanf("%d",&c);
    printf("Enter Unit Consumption as per Electricity Board : ");
    scanf("%d",&u);
    printf("Connected Load : ");
    scanf("%d",&cl);
    printf("\n\n\n");
    switch (c) {
        case 1: {
            if (u<100) {
                ec=0;
                fc=0;
            }
            else if (u<200) {
                ec=1.5*(u-100);
                fc=20;
                ed=(float)u/10;
            }
            else if (u<500) {
                ec=2*(100)+3*(u-200);
                fc=30;
                ed=(float)u/10;
            }
            else if (u>500) {
                ec=3.5*(100)+4.6*(300)+6.6*(u-500);
                fc=50;
                ed=(float)u/10;
            }
            break;
        }
        case 2: {     
            fc=140*cl;
            ed=(float)u/10;
            if (u<=100) {
                ec=5*u;
            }
            else {
                ec=100*5+(u-100)*8.05;
            }
            break;
        }
        case 3: {
            fc=120*cl;
            if (u<=120) {
                ec=2.85*u;
            }
            else {
                ec=120*2.85+(u-120)*5.75;
            }
            break;
        }
        case 4: {
            fc=120;
            ec=4.6*u;
            break;
        }
        case 5: {
            fc=40*cl;
            if (u<=500) {
                    ec=u*4;
            }
            else {
                ec=500*4+300+(u-500)*4.6;
            }
            break;
        }
        case 6: {
            fc=70*cl;
            if (u<=750) {
                ec=0;
            }
            else if (u<=1000) {
                ec=(u-750)*2.3;
            }
            else if (u<=1500) {
                ec=250*2.3+(u-1000)*3.45;
            }
            else {
                ec=250*2.3+500*3.45+(u-1500)*4.6;
            }
            break;
        }
        case 7: {
            fc=cl*690;
            ec=12*u;
            break;
        }
        case 8: {
            fc=cl*120;
            ec=6.35*u;
            break;
        }
        case 9: {
            fc=cl*120;
            ec=5.75*u;
            break;
        }
        case 10: {
            fc=cl*120;
            ec=7.5*u;
            break;
        }
        default: {
            printf("Invalid choice. Please choose again");
        }
    }
    total=ec+fc;
    printf("Total Energy Charge           :  %.2f\n",ec);
    printf("Fixed Charges Amount          :  %.2f\n",fc);
    printf("Electricity Duty Amount       :  %.2f\n",ed);
    printf("\n\n");
    printf("Total Bill Amount             :  %.2f\n",total);
    return 0;
}