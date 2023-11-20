#include<stdio.h>
int main() {
	int n,i,j,temp;
	int choice;
	printf("nhap n ");
	scanf("%d",&n );
	int a[n];
	for (i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	do {
		printf("1.in ra mang\n");
		printf("2.insertion sort giam dan\n");
		printf("3.selection sort tang dan\n");
		printf("4.bubble sort giam dan\n");
		printf("5.thoat\n");
		printf("nhap lua chon cua ban\n");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
				for (i=0;i<n;i++) 
					printf("%d ",a[i]);
				printf("\n");
				break;
			case 2:
			    for (i = 1; i<n; i++){
					temp = a[i];
					j = i - 1;
					while(j >= 0 && a[j] < temp){
						a[j+1] = a[j];
						j = j-1;
					}			
					a[j+1] = temp;
				}
				for (i=0; i<n; i++) 
					printf("%d ", a[i]);
				printf("\n");
				break;
			case 3:
				for (int i=0; i<n-1; i++) {
					for (j=i+1; j<n; j++)
						if (a[i] > a[j]) {
		 					temp = a[i];
		 					a[i] = a[j];
		 					a[j] = temp;
		 				}
				}
				for (int i=0; i<n; i++) 
	 				printf("%d ", a[i]);
	 			printf("\n");
	 			break;
	 		case 4:
	 			for (i=0; i<n-1; i++) {
					for (j=0; j<n-i-1; j++) 
						if (a[j] < a[j+1]) {
							temp = a[j];
							a[j] = a[j+1];
							a[j+1] = temp;
						}
				}
				for (i=0; i<n; i++) 
					printf("%d ", a[i]);
				printf("\n");
				break;
			case 5:
				printf("thoat\n");
			default:
				printf("khong hop le\n");
		}
    } while (choice != 8);
}
