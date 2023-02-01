#include <iostream>
#include <windows.h> 
using namespace std;
int main(){
    while (1){
		HWND hWnd = GetForegroundWindow();
		CHAR wszTitle[MAX_PATH] = { 0 };
		GetWindowTextA(hWnd, wszTitle, MAX_PATH);
		cout << "Title:" << wszTitle << endl;
		Sleep(100);
	}
    return 0;
}

