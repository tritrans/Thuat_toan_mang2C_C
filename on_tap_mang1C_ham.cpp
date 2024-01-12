#include"on_tap.h"

//==================================================================================================
void inputsonguyenduong(int &n)
{
	do {
		printf("nhap so phan tu cua mang\n");
		scanf("%d", &n);
		if (n <= 0) {
			printf("vui long nhap lai\n");
		}
	} while (n <= 0);
}
//==================================================================================================
void inputmang(int *&a , int &n)
{
	inputsonguyenduong(n);
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		int tmp;
		printf("a[%d]=", i);
		scanf("%d", &tmp);
		a[i] = tmp;
	}
}
//==================================================================================================
void taorandommang(int *& a, int &n)
{
	inputsonguyenduong(n);
	a = new int[n];
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		int tmp;
		tmp = rand() % 199 - 99;//tao tu [-99,99]
		a[i] = tmp;
	}
}
//==================================================================================================
void outputmang(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
}

//==================================================================================================

void addXvaosaumax(int* &a, int &n, int &x)
{
	printf("moi nhap so muon add:");
	scanf("%d", &x);
	if (n == 0)
	{
		a[0] = x;
		(n)++;
		return;
	}
	int max=0;
	for (int i = 1; i < n; i++) {
		if (a[i] > a[max]) {
			max = i;
		}
	}
	for (int i = n - 1; i > max; i--) {
		a[i + 1] = a[i];// doi
	}
	a[max + 1] = x;
	(n)++;
}

//==================================================================================================


void addXvaosaumin(int*& a, int& n, int& x)
{
	printf("moi nhap so muon add:");
	scanf("%d", &x);
	if (n == 0)
	{
		a[0] = x;
		(n)++;
		return;
	}
	int min = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < a[min]) {
			min = i;
		}
	}
	for (int i = n - 1; i > min; i--) {
		a[i+1] = a[i];
	}
	a[min-1] = x;
	(n)++;
}
//==================================================================================================

int KTSNT (int& n)
{
	if (n < 2) return 0;// Ko la so nguyen to
	for (int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) return 0;
	} return 1;// la so nguyen to

}
//==================================================================================================

int demSNT(int*& a, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTSNT(a[i])) {
			dem++;
		}
	} return dem;

}

//==================================================================================================

int demchan(int*& a, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0) return 0;

		if (a[i] % 2 == 0) {
			dem++;
		}
	}return dem;
}

//==================================================================================================


int demle(int*& a, int& n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0) return 0;

		if (a[i] % 2 != 0) {
			dem++;
		}
	}return dem;
}

//==================================================================================================

int timvtsochan(int*& a, int& n)
{
	int vt = -1;
	for (int i = 0; i < n; i++)
	{

		if (a[i] % 2 == 0) {
			vt = i;
			printf("%d", vt);
		}
	} return 0;
	
}
//==================================================================================================


int timvtsole(int*& a, int& n)
{
	int vt = -1;
	for (int i = 0; i < n; i++)
	{

		if (a[i] % 2 != 0) {
			vt = i;
			printf("%d", vt);
		}
	} return 0;
}
///==================================================================================================


int ferfect(int& n)
{// KT so ferfect
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return 1;
	}
	return 0;
}
///==================================================================================================

void tim_and_ouput_ferfect(int*& a, int& n)
{
	for (int i = 0; i < n; i++) {
		if (ferfect(a[i]))
		{
			printf(" %d", a[i]);
		}
	}
}
//==================================================================================================

int thinhvuong(int& n)
{// KT so ferfect
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;// sum uoc so
		}
	}
	if (sum > n)
	{
		return 1;
	}
	return 0;
}
//==================================================================================================


void tim_and_ouput_thinhvuong(int*& a, int& n)
{
	for (int i = 0; i < n; i++) {
		if (thinhvuong(a[i]))
		{
			printf(" %d", a[i]);
		}
	}
}
 
//==================================================================================================


void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}

//==================================================================================================

void interchangesort(int*& a, int& n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
}

//==================================================================================================


void selestionsort(int*& a, int& n)
{
	
	for (int i = 0; i < n - 1; i++)
	{
		int max = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] > a[max]) {
				max = j;
			}
		}
		if (max != i) {
			swap(a[i], a[max]);
		}
	}
}
//==================================================================================================

void bubblesort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
			}
		}
	}
}

int demhangchusolelachan(int* a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0 && a[i] % 2 == 0)
		{
			dem++;
		}
	} return dem;
}
//==================================================================================================


int sumhangchusolelachan(int* a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0 && a[i] % 2 == 0)
		{
			sum+=a[i];
		}
	} return sum;

}
//==================================================================================================


// Tim vi tri cua so nt max trong mang
int searchvtcua_snt_max(int* a, int n)
{
	int vt = -1;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (KTSNT(a[i]) && a[i] > a[max])
		{
			a[max] = a[i];
			vt=i;
		}  
	} return vt;
}
//==================================================================================================


// Sap xep cac phan tu nho hon 10 giam dan, cac phan tu con lai giu nguyen

void sxpt_nho10(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j]&& a[i]<10)
			{
				swap(a[i], a[j]);
			}
		}
	}
}
//==================================================================================================
// Tinh tich cac so chan trong mang a khong de quy
int tichsochan_kodq(int* a, int n)
{
	int t = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			t *= a[i];
		}
	} return t;
}
//==================================================================================================
// Xuat cac phan tu co chu so 4 trong a
int kt1chuso4(int n)
{
	while (n > 0)
	{
		if ((n % 10) == 4) {
               return 1;
		}
		n/= 10;
	} 

 }
//==================================================================================================
void printfchuso4(int* a, int n)
{
	
	for (int i = 0; i < n; i++)
	{
		
		if (kt1chuso4(a[i]))
		{
			printf("Cac phan tu co chu so 4 trong mang:  %d", a[i]);
		}
		printf("\n");

	}
}

//==================================================================================================
int searchvtchiahetcho3min(int* a, int n)
{
	int vt = -1;
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 3 == 0 && a[i] < a[min])
		{
			a[min] = a[i];
			vt = i;
		} return min;
	} 
 }
//==================================================================================================
// use vong lap for
void search_vtofx(int* a, int n, int &x)
{
	int vt = 1;
	int dem = 0;
	printf("nhap vao gia tri x0 muon search :");
	scanf("%d", &x);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			vt = i;
			dem++;
		}
	}if (dem == 1)
	{
		printf("vi tri cua %d trong mang la vt so %d\n", x, vt);
    }

	else 
	{ 
		printf("vi tri cua %d khong ton tai trong mang\n", x);
	}
}
//==================================================================================================
// use vong lap while
void search_vtofx_while(int* a, int n, int& x)
{
	int vt = 1;
	int dem = 0;
	int i=0;
	printf("nhap vao gia tri x1 muon search :");
	scanf("%d", &x);
	while (i < n && a[i] != x)
	{
		i++;
	} 
	vt = i;
	dem++;
	if (dem == 1)
	{
		printf("vi tri cua %d trong mang la vt so %d", x, vt);
	}

	else
	{
		printf("vi tri cua %d khong ton tai trong mang", x);
	}
}

