/*
NAMA PROGRAM : EXERCISE - 02
NAMA		 : ANNE AUDISTYA FERNANDA
NPM			 : 140810180059
KELAS		 : A
TANGGAL		 : 7 MEI 2019
*/

#include<iostream>
using namespace std;

struct Stack{
	char x;
	Stack* next;
};
  
typedef Stack* pointer;
typedef pointer List;

void createList (List& Top){
	Top=NULL;
}

void createElement(pointer& pBaru){
	pBaru=new Stack;
	cin>>pBaru->x;
}

void push(List& Top,pointer pBaru){
	if(Top==NULL){
	Top=pBaru;
	}
	else {
  	pBaru->next=Top;
  	Top=pBaru;
	}
}

void pop(List& Top){
	pointer pHapus;
	cout << Top->x;
	if(Top->next==NULL){
  	Top=NULL;
	}
 	else {
  	pHapus=Top;
  	Top=Top->next;
  	pHapus->next=NULL;
	}
}

int main(){
	int n;
	pointer pBaru;
	List Top;
	
	cout << "Banyaknya Huruf : "; cin>>n;
	
	createList(Top);
	
	for (int i=0;i<n;i++){
    cout<<"Input : ";
    createElement(pBaru);
    push(Top,pBaru);
    }
    
    cout << "Output : ";
   	for (int i=0;i<n;i++){
    pop(Top); cout << " " ;
   	}	
   	
}
