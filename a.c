/**
=========================================================================
 Author: shangshipe
 Email: shangshipei@163.com
 File Name: a.c
 Description: (C)  2013-05  shang
   
 Edit History: 
   2013-05-15    File created.
=========================================================================
**/
int calendar[12][31];
int calenda1r[12][31];
int (*monthp)[31];
int a;
int b;
int c;
int j;
int r;
int e;
int d;
int k;
main()
{
        for (monthp = calendar; monthp < &calendar[12]; monthp++){
                int *dayp;
                for (dayp = *monthp; dayp<&(*monthp)[31]; dayp++)
                        *dayp = 0;
        }
}
                
