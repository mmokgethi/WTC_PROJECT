#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include <unistd.h>
#include <assert.h>
#include "libfts.h"

int main(void) { 
    printf("\n");
    printf("******* ft_bzero test ******* \n\n");
    /** ft_bzero **/
	char *str2 = ft_strdup("hello");
    ft_puts(str2);
	ft_bzero(str2,2);
	printf("%c\n\n", str2[4]);
    printf("***************************** \n");


    printf("\n");
    printf("*************************** ft_strcat test ********************* \n\n");
    /** ft_strcat **/
    char src[50], dest[50];
    strcpy(src,  "This is source");
    strcpy(dest, "This is destination");
    ft_strcat(dest, src);
    printf("Final destination string : |%s| \n\n", dest);
    printf("*************************************************************** \n");

    printf("\n");
    printf("******* ft_isalpha test ******* \n\n");
    /** ft_isalpha **/
    int this1 = 'd';
    int this2 = '2';
    int this3 = '\t';
    int this4 = ' ';
    
    if( ft_isalpha(this1) ) {
       printf("var1 = |%c| is an alphabet\n", this1 );
    } else {
       printf("var1 = |%c| is not an alphabet\n", this1 );
    }
   
    if( ft_isalpha(this2) ) {
       printf("var2 = |%c| is an alphabet\n", this2 );
    } else {
       printf("var2 = |%c| is not an alphabet\n", this2 );
    }
   
    if( ft_isalpha(this3) ) {
       printf("var3 = |%c| is an alphabet\n", this3 );
    } else {
       printf("var3 = |%c| is not an alphabet\n", this3 );
    }
   
    if( ft_isalpha(this4) ) {
       printf("var4 = |%c| is an alphabet\n", this4 );
    } else {
       printf("var4 = |%c| is not an alphabet\n\n", this4 );
    }
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_isascii test ******* \n\n");
    /** isascii **/
    int asss = 98;
    int assc = 300;

    if(ft_isascii(asss))
        printf("%d is an ascii value \n\n", ft_isascii(asss));
    else
        printf("%d not an ascii value \n", ft_isascii(asss));

    if(ft_isascii(assc))
        printf("%d is an ascii value \n\n", ft_isascii(assc));
    else
        printf("%d not an ascii value \n\n", ft_isascii(assc));
    
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_isdigit test ******* \n\n");
    /** isdigit **/
    int vary1 = 'h';
    int vary2 = '2';
    
    if( ft_isdigit(vary1) ) {
       printf("var1 = |%c| is a digit\n\n", vary1 );
    } else {
       printf("var1 = |%c| is not a digit\n\n", vary1 );
    }
   
    if( ft_isdigit(vary2) ) {
       printf("var2 = |%c| is a digit\n\n", vary2 );
    } else {
       printf("var2 = |%c| is not a digit\n\n", vary2 );
    }
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_toupper test ******* \n\n");
    /** toupper **/
    char *str = "Tutorial Point";
    int i = 0;

    while(str[i])
    {
        printf("%c", ft_toupper(str[i]));
        i++;
    }
    printf("\n\n");
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_tolower test ******* \n\n");
    /** tolower **/
    int j = 0;
    char *strw = "TUTORIALS POINT";
	
    while( strw[j] ) {
      putchar(ft_tolower(strw[j]));
      j++;
    }
    printf("\n\n");
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_isprint test ******* \n\n");
    /** isprint **/
    printf("Is print: %c %d\n", '\t', ft_isprint('t'));
    printf("Is print: %c %d\n", '\t', ft_isprint('\t'));
    printf("\n");
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_strlen test ******* \n\n");
    /** strlen **/
    char st[50];
    int len;

    strcpy(st, "This is tutorialspoint.com");
    len = ft_strlen(st);
    printf("Length of |%s| is |%d|\n", st, len);
    printf("\n");
    printf("***************************** \n");

    printf("\n");
    printf("******* ft_memset test ******* \n\n");
    /** memset **/
    char stry[50];

    strcpy(stry,"This is string.h library function");
    puts(stry);
    ft_memset(stry,'$',7);
    puts(stry);
    printf("\n");
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_memcpy test ******* \n\n");
    /** memcpy **/
    const char source[50] = "http://www.tutorialspoint.com";
    char dst[50];
    strcpy(dst,"Heloooo!!");
    printf("Before memcpy dest = %s\n", dst);
    ft_memcpy(dst, source, 7);
    printf("After memcpy dest = %s\n", dst);
    printf("\n");
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_strdup test ******* \n\n");
    /** strdup **/
    char *p1 = "Raja";
    char *p2;
    p2 = ft_strdup(p1);
    printf("Duplicated string is : %s\n", p2);
    printf("\n");
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_puts test ******* \n\n");
    /** puts **/
    char str1[15];
    char str3[15];

    strcpy(str1, "ihghgjgj");
    strcpy(str3, "ghgujjh");
    ft_puts(str1);
    ft_puts(str3);
    printf("\n");
    printf("***************************** \n");


    printf("\n");
    printf("******* ft_isalnum test ******* \n\n");
    /** ft_isalnum **/
   int var1 = 'd';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';
    
   if( ft_isalnum(var1) ) {
      printf("var1 = |%c| is alphanumeric\n", var1 );
   } else {
      printf("var1 = |%c| is not alphanumeric\n", var1 );
   }
   
   if( ft_isalnum(var2) ) {
      printf("var2 = |%c| is alphanumeric\n", var2 );
   } else {
      printf("var2 = |%c| is not alphanumeric\n", var2 );
   }
   
   if( ft_isalnum(var3) ) {
      printf("var3 = |%c| is alphanumeric\n", var3 );
   } else {
      printf("var3 = |%c| is not alphanumeric\n", var3 );
   }
   
   if( ft_isalnum(var4) ) {
      printf("var4 = |%c| is alphanumeric\n", var4 );
   } else {
      printf("var4 = |%c| is not alphanumeric\n", var4 );
   }

    printf("***************************** \n");

    return (0);
}
