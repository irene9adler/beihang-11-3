//����11�������
/*�Ӽ������������չ��'-'���ַ�����������չΪ�ȼ۵������ַ������罫a-d��չΪabcd���������չ����ַ�����
Ҫ��ֻ����[a-z]��[A-Z]��[0-9]��Χ�ڵ��ַ���չ����ֻ�е���չ��ǰ����ַ�ͬʱ��Сд��ĸ����д��ĸ������ʱ�Ž�����չ��
���������������չ��ԭ�������*/
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
    while(scanf("%s",arr)!=EOF)//���-�Ļ�pos��b��������ʱ��
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
