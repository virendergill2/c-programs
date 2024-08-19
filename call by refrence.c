int add(int a,int b);//call by value
int sum(int *a,int *b);//call by reference
int add(int a,int b)//definition
{
    return a+b;
}
int sum(int *a,int *b)
{
    return *a+*b;

}
void main()
{
    int a=10,b=20,sum,result;
    sum=add(a,b);//call by value
    result=(&a,&b);//call by reference

}
