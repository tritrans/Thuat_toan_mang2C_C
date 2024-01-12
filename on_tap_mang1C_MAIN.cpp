#include"on_tap.h"
 
void showmenu()
{
	printf("\n*****************************************************");
	printf("\n*            SYSTEM TINH TOAN TRONG MANG 1C         *");
	printf("\n*****************************************************\n");
	printf("\n***                      MENU                     ***");
	printf("\n*1.  input mang mot chieu                           *");
	printf("\n*2.  ouput mang                                     *");
	printf("\n*3.  random mang                                    *");
	printf("\n*4.  them X vao sau max                             *");
	printf("\n*5.  them X vao truoc min                           *");
	printf("\n*6.  dem so nguyen to co trong mang                 *");
	printf("\n*7.  dem so chan le trong mang                      *");
	printf("\n*8.  search vi tri chan le trong mang               *");
	printf("\n*9.  search and ouput number ferfect                *");
	printf("\n*10. search and ouput number thinh vuong            *");
	printf("\n*11. sap xep tang dan theo interchangesort          *");
	printf("\n*12. sap xep giam dan theo selectionsort va bubble  *");
	printf("\n*13. dem vt le co so chan                           *");
	printf("\n*14. sum cac so chan o vt le                        *");
	printf("\n*15. search vt cua so nguyen to max co trong mang   *");
	printf("\n*16. sap xep giam dan cac phan tu nho hon 10        *");
	printf("\n*17. tich cac so chan khong de quy                  *");
	printf("\n*18. xuat cac phan tu co chu so la 4                *");
	printf("\n*19. tim vi tri chia het cho 3 nho nhat             *");
	printf("\n*20. tim vi tri cua x nhap tu ban phim              *");
	
	printf("\n*****************************************************\n");
}

int process()
{
	int chon=0;
    Itemtype n;
	int X;
	int *A=NULL;
	do
	{
		showmenu();
		printf("\nhay chon chuc nang: \n");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			inputmang(A, n);
			break;
		case 2:
			printf("MANG VUA TAO LA:");
			outputmang(A, n);
			break;

		case 3:
			taorandommang(A, n);

			printf("MANG VUA RANDOM LA:\n");
			outputmang(A, n);
			break;

		case 4:
			addXvaosaumax(A, n, X);
			outputmang(A, n);
			break;

		case 5:
			addXvaosaumin(A, n, X);
			outputmang(A, n);
			break;
		case 6:
			printf("co %d so nguyen to", demSNT(A, n));
			break;
		case 7:
			printf("co %d so chan va %d so le", demchan(A, n), demle(A,n));
			break;
		case 8:
			printf("vi tri so chan va le la: ");
			timvtsochan(A, n); timvtsole(A, n);
			break;
		case 9:
			printf("cac so ferfect la:");
		    tim_and_ouput_ferfect(A,n);
			break;
		case 10:
			printf("cac so thinh vuong la:");
			tim_and_ouput_thinhvuong(A, n);
			break;
		case 11:
			printf("cac so vua sap xep theo thuat toan interchangesort: ");
			interchangesort(A, n);
			outputmang(A, n);
			break;
		case 12:
			printf("cac so vua sap xep giam dan theo thuat toan selectionsort:\n ");
			selestionsort(A, n);
			outputmang(A, n);
			printf("\ncac so vua sap xep tang dan theo thuat toan bubblesort: \n");
			bubblesort(A, n);
			outputmang(A, n);
			break;
		case 13:
			printf("co %d o vt le co so chan ", demhangchusolelachan(A,n));
			break;
		case 14:
			printf("sum cac so chan o vt le la: %d ", sumhangchusolelachan(A, n));
			break;
		case 15:
			printf("ket qua search: %d ", searchvtcua_snt_max(A,n));
			break;
		case 16:
			printf("ket qua sx: \n");
			sxpt_nho10(A, n);
			outputmang(A, n);
			break;
		case 17:
			printf("tich cac so chan la: %d \n", tichsochan_kodq(A,n));
			break;
		case 18:
			printfchuso4(A, n);
			break;
		case 19:
			printf("vi tri chia het cho 3 trong mang la: %d", searchvtchiahetcho3min(A, n));
			break;
		case 20:
			search_vtofx(A, n, X);
			search_vtofx_while(A, n, X);
			break;
			
		}
	}
    while (!0);
	return 0;
}


int main()
{
	process();
 return 0;
}