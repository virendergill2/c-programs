int main()
{
 int phy,chem,bio,math,comp;
 float total,per;

 printf("enter the mraks of subjects");
 scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
 total=phy+chem+bio+math+comp;
 printf("total marks=%d\n");

 per=(total/500)*100;
 printf("per=%f\n",per);

 if(per>=90)
 {
     printf("grade A");
 }

else if(per>=80)
{
     printf("grade B");
}

else if(per>=70)
{
     printf("grade C");
}

else if(per>=60)
{
     printf("grade D");
}

else if(per>=40)
{
     printf("grade E");
}

else
{
     printf("grade F");
}
return 0;
}
