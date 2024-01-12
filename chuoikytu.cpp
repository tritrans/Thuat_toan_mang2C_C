#include<stdio.h>
#include<string.h>
#include<math.h>

// dem so luong tu co trong chuoi
int dsl(char* a)
{
	int n = strlen(a);
	int  dem = 0;
	if (a[0] != ' ')
	{
		dem = 1;
	}
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i] == ' ' && a[i + 1] != ' ')
		{
			dem++;
		}
	} return dem;
}
// dem so khoang trang co trong chuoi
int dskt(char* a)
{
	int n = strlen(a);
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] == ' ')
		{
			dem++;
		}
	} return dem;
}

// sap xep chuoi theo bang chu cai
void swap(char  &x, char  &y)
{
	char tmp = x;
	x = y;
	y = tmp;

}

void sapxep(char* a)
{
	int n = strlen(a);
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
// dem so lan xuat hien cua ki tu trong chuoi
int dkt(char* a)
{
	int n = strlen(a);
	int dem = 0;
	char x;
	printf("nhap vao ky tu muon dem: ");
	scanf("%s", &x);
	for (int i = 0; i < n ; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	} 
	if (dem > 0)
	{
		printf("\nki tu %c trong chuoi xuat hien %d lan ", n, dem);
	}
	if (dem == 0)
	{
		return 1;
	}
}

// viet hoa va viet thuong toan bo chuoi

void inthuong(char* a)
{
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] += 32;
		}
	}
}


void inhoa(char* a)
{
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= 'a' && a[i] <= ' z')
		{
			a[i] -= 32;
		}
	}
}
// viet hoa moi chu cai dau
void inhoachucaidau(char* a)
{
	int n = strlen(a);
	for (int i = 0; i < n; i++)
	{
		if (i==0||(i>0&& a[i-1]==' '))
		{
			if (a[i]>='a'&& a[i]<='z')
			{
				a[i] -= 32;
			}
			
		}
		else if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] += 32;
		}
	}
}

// noi 2 chuoi vs nhau
void noichuoi(char* a, char* b)
{
	
	printf("\nnhap chuoi muon chen :");
	scanf("%s", &b);
	int x = strlen(a);
	int y = strlen(b);
	int j = 0;
	for (int i = x; i < x + y; i++)
	{
		a[i] = b[j];
		j++;
	}
	a[x + y] = '\0';
}
// xoa khoang trang thua cua chuoi(chuan hoa chuoi)
void chuanhoachuoi(char* a)
{
	int n = strlen(a);
	// xoa khoang trang dau chuoi
	while (a[0] == ' ') 
	{
		for (int i = 0; i < n; i++) 
		{
			a[i] = a[i + 1];
		}
	}
	// xoa khoang trang cuoi chuoi
	while (n > 0 && a[n - 1] == ' ')
	{
		a[--n] = '\0';
	}
	// Xóa khoảng trắng thừa giữa các từ
	for (int i = 0; a[i] != '\0'; ++i)
	{
		if (a[i] == ' ' && a[i + 1] == ' ')
		{
			for (int j = i; a[j] != '\0'; ++j) 
			{
				a[j] = a[j + 1];
			}
			--i;
		}
	}
}

//Viết hàm tìm kiếm tên trong một chuỗi họ tên
void timten(char* a, char* t)
{
	printf("\nnhap ten mon tim :");
	scanf("%s", &t);
	int n = strlen(a);
	char* s;
	for (int i = n - 1; i >= 0; i--)
		if (a[i] == ' ') 
		{
			s = a + 1 + i; 
		break; 
		}
	if (strcmp(s, t) == 0)// strcmp==stricmp
		printf("%s", s);
	else
		printf("ban nhap sai ten\n");
}
char doixung(char s1[100])
{
	int i;
	int n = strlen(s1);
	for (i = 0; i < n / 2; i++)
	{
		if (s1[i] != s1[n - 1 - i])
		{
			return 0;
		}
	}
	return 1;
}

int doDaiChuoi( char* chuoi)
{
	int doDai = 0;
	while (chuoi[doDai] != '\0') {
		doDai++;
	}
	return doDai;
}

//void inhoadautu(char* a)
//{
//	int n = strlen(a);
//	if (a[0] >= 'a' && a[0] <= 'z')
//	{
//		a[0] -= 32;
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i - 1] == ' ')
//		{
//			if (a[i] >= 'a' && a[i] <= 'z') {
//				a[i] -= 32;
//			}
//		}
//		else if (a[i] >= 'A' && a[i] <= 'Z')
//		{
//			a[i] += 32;
//		}
//	}
//}
//xoa ky tu theo vi tri
void xoakitu(char* a)
{
	int vt;
	printf("nhap vao vi tri muon xoa");
	scanf("%d", &vt);
	int n = strlen(a);
	for (int i = vt; i < n-1; i++)
	{
		a[i] = a[i + 1];
	}
	a[n - 1] = '\0';

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////

void showmenu()
{
	printf("\n*****************************************************");
	printf("\n*                      MENU                         *");
	printf("\n*1. Dem so luong tu co trong chuoi                  *");
	printf("\n*2. Dem so luong khoang trang co trong chuoi        *");
	printf("\n*3. Sap xep chuoi theo bang chu cai                 *");
	printf("\n*4. Dem so luong ky tu                              *");
	printf("\n*5. Viet thuong va viet toan bo chuoi               *");
	printf("\n*6. In hoa chu cai dau cua moi tu                   *");
	printf("\n*7. Noi do dai hai chuoi                            *");
	printf("\n*8. Chuan hoa chuoi                                 *");
	printf("\n*9. In hoa dau tu                                   *");
	printf("\n*10.Xoa vi tri can xoa                              *");
	printf("\n*0. Thoat chuong trinh                              *");
	printf("\n*****************************************************");
}

int process()
{
	int t;
	char a[100];
	char b[100];
	printf("nhap vao chuoi: ");
	gets_s(a);
	printf("\nchuoi vua nhap la: ");
	puts(a);
	do
	{
		showmenu();
		printf("\nhay chon chuc nang\n");
		scanf("%d", &t);
		switch (t)
		{
		case 1:
			printf("co %d tu xuat hien trong chuoi", dsl(a));
			break;
		case 2:
			printf("co %d khoang trang xuat hien trong chuoi", dskt(a));
			break;
		case 3:
			
			sapxep(a);
			printf("ket qua sau sap xep la : %s",a);
			break;
		case 4:
            dkt(a);
			break;
		case 5:
			inthuong(a);
			printf("\nket qua sau khi in thuong la :");
			puts(a);
			inhoa(a);
			printf("\nket qua sau khi in hoa la :");
			puts(a);
			break;
		case 6:
			inhoachucaidau(a);
			printf("\nket qua sau khi in hoa chu cai dau la :");
			puts(a);
			break;
		case 7:
			noichuoi(a, b);
			printf("\nket qua sau khi noi chuoi la : %s",a);
			break;
		case 8:
			chuanhoachuoi(a);
			printf("\nket qua sau khi chuan hoa chuoi la : %s", a);
			break;
		case 9:
			inhoadautu(a);
			puts(a);
			break;
		case 10:
			xoakitu(a);
			puts(a);
			break;
		}

	} while (!0);
	return 0;
}

void main()
{
	process();
}


