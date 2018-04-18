#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int num;
    unsigned long long int sum;

    while(scanf("%lld",&num)!=EOF)
    {
        sum=0;

        if(num>=1)
        {
            if(num<9)
            {
                sum+=(num-1+1);
            }
            else
                sum+=9;
        }

        if(num>=10)
        {
            if(num<99)
            {
                sum+=(num-10+1)*2;
            }
            else
                sum+=180;
        }

        if(num>=100)
        {
            if(num<999)
            {
                sum+=(num-100+1)*3;
            }
            else
                sum+=2700;   //900*3
        }

        if(num>=1000)
        {
            if(num<9999)
            {
                sum+=(num-1000+1)*4;
            }
            else
                sum+=36000;   //9000*4
        }

        if(num>=10000)
        {
            if(num<99999)
            {
                sum+=(num-10000+1)*5;
            }
            else
                sum+=450000;  //90000*5
        }

        if(num>=100000)
        {
            if(num<999999)
            {
                sum+=(num-100000+1)*6;
            }
            else
                sum+=5400000;  //900000*6
        }

        if(num>=1000000)
        {
            if(num<9999999)
            {
                sum+=(num-1000000+1)*7;
            }
            else
                sum+=63000000;  //9000000*7
        }

        if(num>=10000000)
        {
            if(num<99999999)
            {
                sum+=(num-10000000+1)*8;
            }
            else
                sum+=720000000;  //90000000*8
        }

        if(num>=100000000)
        {
            if(num<999999999)
            {
                sum+=(num-100000000+1)*9;
            }
            else
                sum+=8100000000;  //900000000*9
        }
        
        if(num>=1000000000)
        {
            if(num<9999999999)
            {
                sum+=(num-1000000000+1)*10;
            }
            else
                sum+=90000000000;  //9000000000*10
        }


        printf("%llu\n",sum);

    }


  return 0;
}

