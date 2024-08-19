

void main()
{
    int unit;
    float charge,total bill,sur_charge;
    printf("enter the unit");
    scanf("%f",&unit );


    if(unit<=50){

    charge=unit*0.50;

    }

    if(unit<=150){

    charge=25+((unit-50)*0.75);

    }

    if(unit<=250){

    charge=100+((unit-150)*1.20);

    }

    if{

    charge=220+((unit-250)*1.50);

    }

    getch();
}
