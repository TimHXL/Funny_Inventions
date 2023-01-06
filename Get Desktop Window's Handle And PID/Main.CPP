#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	while(TRUE) {
		HWND FrontWindowHandle;
		FrontWindowHandle = GetForegroundWindow();//Now we have the the handle of the front, activated window.
		cout << "The Front Window Handle Is: " << FrontWindowHandle << endl;
		DWORD ProcessId;
		GetWindowThreadProcessId(FrontWindowHandle, (LPDWORD)&ProcessId);//Get the PID from the handle.
		cout << "The Front Window PID Is: " << ProcessId << endl << endl;
		Sleep(100);//Delay 100ms to prevent using too much memory.
	}
}

