void main()
{
    int temp;
    printf("enter temp");
    scanf("%d",&temp);

    if(temp<10)
    printf("temp is very cold\n");

    else if(temp<20)
    printf("temp is cold\n");

    else if(temp<30)
    printf("temp is hot\n");

    else
    printf("temp is very hot");

}
