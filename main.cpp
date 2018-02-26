//北航11年第三题
/*从键盘输入包含扩展符'-'的字符串，将其扩展为等价的完整字符，例如将a-d扩展为abcd，并输出扩展后的字符串。
要求：只处理[a-z]、[A-Z]、[0-9]范围内的字符扩展，即只有当扩展符前后的字符同时是小写字母、大写字母或数字时才进行扩展，
其它情况不进行扩展，原样输出。*/
#include <stdio.h>
#include <string.h>
#define M 300
#define N 26
int check(char c)
{
    if((c<='z')&&(c>='a')) return 1;
    else if((c<='Z')&&(c>='A')) return 2;
    else if ((c<='9')&&(c>='0')) return 3;
    return 0;
}
int main()
{
    char arr[M];
    char b[N];
    int l;
    int pos;
    int i,j;
    int m;
    while(scanf("%s",arr)!=EOF)//多个-的话pos和b数组是临时的
    {
        m = strlen(arr);
        for(i=0;i<m;i++)
        {
            if(arr[i]!='-') printf("%c",arr[i]);
            else //if(arr[i]=='-')
            {
                if(check(arr[i-1])==check(arr[i+1]))
                {
                    pos = i;
                    l = arr[i+1]-arr[i-1]+1;
                    for(j=1;j<l-1;j++)
                        //b[j] = arr[i-1]+j;
                        printf("%c",arr[i-1]+j);
                }
                else printf("-");

            }
        }

    }
    return 0;
}
