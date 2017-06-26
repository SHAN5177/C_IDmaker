#include <iostream>
using namespace std;
#include<stdlib.h>
int place,sex,group,sum=0,j,a,b,c,d,e,f,g;
char id[10];
int main()
{
start:
system("cls");
cout<<"臺北市:10 臺中市:11 基隆市:12 臺南市:13 高雄市:14 新北市:15 宜蘭縣:16 \n";
cout<<"桃園縣:17 嘉義市:34 新竹縣:18 苗栗縣:19 南投縣:21 彰化縣:22 新竹市:35 \n";
cout<<"雲林縣:23 嘉義縣:24 屏東縣:27 花蓮縣:28 台東縣:29 金門縣:32 澎湖縣:30 \n";
cout<<"連江縣:33 \n" ;
cout<<"請輸入出生地代號:";
cin>>place ;
if(place>35||place<10)
 {
   cout<<"代號錯誤 請重新輸入\n";
   goto start;
 }
sexinput:
cout<<"男生:1 女生:2 \n";
cout<<"輸入性別代號: \n";
cin>>sex;
if(sex<1||sex>2)
 {
  cout<<"性別代號錯誤 請重新輸入 \n";
  goto sexinput;
 }
cout<<"請輸入亂數產生組數 \n";
cin>>group;


for(j=1;j<=group;j++)
{
	
switch(place)
{
case 10:cout<<'A';break;
case 11:cout<<'B';break;
case 12:cout<<'C';break;
case 13:cout<<'D';break;
case 14:cout<<'E';break;
case 15:cout<<'F';break;
case 16:cout<<'G';break;
case 17:cout<<'H';break;
case 34:cout<<'I';break;
case 18:cout<<'J';break;
case 19:cout<<'K';break;
case 20:cout<<'L';break;
case 21:cout<<'M';break;
case 22:cout<<'N';break;
case 35:cout<<'O';break;
case 23:cout<<'P';break;
case 24:cout<<'Q';break;
case 25:cout<<'R';break;
case 26:cout<<'S';break;
case 27:cout<<'T';break;
case 28:cout<<'U';break;
case 29:cout<<'V';break;
case 30:cout<<'X';break;
case 31:cout<<'Y';break;
case 32:cout<<'W';break;
case 33:cout<<'Z';break;
}
a=rand()%10;
b=rand()%10;
c=rand()%10;
d=rand()%10;
e=rand()%10;
f=rand()%10;
g=rand()%10;
sum=place/10*1+place/10*9+sex*8+a*7+b*6+c*5+d*4+e*3+f*2+g*1;
cout<<sex<<a<<b<<c<<d<<e<<f<<g<<(10-sum%10)%10<<endl;

}



system("pause");
return 0;
} 
	
