//使用蔡勒定理解决最大金币
#include<stdio.h>
int main(){
	printf("输入这2个金币的面额，用空格隔开\n");
	int a,b;
	scanf("%d %d",&a,&b);
	int max_unpayable=a*b-a-b;
	printf("%d",max_unpayable);
	return 0;
}
