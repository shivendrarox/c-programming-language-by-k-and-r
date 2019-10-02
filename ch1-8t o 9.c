#include<stdio.h>
/*
Ex 1-8
main()
{
    int c, nl, nb, nt;
    nl=nb=nt=0;
    while((c=getchar())!=EOF){
        if(c=='\n')
            ++nl;
        if(c==' ')
            ++nb;
        if(c=='\t')
            ++nt;
    }
    printf(" %d\n %d\n %d\n",nl,nb,nt);
}
*/

main()
{
    int c, n;
    n=0;
    while((c=getchar())!=EOF){
       if((c=getchar())==' '){
            if((c=getchar())==' ')
                printf("\b");
            putchar(c);
       }
    }
}

