#include <stdio.h>

#ifndef MY_CLEAR_SCREEN
#define MY_CLEAR_SCREEN
  #if defined(linux) || defined(LINUX) || defined(Linux) || defined(UNIX)
  //código específico para linux
  void clear_screen() {
    system("clear");
  }
  #elif defined(WIN32) || defined(Win32) || defined(win32) || defined(WIN64) || defined(Win64) || defined(win64)
  //código específico para windows
  void clear_screen() {
    system("cls");
  }
  #else
  //sistema operacional desconhecido
  void clear_screen() {
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
  }
  #endif
#endif // MY_CLEAR_SCREEN