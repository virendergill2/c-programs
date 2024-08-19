int main()
{

    float salary,hra,da,gs;

    printf("enter the salary");
    scanf("%f",&salary);

    if(salary<=10000){

    hra=20/100*10000;
    da=80/100*10000;
    gs=salary+hra+da;
    }

    else if(salary<=20000){

    hra=25/100*20000;
    da=90/100*20000;
    gs=salary+hra+da;
    }

    else if(salary>20000){

    hra=30/100*20000;
    da=95/100*20000;
    gs=salary+hra+da;
    }

   return 0;


}
