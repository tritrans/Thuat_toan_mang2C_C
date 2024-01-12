#include"mang2c_songuyenontap.h"

void nhapsonguyenduong(int &x)
{
	
	do
	{
		scanf("%d", &x);
		if (x <= 0)
			printf("nhap sai r. vui long nhap lai:");

	} while (x<=0);

}
///////////////////////////////////////////////////////////////////////////////////////////////
void initArrayPoiter(ArrPtr*& a, int m, int n)
{
	a = new ArrPtr[m * sizeof(ItemType)];
	for (int i = 0; i < m; i++)
	{
		*(a+i) = new ItemType[n * sizeof(ItemType)];

	}
}
///////////////////////////////////////////////////////////////////////////////////////////////

void freeArrayPoiter(ArrPtr*& a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		delete* (a + i);
	}
	delete a;
}
///////////////////////////////////////////////////////////////////////////////////////////////

void nhapmang2csonguyen(ArrPtr*&a, int &m, int &n)
{
	printf("ban hay cho biet so dong cua mang:");
	nhapsonguyenduong(m);
	printf("ban hay cho biet so cot cua mang:");
	nhapsonguyenduong(n);
	initArrayPoiter(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ItemType tmp;
			printf("nhap a[%d][%d]=", i,j);
			scanf("%d", &tmp);
			a[i][j] = tmp;
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////

void taomang2csonguyen(ArrPtr*&a, int &m, int &n)
{
	printf("ban hay cho biet so dong cua mang:");
	nhapsonguyenduong(m);
	printf("ban hay cho biet so cot cua mang:");
	nhapsonguyenduong(n);
	initArrayPoiter(a, m, n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ItemType tmp;
			tmp = rand() % 199 - 99;//tao mot so nguyen tu [-99,99] 
			a[i][j] = tmp;
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////

void docmang2csonguyen(char *filename, ArrPtr*&a, int &m, int &n)
{
	FILE *fi = fopen(filename, "rt");//read text
	if (!fi)
	{
		printf("loi mo file: %s", filename);
		_getch();
		return;
	}
	fscanf(fi, "%d%d\n", &m, &n);
	initArrayPoiter(a, m, n);
	srand((unsigned)time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ItemType tmp;
			fscanf(fi, "%d", &tmp);
			a[i][j] = tmp;
		}
	}
	fclose(fi);
}

///////////////////////////////////////////////////////////////////////////////////////////////

void xuatmang2csonguyen(ArrPtr* a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n\n");
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////

void timmaxdongk(ArrPtr* a, int m, int n)
{
	printf("GIA TRI MAX CUA TUNG DONG LA : \n");
	for (int i = 0; i < m; i++)
	{
		int maxk = a[i][0];

		for (int j = 1; j < n; j++)
		{
			if (a[i][j] > maxk)
			{
				maxk = a[i][j];
			}
		} printf(" %d", maxk);
		printf("\n");
	}
	
}
///////////////////////////////////////////////////////////////////////////////////////////////

void timmaxcotk(ArrPtr* a, int m, int n)
{
	printf("GIA TRI MAX CUA TUNG COT LA : \n");
	for (int j = 0; j < n; j++)
	{
		int maxk = a[0][j];

		for (int i = 1; i < m; i++)
		{
			if (a[i][j] > maxk)
			{
				maxk = a[i][j];
			}
		} printf(" %d", maxk);
		printf("\n");
	}

}
///////////////////////////////////////////////////////////////////////////////////////////////
void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;
}
///////////////////////////////////////////////////////////////////////////////////////////////

void sxt_interchangsortdongk(ArrPtr* a,int m, int n, int k)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[k][i] > a[k][j])
			{
				swap(a[k][i], a[k][j]);
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////

void sxtungdong(ArrPtr* a, int m, int n)
{
	for (int j = 0; j < n; j++) 
	{
		sxt_interchangsortdongk(a, m, n, j);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////
void sxt_interchangsortcotk(ArrPtr* a, int m, int n, int k)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][k] > a[j][k])
			{
				swap(a[i][k], a[j][k]);
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////
void sxtungcot(ArrPtr* a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		sxt_interchangsortcotk(a, m, n, i);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////

void sxzinzac(ArrPtr* a, int m, int n)
{
	int sopt = m * n;
	for (int i = 0; i < sopt; i++)
	{
		for (int j = i + 1; j < sopt; j++)
		{
			if (a[i / n][i % n] > a[j/ n][j % n])
			{
				swap(a[i / n][i % n], a[j / n][j % n]);
			}
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////

void tongtungdong(ArrPtr* a, int m, int n)
{
	printf("TONG GIA TRI TUNG DONG LA:\n");
	for (int i = 0; i < m; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
		printf("%5d", sum);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////

void tongtungcot(ArrPtr* a, int m, int n)
{
	printf("TONG GIA TRI TUNG COT LA:\n");

	for (int j = 0; j < n; j++)
	{
		int sum = 0;
		for (int i = 0; i < m; i++)
		{
			sum += a[i][j];
		}
		printf("%5d", sum);
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////

// Kiem tra ma tran co bao nhieu phan tu le  (xet theo cot)

void ktcotchuasole(ArrPtr* a, int m, int n)
{
	printf("CAC SO LE TRONG MA TRAN: \n");
	int dem = 0;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			if (a[i][j] % 2 != 0) 
			{
				printf("%5d", a[i][j]);
				dem++;
			}
		}
    }
	if (dem == 0) printf(" khong co phan tu le");
} 

// Xuat cac cot chi chua so le
bool ktlecotk(ArrPtr* a, int m, int n, int k)
{
	for (int i = 0; i < m; i++)
	{
		if (a[i][k] % 2 != 0)
		{
			return true;
		}
	} 
	return false;
}

void kttungcotchuasole(ArrPtr* a, int m, int n)
{
	printf("CAC COT CHUA SO LE TRONG MA TRAN: \n");
	int dem = 0;
	
		for (int j = 0; j < n; j++)
		{
			if (ktlecotk(a,m,n,j)==true)
			{
				printf("%5d", j);
				dem++;
			}
		}
	
	if (dem == 0) printf(" khong co cot chua so le");
}

// Xuat cac dong chi chua so chan 
bool ktchandongk(ArrPtr* a, int m, int n, int k)
{
	for (int j = 0; j < n; j++)
	{
		if (a[k][j] % 2 == 0) return true;
	}
	return false;
}
//////////////////////////////////////////////////////////////////////////////////////
void kttungdongchuasochan(ArrPtr* a, int m, int n)
{
	printf("CAC DONG CO SO CHAN TRONG MA TRAN LA\n");
	int dem = 0;

	for (int i = 0; i < m; i++)
	{
		if (ktchandongk(a, m, n, i) == true)
		{
			printf("%5d", i);
			dem++;
		}
	} if (dem == 0) printf(" Khong co dong nao chan!");
}
//////////////////////////////////////////////////////////////////////////////////////

int sumduongcheochinh(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
			sum += a[i][i];
		
	} return sum;
}

//////////////////////////////////////////////////////////////////////////////////////

int sumduongcheophu(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += a[i][m - 1 - i];

	} return sum;
}
//////////////////////////////////////////////////////////////////////////////////////




// Liet ke cac cot co tong nho nhat trong ma tran
int tinhtongcotk(ArrPtr* a, int m, int n, int k)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += a[i][k];
	}
	return sum;
}
//////////////////////////////////////////////////////////////////////////////////////

void lietkecot_summin(ArrPtr* a, int m, int n)
{
	int min = 0;
	int minj = tinhtongcotk(a, m, n, min);
	for (int j = 1; j < n; j++)
	{
		int x = tinhtongcotk(a, m, n, j);
			if (x < minj)
			{  
				minj = x;
				min = j;
				
		    }
	}
	printf("cac cot co tong nho nhat: %d , gia tri min = %d ", min+1, minj);
}
//////////////////////////////////////////////////////////////////////////////////////

int tinhtongdongk(ArrPtr* a, int m, int n, int k)
{
	int sum = 0;
	for (int j = 0; j < n; j++)
	{
		sum += a[k][j];
	}
	return sum;
}
//////////////////////////////////////////////////////////////////////////////////////

void lietkedong_summin (ArrPtr* a, int m, int n)
{
	int min = 0;
	int mini = tinhtongdongk(a, m, n, min);
	for (int i = 1; i < m; i++)
	{
		int s = tinhtongdongk(a, m, n, i);
		if (s < mini)
		{
			mini = s;
			min = i;
		}
	}
	printf("cac dong co tong nho nhat: %d, gia tri min = %d", min+1, mini);
}

//

void sapxepcot_c(ArrPtr* a, int m, int n )
{
	int c;
	printf("cot can sap xep la:");
	scanf("%d", &c);
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i][c] > a[j][c]) {
				swap(a[i][c], a[j][c]);
			}
		}
	}
}

//Liệt kê các cột chứa giá trị tang dần

////////////////////////////////////////////////////////////////////////////////
bool ktcotk(ArrPtr* a, int m, int n, int k) 
{
	
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < m; j++)
		{
			if (a[i][k] < a[j][k])
			{
				return true;
			}
		}
		
	}
	return false;
}
////////////////////////////////////////////////////////////////////////////////

