/*
NAMA PROGRAM : EXERCISE - 01
NAMA		 : ANNE AUDISTYA FERNANDA
NPM			 : 140810180059
KELAS		 : A
TANGGAL		 : 7 MEI 2019
*/

#include<iostream>
using namespace std;

const int maxElement = 255;

struct Stack {
	char isi[maxElement];
	int TOP;
};
Stack S;

void createStack (Stack& S){
	S.TOP = -1;
}

void push(Stack& S, char elementBaru) {
	if (S.TOP == maxElement-1){
	cout<<"Tumpukan sudah penuh "<<endl;
	}
 	else{
	S.TOP=S.TOP + 1;
	S.isi[S.TOP] = elementBaru;
	}
}

void pop (Stack& S) {
	while(S.TOP != -1){
    cout<<S.isi[S.TOP]<<" ";
    S.TOP--;
	}
}

int main(){
	char elementBaru;
	int n;
	
	createStack(S);
	cout<<"Banyaknya Huruf : ";cin>>n;
 	n--; 
 	
	for(int i=0; i<=n; i++){
  	cout<<"Input : ";
  	cin>>elementBaru;
  	push(S, elementBaru);
  	}
 	
	cout<<"Output : ";
  	pop (S);
} 
