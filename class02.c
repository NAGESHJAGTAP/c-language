#include<stdio.h>
int main(){
//	int i =0;
//	for(i=1;i<=10;i++){
//		printf("%d\n",i);
//}
//while(i<=10){
//printf("%d\t",i);
//i++;
//}

//int i = 2;

//scanf("%d",$i);

//if(i%2 == 0){
//	printf("even");
//}else{
//	printf("odd");
//}
//for(i;i<=10;i++){
//		if(i%2 == 0){
//	
//	printf( "even %d\n ",i);
//}
//else{
//	printf("odd %d\n ",i);
//
//
//}
//}
//while(i<=10){
//	if(i%2 == 0){
//	
//	printf( "even %d\n ",i);
//}
//else{
//	printf("odd %d\n ",i);
//}
//
//i++;
//}
//
//int aray[3] = {1,2,3};
////printf("%d\n",aray[5]);
//int i =0;
//int len = sizeof(aray)/sizeof(aray[0]);
//
//for(i = 0;i<len;i++){
//	printf("%d\n",aray[i]);

int arr[7]= {4,3,2,1,7,8,6};

int i =0;
int len = sizeof(arr)/sizeof(arr[0]);
int sum = 0; 
for(i= 0;i<len;i++){
	
	sum += arr[i];
	
}
printf("%d",sum);


}





