#include <bits/stdc++.h>
#include <conio.h>
#include <fstream>
#include <windows.h>
using namespace std;
int main(){
	cout<<"YEDIT V1.0 Version";
	cout<<endl<<"(C) 2022 YURLAK"<<endl;
	Sleep(1);
	cout<<"[Press Esc to save file]"<<endl;
	string s;
	int i=0,ch;
	string ar[10001]; 
	while(1){
		if (_kbhit()){
            ch = _getch();
			if(ch==27) break;
			else 
			{
				getline(cin,s);
				ar[i]=s;
				i++;
			}
        }
	}
	string fn;
	cout<<endl<<"-------[SAVE FILE]-------"<<endl;
	Sleep(2);
	ofstream fout("YEDIT-DEMO.txt");
	if(fout){
		for(int j=0;j<=i;j++)
		{
			fout<<ar[j]<<endl;
		}	
	}
	fout.close();
	cout<<"Complete!";
	return 0;
}
