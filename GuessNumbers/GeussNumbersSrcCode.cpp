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
    cout<<"欢迎来到猜数字游戏！"<<endl;
    cout<<"规则说明："<<endl;
    cout<<"- 系统已随机生成 "<<num_min<<"~"<<num_max<<" 之间的整数"<<endl;
    cout<<"- 你共有 "<<att_max<<" 次猜测机会"<<endl;
    cout<<"- 每次输入后，系统会提示「太大」/「太小」"<<endl;
    cout<<"- 输入非数字内容视为无效猜测，不扣除次数"<<endl;
    cout<<"==================================="<<endl;
    return;
}
int GetValidInput(){
    int guess;
    while(true){
        cout<<"请输入你的猜测（"<<num_min<<"~"<<num_max<<"）：";
        cin>>guess;
        if(cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"输入无效，请输入数字！"<<endl;
            continue;
        }
        if(guess<num_min||guess>num_max){
            cout<<"输入超出范围，请重新输入！"<<endl;
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
            cout<<"太小了！剩余次数："<<(att_max-att)<<endl;
        }else if(guess>tgt){
            cout<<"太大了！剩余次数："<<(att_max-att)<<endl;
        }else{
            cout<<"恭喜！你在第 "<<att<<" 次猜中了！"<<endl;
            return;
        }
    }
    cout<<"很遗憾，你未能猜中。正确答案是："<<tgt<<endl;	
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
















































