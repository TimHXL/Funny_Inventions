#include<windows.h>
#include<cstdio>
#include<iostream>
#include<conio.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0)
using namespace std;
HWND hwnd=GetForegroundWindow();
int main(){
	bool Flag=1;
	ShowWindow(hwnd,SW_MAXIMIZE);
	printf("Press [Space] to toggle Max/Min\n");
	while(1){
		if(KEY_DOWN(VK_SPACE)){
			if(Flag)
				ShowWindow(hwnd,SW_MINIMIZE);//Minimize Window 
			else
				ShowWindow(hwnd,SW_MAXIMIZE);//Maximize Window
			Flag=1-Flag;//Change Flag
			Sleep(100);
		}
		Sleep(25);
	}
	return 0;
}               
