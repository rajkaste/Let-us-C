#include<stdio.h>

typedef struct date
{
    int date,month,year;

}Date;

void show(Date d){
    printf("\nDate: %d/%d/%d\n", d.date, d.month, d.year);
}

int dateComp(Date d1,Date d2){
    if(d1.year > d2.year){
        return 1;
    }
    if (d1.year < d2.year)
    {
        return -1;
    }
    if (d1.month > d2.month)
    {
        return 1;
    }
    if (d1.month < d2.month)
    {
        return -1;
    }
    if (d1.date > d2.date)
    {
        return 1;
    }
    if (d1.date < d2.date)
    {
        return -1;
    }
    return 0;
}

int main() {

    Date d1 = {4,10,1999};
    Date d2 = {29,11,2000};

    show(d1);
    show(d2);
    int a  = dateComp(d1,d2);
    printf("\nDate comparison: %d\n",a);

    return 0;
}