#include <stdio.h>
/*print farehenheit to celsisu table*/
#define LOWER 0 //lower limit
#define UPPER 300 //upper limit
#define STEP 20 //step size
main()
{
    //printf("hello world\n");
    /*
    float fahr, celsius;
    int lower, upper,step;
    lower=0;//lower limit of temp table
    upper=100;//upper imit of temp table
    step=1;//step size

    celsius=lower;
    printf("Conversion Table\n");
    while(celsius<=upper){
        fahr=(9.0/5.0*celsius)+32.0;
        printf("%3.0f %6.1f\n",fahr,celsius);
        celsius=celsius+step;
    }
    */
   /* int fahr;

    for (fahr=300; fahr>=0;fahr=fahr-20)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    */

   /* int fahr;

    for (fahr=LOWER; fahr<=UPPER;fahr=fahr+STEP)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    */

    //NOTE: != operator has hig5her precedence then = operator
    //EX 1-6
    printf("the value of getchar()!=EOF evaluates to %d",getchar()!=EOF);
    //EX 1-7
    printf("\nThe value of EOF is: %d",EOF);

    /////////

    /*
    Programs should act intelligently on given 0 length input
    the while and for loops ensure programs do reasonable things in
    given biundary conditions
    %0.f supresses the printing of the decimal point
    */
}
