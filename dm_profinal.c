#include<stdio.h>
#include<string.h>

static char A[50][50],B[50][50],D[50][50];
static int C[10]={0},E[10]={0};



main()
{int i,j,n,k,l,m,o,p,count=0,r1,one[10]={0},ek[10]={0},r2,r3,r4,r5,func1=0,ba,x=0,r6,r7,r8,r9,r10,r11,r12,r13,ek1[10]={0},count1=0,r14,y=0;

printf("how many minterms you want to enter\n");
scanf("%d",&n);

printf("enter the decimal values of minterms\n");

for(i=0;i<n;i++)
{
scanf("%s",&A[i]);
}

for(k=0;k<n;k++)
{for(l=0;l<4;l++)
	{if(A[k][l]=='1')
		one[k]++;
}
}

printf("SN   MINTERM   NOofONE\n");

for(j=0;j<n;j++)
{
printf("%d     %s      %d\n",j+1,A[j],one[j]);
}


for(m=0;m<n;m++)
{


for(o=m;o<n;o++)
  {
    strcpy(B[x],A[m]);
    count=0;



            for(p=0;p<4;p++)
            {
                if(A[m][p]==A[o][p])
                count++;
            }
            if(count==3)
            {
                for(r1=0;r1<4;r1++)
                {
                    if(A[m][r1]!=A[o][r1])
                    {B[x][r1]='_';
                    C[m]++;C[o]++;}
                }
                    x++;

            }
  }

}
for(r5=0;r5<n;r5++)
{
    if(C[r5]==0)
    {
        strcpy(B[++x],A[r5]);

    }
}



for(r2=0;r2<x;r2++)
{for(r3=0;r3<4;r3++)
	{if(B[r2][r3]=='1')
		ek[r2]++;
    }
}



printf("SN   MINTERM   NOofONE\n");

for(r4=0;r4<x;r4++)
{
printf("%d     %s      %d\n",r4+1,B[r4],ek[r4]);
}




for(r6=0;r6<x;r6++)
{
    for(r7=r6;r7<x;r7++)
    {   strcpy(D[y],B[r6]);
        count1=0;
        for(r8=0;r8<4;r8++)
        {
            if(B[r6][r8]==B[r7][r8])
                count1++;
        }
        if(count1==3)
        {
            for(r9=0;r9<4;r9++)
            {
                if(B[r6][r9]!=B[r7][r9])
                {
                    D[y][r9]='_';
                    E[r6]++;E[r7]++;
                }
            }
            y++;
        }
    }
}
for(r10=0;r10<x;r10++)
{
    if(E[r10]==0)
        strcpy(D[++y],B[r10]);

}

for(r11=0;r11<x;r11++)
{for(r12=0;r12<4;r12++)
	{if(D[r11][r12]=='1')
		ek1[r11]++;
    }
}

printf("SN   MINTERM   NOofONE\n");

for(r13=0;r13<y;r13++)
{
printf("%d     %s      %d\n",r13+1,D[r13],ek1[r13]);
}







}
