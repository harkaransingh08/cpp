// #include <stdio.h>
// /* Include other headers as needed */
// int main()
// {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int n;
//     scanf("%d",&n);
//     int sum ;
//     int total = 0;
//     for(int i = 1 ; i <= n ; i++){
//         scanf("%d",&sum);
//         while(sum>0){
//             total += sum%10;
//             sum = sum/10;
//         }
//         printf("%d",total);
//     }
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int n ,digit,prime;
//     scanf("%d",&n);

//     while(n>0){
//         prime = 0;
//         digit = n%10;
//         prime = digit
//     }
    
    
//     return 0;
// }





// #include <stdio.h>

// int main()
// {
//     int n , highest = 0 , lowest = 100 , passed = 0 , sum = 0;
//     float average;
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
//         int marks;
//         scanf("%d",&marks);

//         if (marks>highest)
//         {
//             highest = marks;
//         }
//         else if (lowest>marks)
//         {
//             lowest = marks;
//         }
//         sum = sum+marks;
//         if (marks>40)
//         {
//             passed++;
//         }
//         average = (float)sum / n;

//     printf("%d %d %d %.2f", passed, highest, lowest, average);
        
        
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int n = 34567;
//     int rev = 0;
//     while (n>0)
//     {
//         int digit = n%10;
//         rev = rev*10+digit;
//         n /= 10;
//     }
//     printf("%d",rev);
    
    
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int n , digit = 0 , IsPrime = 0;
//     scanf("%d",&n);
//     while (n>0)
//     {
//         digit = n%10;
//            if (digit == 2 || digit == 3|| digit == 5|| digit == 7)
//            {
//                 IsPrime++;
//            } 
//         n /= 10;
//     }
//     printf("%d",IsPrime);
    
//     return 0;
// }




// #include <stdio.h>

// int main()
// {
//     int n , digit , fact = 1;
//     scanf("%d",&n);
//     while (n>0)
//     {
//         digit = n%10;
//         fact *= digit;
//         n /= 10;
//     }
//     printf("%d",fact);
    
//     return 0;
// }





// #include <stdio.h>

// int main()
// {
//     int n, digit, check = 1;
//     scanf("%d", &n);

//     int prev = n % 10;
//     n = n / 10;

//     while (n > 0)
//     {
//         digit = n % 10;

//         if (digit >= prev)
//         {
//             check = 0;
//             break;
//         }

//         prev = digit;
//         n = n / 10;
//     }

//     if (check == 1)
//         printf("YES");
//     else
//         printf("NO");

//     return 0;
// }




#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < 2*5; i++)
    {
        for (int j = 0; j < 2*5; j++)
        {
            printf(" ");
            if (i+j==n)
            {
                printf("&");
            }
            else if (i-j==n)
            {
                printf("&");
            }
             else if (j-i==n)
            {
                printf("&");
            }
            else if (j+i==3*n-2) 
            {
                printf("&");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
        
    }
    
    return 0;
}



// for (int j = n; j > i; j--)
//         {
//             printf("*");
            
//         }


// #include <stdio.h>

// int main()
// {
//     int n =5;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             if ((i+j)%2 == 0)
//             {
//                 printf("0");
//             }
//             else{
//                 printf("1");
//             }
            
            
//         }
//         printf("\n");
        
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int n = 5;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//                 printf("%d",j);
//         }
//         printf("\n");
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = i; j <= 5; j++)
//         {
//                 printf("%d",j);
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// #include <stdio.h>

// int main()
// {
//     int n = 4;

//     for (int i = 0; i < 2*n; i++)
//     {
//         for (int j = 1; j <= 2*n; j++)
//         {
//             if (i < n)
//             {
//                 if (j <= i || j >= 2*n-i)
//                 {
//                     printf("%d", j);
//                 }
//                 else
//                 {
//                     printf(" ");
//                 }
//             }
//             else
//             {
//                 if (j <= 2*n-i || j >= i+1)
//                 {
//                     printf("%d", j);
//                 }
//                 else
//                 {
//                     printf(" ");
//                 }
//             }
//         }

//         printf("\n");
//     }

//     return 0;
// }



































