#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
using namespace std;
const int num_min=1;
const int num_max=100;
const int att_max=10;
void Init(){
	srand(static_cast<unsigned>(time(nullptr)));
	return;
}
void ShowInstructions(){
    cout<<"==================================="<<endl;
    cout<<"��ӭ������������Ϸ��"<<endl;
    cout<<"����˵����"<<endl;
    cout<<"- ϵͳ��������� "<<num_min<<"~"<<num_max<<" ֮�������"<<endl;
    cout<<"- �㹲�� "<<att_max<<" �β²����"<<endl;
    cout<<"- ÿ�������ϵͳ����ʾ��̫��/��̫С��"<<endl;
    cout<<"- ���������������Ϊ��Ч�²⣬���۳�����"<<endl;
    cout<<"==================================="<<endl;
    return;
}
int GetValidInput(){
    int guess;
    while(true){
        cout<<"��������Ĳ²⣨"<<num_min<<"~"<<num_max<<"����";
        cin>>guess;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"������Ч�����������֣�"<<endl;
            continue;
        }
        if(guess<num_min||guess>num_max){
            cout<<"���볬����Χ�����������룡"<<endl;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        return guess;
    }
}
void GuessNumbers(int tgt){
    for(int att=1;att<=att_max;att++){
        int guess=GetValidInput();
        if(guess<tgt){
            cout<<"̫С�ˣ�ʣ�������"<<(att_max-att)<<endl;
        }else if(guess>tgt){
            cout<<"̫���ˣ�ʣ�������"<<(att_max-att)<<endl;
        }else{
            cout<<"��ϲ�����ڵ� "<<att<<" �β����ˣ�"<<endl;
            return;
        }
    }
    cout<<"���ź�����δ�ܲ��С���ȷ���ǣ�"<<tgt<<endl;	
	return;
}
int main(){
    Init();
    const int tgt=rand()%num_max+num_min;
    ShowInstructions();
    GuessNumbers(tgt);
    return 0;
}
/*
git init
git add .
git commit -m "Initial commit"
git remote add origin https://github.com/Sucrostasis/Guess-Number-Game.git
git push -u origin master
*/
 


/*
#include<bits/stdc++.h>
using namespace std;

int main(){
	
	return 0;
}








*/
















































