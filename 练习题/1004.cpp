#include<stdio.h>
int main()
{
    int n,i;    
    int shuzu[54];    //ʹ������������ÿһ������� 
    while(~scanf("%d",&n)){       // ʵ�ֲ�ͣ�Ľ��������������һ�����һ�Ρ�ʹ��Ctrl+z���س��˳� 
        if(n==0){        //�������Ϊ0ʱ�˳� 
            break;
        }
        shuzu[0]= 1;    // �ȶ���ǰ��������
        shuzu[1]= 2;
        shuzu[2]= 3;
        for (i=3;i<54;i++){
            shuzu[i]=shuzu[i-1]+shuzu[i-3];   //����������ݵ����� 
        }
        printf("%d\n",shuzu[n-1]);   //ע��������±��Ǵ�0��ʼ�� 
    }
}
