#include <iostream>
using namespace std;
#include<stdlib.h>
int place,sex,group,sum=0,j,a,b,c,d,e,f,g;
char id[10];
int main()
{
start:
system("cls");
cout<<"�O�_��:10 �O����:11 �򶩥�:12 �O�n��:13 ������:14 �s�_��:15 �y����:16 \n";
cout<<"��鿤:17 �Ÿq��:34 �s�˿�:18 �]�߿�:19 �n�뿤:21 ���ƿ�:22 �s�˥�:35 \n";
cout<<"���L��:23 �Ÿq��:24 �̪F��:27 �Ὤ��:28 �x�F��:29 ������:32 ���:30 \n";
cout<<"�s����:33 \n" ;
cout<<"�п�J�X�ͦa�N��:";
cin>>place ;
if(place>35||place<10)
 {
   cout<<"�N�����~ �Э��s��J\n";
   goto start;
 }
sexinput:
cout<<"�k��:1 �k��:2 \n";
cout<<"��J�ʧO�N��: \n";
cin>>sex;
if(sex<1||sex>2)
 {
  cout<<"�ʧO�N�����~ �Э��s��J \n";
  goto sexinput;
 }
cout<<"�п�J�üƲ��Ͳռ� \n";
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
	
