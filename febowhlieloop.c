void main()
{
    int i,f1,f2,temp;

    f1=0;
    f2=1;

    printf("fabonici series");
    printf("%d%d\t",f1,f2);

    i=1;
    while(i<=8)
    {

    temp=f1+f2;
    printf("%d\t",temp);
    f1=f2;
    f2=temp;
    i++;

    }

getch();
}
