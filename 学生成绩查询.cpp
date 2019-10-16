#include<iostream>
#include<iomanip>
using namespace std;
struct Student{
	int number;
	char name[5];
	float score1;
	float score2;
	float sum;
};
int main(){
	Student temp;
	Student array[10];
	cout<<"请输5位学生的学号-姓名-英语成绩-高数成绩："<<endl;
	for(int i=0;i<5;i++){
		cin>>array[i].number>>array[i].name>>array[i].score1>>array[i].score2;
		array[i].sum=array[i].score1+array[i].score2;
	}
	cout<<"学号"<<setw(8)<<"姓名"<<setw(8)<<"英语"<<setw(8)<<"高数"<<endl;
	for(int j=0;j<4;j++)
		for(int i=0;i<4-j;i++)
			if(array[i].sum<array[i+1].sum)
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
	for(int i=0;i<4;i++) 
		cout<<array[i].number<<setw(8)<<array[i].name<<setw(8)<<array[i].score1<<setw(8)<<
		array[i].score2<<setw(8)<<endl;
	return 0;
}
