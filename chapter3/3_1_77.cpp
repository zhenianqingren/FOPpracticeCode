//������ƻ���ϰ�⼯��3��ѭ���������3.1������ϰ��77��
//��д��������������е�ǰ100������еĵ�һ��Ϊ0���ڶ���Ϊ1
//�Ժ��������Ϊ��ǰ����֮�ͣ�ż����Ϊ��ǰ����֮��

#include<stdio.h>

int main(){
	int n=100;//������Ҫ���������������Ϊ100
	int a[n+1];//�����洢�����е�ǰn��
	int i;//���������Ԫ���±� 
	a[0]=0;
	a[1]=1;
	for(i=3;i<=n;++i){
		if(i%2==1){
			//�����������
			a[i-1]=a[i-2]+a[i-3];//������Ϊ��ǰ����֮�� 
		}
		else if(i%2==0){
			//�����ż����
			a[i-1]=a[i-2]-a[i-3];//ż����Ϊ��ǰ����֮�� 
		} 
	}
	
	for(i=0;i<n;++i){
		printf("The nubmer of a[%d] is %d.\n",i+1,a[i]);
		//���������ǰn�� 
	}
	return 0; 
} 