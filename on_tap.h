#ifndef on_tap_h
#define on_tap_h

#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define MAX_SIZE 100
typedef int Itemtype;
void inputsonguyenduong(int &n);
void inputmang(int *&a, int &n);
void taorandommang(int*& a, int &n);
void outputmang(int *a, int n);
void addXvaosaumax(int* &a, int &n, int &x);
void addXvaosaumin(int*& a, int& n, int& x);
int KTSNT (int& n);
int demSNT(int*& a, int& n);
int demchan(int*& a, int& n);
int demle(int*& a, int& n);
int timvtsochan(int*& a, int& n);
int timvtsole(int*& a, int& n);
int ferfect(int& n);// kt so hoan hao cua 1 so ( chia re tri)
void tim_and_ouput_ferfect(int*& a, int& n);
int thinhvuong(int& n);
void tim_and_ouput_thinhvuong(int*& a, int& n);
void swap(int& x, int& y);
void interchangesort(int*& a, int& n);
void selestionsort(int*& a, int& n);
int demhangchusolelachan(int* a, int n);
int sumhangchusolelachan(int* a, int n);
int searchvtcua_snt_max(int* a, int n);
void sxpt_nho10(int* a, int n);
int tichsochan_kodq(int* a, int n);
int kt1chuso4(int n);
void printfchuso4(int* a, int n);
int searchvtchiahetcho3min(int* a, int n);
void search_vtofx(int* a, int n, int &x);
void search_vtofx_while(int* a, int n, int& x);
void bubblesort(int* a, int n);
#endif;