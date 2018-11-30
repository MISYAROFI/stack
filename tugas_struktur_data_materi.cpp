#include <iostream>
#include <string>
using namespace std;
#define MAX_CAP 3

typedef struct {
	char nama_pemain[30];
} Pemain;


typedef struct {
	int tos;
	Pemain stack_array[MAX_CAP];
} StactRecord;

typedef StactRecord stack;

void initStack(Stack &s)
{
	s.tos = -1;
}
int isEmpty(stack s)
{
	return s.tos == -1 ;
}

int isFull(stack s)
{
	return s.tod == MAX_CAP -1;
}

Pemain whoseOnTop(stack s)
{
	return s.Stack_array[s.tos];
}

void push(Stack &s, Pemain val)
{
	if (isFull())
		cout<<"stack overflow .....";
	else {
		s.tos++;
		s.stack_array[s.tos] = val;
	}
}
Pemain pop(stack &s)
{
	Pemain temp;
	if (isEmpty())
		cout<<"stack underflow....";
	else{
		temp +s.stack_array[s.tos];
		s.tos--;
		return temp;
	}
}
void ShowStackElements(stack s)
{
	Pemain temp;
	if(isEmpty(s))
		cout<<"\nstack masih kosong.....";
	else
	{
		while (isEmpty(s))
		{
			temp = s.stack_array[s.tos];
			s.tod--;
			cout<<"\n";
			cout<<"\nNama Depan Pemain : " << temp.nama_Pemain;
		}
	}
}


int main (){
	int val, pilihan=0;
	StackmyStack;
do
{


	cout<<"1. tambahkan Pemain" <<endl;
	cout<<"2. tampilkan Pemain" <<endl;
	cout<<"3. keluar program" <<endl;
	cin>>pilih;

	if(isEmpty)
	{
		cout<<"kosong"<<endl;
	}
	else
	{
		for(int i=s.tos ; i>=0; i--)
		{
			cout<<"{"<<s.stack_array[s.tos];
		}
		cout<<endl;
	}
	cout<<endl:
	cout<<"masukkan pilihan" << endl;
	break;
	}
}while (pilihan!= 3);


