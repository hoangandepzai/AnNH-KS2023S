#include <stdio.h>
#include <stdlib.h> 
int main(){
	int numbers[100], i, k, j, n, choice, sum=0, a, b;
	
	do{
		printf("************************MENU**************************\n");
		printf("1.Nhap gia tri n phan tu cua mang (n nhap ta ban phim)\n");
		printf("2.In gia tri cac phan tu trong mang\n");
		printf("3.Tinh trung binh các phan tu duong (>0) trong mang\n");
		printf("4.In ra vi tri (chi so) các phan tu co gia tri bang k trong mang (k nhap tu ban phim)\n");
		printf("5.Su dung thuat toan sap xep noi bot sap xep mang giam dan\n");
		printf("6.Tinh so luong cac phan tu là so nguyen to trong mang\n");
		printf("7.Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan, cac phan tu còn lai o giua mang theo thu tu tang dan\n");
		printf("8.Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep giam dan) dung vi tri\n");
		printf("9.Thoat\n");
		printf("chon so: ");
		scanf("%d", &choice);
		
		switch (choice) {
			case 1:
        	printf("Nhap so luong phan tu: ");
        	scanf("%d", &n);

        for ( i = 0; i < n; i++) {
        	printf("nhap gia tri phan tu thu %d: ", i + 1);
        	scanf("%d", &numbers[i]);
        }
        	break;
        	
        	case 2:
        for (int i = 0; i < n; i++) {
        	printf("%d ", numbers[i]);
        }
        	printf("\n");
        break;
        
        	case 3:
		for(i=0;i<n;i++){
			if(numbers[i]%2==0&&numbers[i]>0){
				printf("numbers[%d]=%d\t",i ,numbers[i]);
				sum+=numbers[i]	;
		}
	}
		printf("tong cac so la: %d\n", sum);
		break;
		
	case 4:
		int k;
		printf("nhap k :");
		scanf("%d",&k);
		for(i=0;i<sizeof(numbers)/sizeof(int);i++){
			if(numbers[i]==k){
		printf("number[%d]=%d", i, numbers[i]);
			}
		}
		printf("\n");
		break;
		
		case 5:
 	 for (int i=0;i<n-1;i++){
   	 for(int j=0;j<n-i-1;j++){
      if (numbers[j]>numbers[j+1]){
        int temp = numbers[j];
        numbers[j] = numbers [j+1]; 
        numbers[j+1] = temp;
      }
    }
  }
	  printf("Mang sau khi da sap xep tang dan:\n"); 
	  for (i=0;i<n;i++){
	    printf("%d\t", numbers[i]);
	  }
		break;
		case 6:
			sum=0;
	for (i=0;i<n;i++){
		b=0;
		for(a=2;a<numbers[i];a++){
			if(numbers[i]%a==0){
				b=1;
				continue;
			}
		}
		if(b==0){
			sum++;
		}
	}
	printf("so luong so nguyen to la:%d\n",sum);
	break;
	
		case 9:
				exit(0);
			default:
				printf("Khong hop le");
	}
		} while(choice!=9);
}

