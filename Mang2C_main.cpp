#include"mang2c_songuyenontap.h"

void showmenu()
{
	printf("\n*****************************************************");
	printf("\n*                      MENU                         *");
	printf("\n*1. nhap so nguyen duong                            *");
	printf("\n*2.  Tao ma tran ngau nhien                         *");
	printf("\n*3.  Load mang ma tran                              *");
	printf("\n*4.  Xem mang ma tran                               *");
	printf("\n*5.  search gia tri max tung dong                   *");
	printf("\n*6.  search gia tri max tung cot                    *");
	printf("\n*7.  sap xep tung dong tang dan                     *");
	printf("\n*8.  sap xep tung cot tang dan                      *");
	printf("\n*9.  sap xep ZINZAC tang dan                        *");
	printf("\n*10. tong tung dong                                 *");
	printf("\n*11. tong tung cot                                  *");
	printf("\n*12. tim so le trong ma tran                        *");
	printf("\n*13. xuat cot chua so le trong ma tran              *");
	printf("\n*14. xuat cot chua so chan trong ma tran            *");
	printf("\n*15. sum tren duong cheo chinh                      *");
	printf("\n*16. sum tren duong cheo phu                        *");
	printf("\n*17. sum tren tam giac (tren) duong cheo chinh      *");
	printf("\n*18. sum tren tam giac (duoi) duong cheo chinh      *");
	printf("\n*19. Liet ke cac cot co tong nho nhat               *");
	printf("\n*20. Liet ke cac dong co tong nho nhat              *");
	printf("\n*21. sap xep gia tri cac pt tren cot c              *");
	printf("\n*22. liet ke cac cot co gia tri tang dan            *");
	printf("\n*23. xuat tong cua tam giac duoi la SNT tren DCP    *");
	printf("\n*24. sum tren tam giac tren duong cheo phu          *");
	printf("\n*25. sum tren tam giac duoi duong cheo phu          *");
	printf("\n*****************************************************");
}

int process()
{
	int chon;
	
	int M,N;
	ArrPtr *A=NULL;
	char infilename[] = "test.txt";
	do
	{
		showmenu();
		printf("\nBan hay chon functions(1-25):\n");
		scanf("%d", &chon);
		switch (chon)
		{
		case 1:
			printf("bn hay nhap so nguyen duong:");
			nhapsonguyenduong(N);
			printf("so nguyen duong vua nhap la:%d", N);
			break;
		case 2:
			taomang2csonguyen(A,M,N);
			printf("MA TRAN VUA TAO LA:\n");
			xuatmang2csonguyen(A,M,N);
			break;
		 case 3:
		 	docmang2csonguyen(infilename, A,M,N);
		 	printf("MA TRAN VUA TAO LA:");
		 	xuatmang2csonguyen(A,M,N);
		 	break;
		case 4:
			printf("MA TRAN VUA TAO LA:");
			xuatmang2csonguyen(A,M,N);
			break;
		case 5:
			timmaxdongk(A, M, N);
			break;
		case 6:
			timmaxcotk(A, M, N);
			break;
		case 7:
			sxtungdong(A, M, N);
			printf("MA TRAN VUA SAP XEP TANG DAN THRO TUNG DONG LA:\n");
			xuatmang2csonguyen(A, M, N);
			break;
		case 8:
			sxtungcot(A, M, N);
			printf("MA TRAN VUA SAP XEP TANG DAN THRO TUNG COT LA:\n");
			xuatmang2csonguyen(A, M, N);
			break;
		case 9:
			sxzinzac(A, M, N);
			printf("MA TRAN VUA SAP XEP TANG DAN THEO ZINZAC:\n");
			xuatmang2csonguyen(A, M, N);
			break;
		case 10:
			
			tongtungdong(A, M, N);
			
			break;
		case 11:
			tongtungcot(A, M, N);
			
			break;
		case 12:
			ktcotchuasole(A, M, N);

			break;
		case 13:
			kttungcotchuasole(A, M, N);

			break;
		case 14:
			
			kttungdongchuasochan(A, M, N);
			break;
		case 15:

			printf("sum tren duong cheo chinh la: %d", sumduongcheochinh(A, M, N));
			
			break;
		case 16:

			printf("sum tren duong cheo phu la: %d", sumduongcheophu(A, M, N));

			break;
		case 17:

			printf("sum tren tam giac tren duong cheo chinh la: %d", sumtamgiactrencheochinh(A,M,N));

			break;
		case 18:

			printf("sum tren tam giac duoi duong cheo chinh la: %d", sumtamgiacduoicheochinh(A, M, N));

			break;
		case 19:

		 lietkecot_summin(A, M, N);

			break;
		case 20:

			lietkedong_summin(A, M, N);

			break;
		case 21:

			sapxepcot_c(A, M, N);
			printf("MA TRAN VUA SAP XEP TANG DAN THEO COT C:\n");
			xuatmang2csonguyen(A, M, N);
			break;
		case 22:

			lietkecaccottang(A, M, N);

			break;
		case 23:
			printf(" tong tam giac duoi la SNT tren duong cheo phu la : %d",xuat(A, M, N));

			
			break;
		case 24:

			printf("sum tren tam giac tren duong cheo phu la: %d", sumtamgiactrencheophu(A, M, N));

			break;
		case 25:

			printf("sum tren tam giac duoi duong cheo phu la: %d", sumtamgiacduoicheophu(A, M, N));

			break;
		
		}

	} while (!0);
	freeArrayPoiter(A, M, N);
	return 0;
}

void main()
{
	process();

}
