#include<stdio.h>
#define max 25
void main()
{
        int frag[max], b[max], f[max], i,j,nb,nf,temp,lowest=100000;
        static int bf[max], ff[max];
        printf("\n NO. OF BLOCKS");
        scanf("%d",&nb);
        printf("\nNO. OF FILES");
        scanf("%d",&nf);
        printf("\n SIZE OF BLOCKS ");
        for(i=1;i<=nb;i++)
        {
                printf("\nBLOCK %d",i);
                scanf("%d",&b[i]);
        }
        printf("\nSIZE OF FILES");
        for(i=1;i<=nf;i++)
        {
                printf("\n FILE %d",i);
                scanf("%d",&f[i]);
        }
        for(i=1;i<=nf;i++)
        {
                for(j=1;j<=nb;j++)
                {
                        if(bf[j]!=1)
                        {
                                temp=b[j]-f[i];
                                if(temp>=0)
                                        if(lowest>temp){
                                                ff[i]=j;
                                                lowest=temp;
                                        }
                        }
                }
                frag[i]=lowest;
                bf[ff[i]]=1;
                lowest=10000;
        }
        printf("\nFILE_NO\tFILE_SIZE\tBLOCK_NO\tBLOCK_SIZE\tFRAGMENT\n");
        for(i=1;i<=nf && bf[i]!=0;i++)
                printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i,f[i],ff[i],b[ff[i]],frag[i]);

}

                               