void lietkecaccottang(ArrPtr* a, int m, int n)
{
	printf("cac cot co gia tri tang dan :");
	int dem = 0;
	for (int j = 0; j < n; j++)
	{
		
			if (ktcotk(a, m, n, j)==true)
			{
				printf(" %d ", j);
				dem++;
			}
		
	}
	if (dem == 0) printf("khong co cot nao tang ");
}
//////////////////////////////////////////////////////////////////////////////////
//Xuất ra tổng giá trị các phần tử là số nguyên tố trong tam giác dưới của đường chéo phụ

int KTSNT(int n)
{
	if (n < 2) return 0;
	for (int i = 2; i <=sqrt(n); i++)
	{
		if (n % i == 0) return 0;
	} return 1;
}

int xuat(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = m-i; j < m; j++)
		{
			if (KTSNT(a[i][j]) == 1)
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}

//Xuất ra tổng giá trị các phần tử là số nguyên tố trong tam giác tren của đường chéo phụ
int xuattgt(ArrPtr* a, int m, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (  (KTSNT(a[i][j]) == 1) )
			{
				sum += a[i][j];
			}
		}
	}
	return sum;
}

// tam giac tren cua duong cheo chinh
int sumtamgiactrencheochinh(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}
//////////////////////////////////////////////////////////////////////////////////////


// tam giac duoi cua duong cheo chinh
int sumtamgiacduoicheochinh(ArrPtr* a, int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < i; j++)
		{
			sum += a[i][j];
		}
	}
	return sum;
}

// tam giac tren cua duong cheo phu 
int sumtamgiactrencheophu(ArrPtr* a, int m, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1-i; j++) {
			
				sum += a[i][j];
			
		}
	}
	return sum;
}

// tam giac duoi cua duong cheo phu 

int sumtamgiacduoicheophu(ArrPtr* a, int m, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = n - i; j < n; j++) {
			
				sum += a[i][j];
			
		}
	}
	return sum;
}
