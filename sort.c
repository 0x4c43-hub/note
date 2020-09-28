#include <stdio.h>
#include <stdlib.h>
void buddle_sort(int a[],int len){
int i,j,temp;
for (i=0;i<len-1;i++)
for (j=0;j<len-1-i;j++)
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}}
void selection_sort(int a[],int len){
int i,j,temp;
for(i=0;i<len-1;i++){
int min=i;
for(j=i+1;j<len;j++)
if(a[j]<a[min])
{temp=a[min];
a[min]=a[j];
a[j]=temp;
}}}
void insertion_sort(int a[],int len){
int i,j,key;
for (i=1;i<len;i++){
key=a[i];
j=i-1;
while((j>=0)&&(a[j]>key)){
a[j+1]=a[j];
j--;}
a[j+1]=key;}}

void shell_sort(int a[],int len){
int gap,i,j,temp;
for(gap=len>>1;gap>=1;gap>>=1)
for(i=gap;i<len;i++){
temp=a[i];
for(j=i-gap;j>=0;j-=gap){
if(temp<a[j])
a[j+gap]=a[j];
else
break;}
a[j+gap]=temp;
}}
int quickpass(int a[],int low,int high){
int temp=a[low];
while(low<high){
while((low<high)&&(temp<=a[high]))
high--;
if(low<high)
a[low]=a[high];
while((low<high)&&(temp>=a[low]))
low++;
if(low<high)
a[high]=a[low];}
a[low]=temp;
return low;
}
void quick_sort(int a[],int low,int high){
int mid;
if(low<high){
mid=quickpass(a,low,high);
quick_sort(a,low,mid-1);
quick_sort(a,mid+1,high);
}
}
void max_heapify(int a[],int start,int end){
int dad=start;
int son=2*dad+1;
while(son<=end){
if(((son+1)<=end)&&(a[son+1]>a[son]))
son++;
if(a[son]>a[dad]){
int temp=a[dad];
a[dad]=a[son];
a[son]=temp;
dad=son;
son=dad*2+1;}
else return;
}}
void heap_sort(int a[],int len){
int i;
for(i=len/2-1;i>=0;i--)
max_heapify(a,i,len-1);
for(i=len-1;i>0;i--){
int temp=a[0];
a[0]=a[i];
a[i]=temp;
max_heapify(a,0,i-1);
}
}
void merge(int a[],int start,int mid,int end){
int i=start;
int j=mid+1;
int k=0;
int *temp=(int *)malloc((end-start+1)*sizeof(int));
while((i<=mid)&&(j<=end)){
if(a[i]<=a[j])
temp[k++]=a[i++];
else
temp[k++]=a[j++];}
while(i<=mid)
temp[k++]=a[i++];
while(j<=end)
temp[k++]=a[j++];
for(i=0;i<k;i++)
a[start+i]=temp[i];
free(temp);}

void merge_sort(int a[],int start,int end){
int mid=(start+end)/2;
if(start>=end)
return;
merge_sort(a,start,mid);
merge_sort(a,mid+1,end);
merge(a,start,mid,end);
}

void count_sort(int a[],int len){
int max=a[0],min=a[0];
int i;
for(i=0;i<len;i++){
if(a[i]>max)
max=a[i];
if(a[i]<min)
min=a[i];}
int range=max-min+1;
int *b=(int *)calloc(range,sizeof(int));
for(i=0;i<len;i++)
b[a[i]-min]++;
int j=0;
for(i=0;i<range;i++){
while(b[i]--){
a[j++]=i+min;}}
free(b);
b=NULL;}
int main(){
int a[10]={10,30,2,6,5,5,115,154,31,64},i;
for(i=0;i<=9;i++)
printf("%d ",a[i]);
putchar(10);
//buddle_sort(a,10);
//selection_sort(a,10);
//insertion_sort(a,10);
//shell_sort(a,10);
//quick_sort(a,0,9);
//heap_sort(a,10);
//merge_sort(a,0,9);
count_sort(a,10);
for(i=0;i<=9;i++)
printf("%d ",a[i]);
puts("");
}
