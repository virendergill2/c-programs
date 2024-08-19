void main()
{
    char str[50];
    int i;
    printf("enter the value");
    scanf("%s",str);

    for(i=50;i>0;i--){
    if (str[i]!="" || str[i]!='\0')


    printf("%c",str[i]);

    }

    printf("\n");

    getch();

}
