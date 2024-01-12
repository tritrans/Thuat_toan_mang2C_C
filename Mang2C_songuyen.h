
#ifndef mang2c_songuyenontap_h
#define mang2c_songuyenontap_h
//khai bao cac thu vien can dung
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
//phan tao kieu du lieu nguoi dung
typedef int ItemType;
typedef ItemType *ArrPtr;// tao array poiter
//khai bao cac nguyen mau ham

void nhapsonguyenduong(int &x);
void initArrayPoiter(ArrPtr*& a, int m, int n);//khoi tao mang con tro
void freeArrayPoiter (ArrPtr*& a, int m, int n);//giai phong bo nho cua mang con tro
void nhapmang2csonguyen(ArrPtr*&a, int &m, int &n);
void xuatmang2csonguyen(ArrPtr*a, int m, int n);
void taomang2csonguyen(ArrPtr*&a, int &m, int &n);
void docmang2csonguyen(char *fileName, ArrPtr*&a, int &m, int &n);
void timmaxdongk (ArrPtr*a, int m, int n);
void timmaxcotk(ArrPtr* a, int m, int n);
void swap(int& x, int& y);
void sxt_interchangsortdongk(ArrPtr* a,int m, int n, int k);
void sxtungdong(ArrPtr* a, int m, int n);
void sxt_interchangsortcotk(ArrPtr* a, int m, int n, int k);
void sxtungcot(ArrPtr* a, int m, int n);
void sxzinzac(ArrPtr* a, int m, int n);
void tongtungdong(ArrPtr* a, int m, int n);
void tongtungcot(ArrPtr* a, int m, int n);
void ktcotchuasole(ArrPtr* a, int m, int n);
bool ktlecotk(ArrPtr* a, int m, int n, int k);
void kttungcotchuasole(ArrPtr* a, int m, int n);
bool ktchandongk(ArrPtr* a, int m, int n, int k);
void kttungdongchuasochan(ArrPtr* a, int m, int n);
int sumduongcheochinh(ArrPtr* a, int m, int n);
int sumduongcheophu(ArrPtr* a, int m, int n);
int sumtamgiactrencheochinh(ArrPtr* a, int m, int n);
int sumtamgiacduoicheochinh(ArrPtr* a, int m, int n);
int tinhtongcotk(ArrPtr* a, int m, int n, int k);
void lietkecot_summin(ArrPtr* a, int m, int n);
int tinhtongdongk(ArrPtr* a, int m, int n, int k);
void lietkedong_summin(ArrPtr* a, int m, int n);
void sapxepcot_c(ArrPtr* a, int m, int n);
bool ktcotk(ArrPtr* a, int m, int n, int k);
void lietkecaccottang(ArrPtr* a, int m, int n);
int KTSNT(int n);
int xuat(ArrPtr* a, int m, int n);
int sumtamgiactrencheophu(ArrPtr* a, int m, int n);
int sumtamgiacduoicheophu(ArrPtr* a, int m, int n);
#endif;

