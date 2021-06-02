#include<stdio.h>
#include<limits.h>
#include<malloc.h>
#include<time.h>

void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}


int partition(int arr[],int l,int r){
	int p = arr[l];
	int i=l,j=r+1;
	while(1){
		while(1){
			i++;
			if(arr[i]>=p){
				break;
			}
		}
		while(1){
			j--;
			if(arr[j]<=p){
				break;
			}
		}
		swap(&arr[i],&arr[j]);
		if(i>=j){
			break;
		}
	}
	swap(&arr[i],&arr[j]);
	swap(&arr[j],&arr[l]);
	return j;
}

void quickSort(int arr[],int l,int r){
	if(l<r){
		int s = partition(arr,l,r);
		quickSort(arr,l,s-1);
		quickSort(arr,s+1,r);
	}
}

int main(){
	/*int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Array before sort\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	quickSort(arr,0,n-1);
	printf("Array after sort\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");*/

	clock_t c1,c2;
	int i,datasize=1;
	long int n=100000;
	int *a;
	printf("Clock speed = %ld\n",CLK_TCK);
	while(datasize<=10){
		a = (int *)calloc(n,sizeof(int));
		for(i=0;i<n;i++){
			a[i] = rand()%INT_MAX;
		}
		c1 = clock();
		quickSort(a,0,n-1);
		c2 = clock();
		free(a);
		if((c2-c1)!=0){
			float c = ((float)c2-(float)c1)/(float)CLK_TCK;
			printf("time taken for sorting %ld values using Quick sort = %d        %f\n",n,(c2-c1),c);
			datasize++;
		}
		n+=10000;
	}

	return 0;
}
