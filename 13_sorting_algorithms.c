#include "../../common/student_info.h"

void printa(int a[],int n){int i;for(i=0;i<n;i++)printf("%d ",a[i]);puts("");}
void bubble(int a[],int n){int i,j,t;for(i=0;i<n;i++)for(j=0;j<n-i-1;j++)if(a[j]>a[j+1]){t=a[j];a[j]=a[j+1];a[j+1]=t;}}
void selection(int a[],int n){int i,j,m,t;for(i=0;i<n-1;i++){m=i;for(j=i+1;j<n;j++)if(a[j]<a[m])m=j;t=a[i];a[i]=a[m];a[m]=t;}}
void insertion(int a[],int n){int i,j,x;for(i=1;i<n;i++){x=a[i];j=i-1;while(j>=0&&a[j]>x){a[j+1]=a[j];j--;}a[j+1]=x;}}
void shell(int a[],int n){int gap,i,j,x;for(gap=n/2;gap>0;gap/=2)for(i=gap;i<n;i++){x=a[i];for(j=i;j>=gap&&a[j-gap]>x;j-=gap)a[j]=a[j-gap];a[j]=x;}}
void quick(int a[],int l,int r){if(l>=r)return;int i=l,j=r,p=a[l+(r-l)/2],t;while(i<=j){while(a[i]<p)i++;while(a[j]>p)j--;if(i<=j){t=a[i];a[i++]=a[j];a[j--]=t;}}if(l<j)quick(a,l,j);if(i<r)quick(a,i,r);}
void merge(int a[],int l,int m,int r){int n=r-l+1,*t=malloc(n*sizeof(int)),i=l,j=m+1,k=0;while(i<=m&&j<=r)t[k++]=a[i]<=a[j]?a[i++]:a[j++];while(i<=m)t[k++]=a[i++];while(j<=r)t[k++]=a[j++];for(i=0;i<n;i++)a[l+i]=t[i];free(t);}
void mergesort(int a[],int l,int r){if(l<r){int m=l+(r-l)/2;mergesort(a,l,m);mergesort(a,m+1,r);merge(a,l,m,r);}}
int getmax(int a[],int n){int m=a[0],i;for(i=1;i<n;i++)if(a[i]>m)m=a[i];return m;}
void radix(int a[],int n){int max=getmax(a,n),exp;for(exp=1;max/exp>0&&exp>0;exp*=10){int out[1000],c[10]={0},i;for(i=0;i<n;i++)c[(a[i]/exp)%10]++;for(i=1;i<10;i++)c[i]+=c[i-1];for(i=n-1;i>=0;i--)out[--c[(a[i]/exp)%10]]=a[i];for(i=0;i<n;i++)a[i]=out[i];if(exp>100000000)break;}}
int main(void){student_info();int a[1000],b[1000],n,ch,i;printf("Number of non-negative integers (1-1000): ");scanf("%d",&n);if(n<1||n>1000)return 1;printf("Enter elements: ");for(i=0;i<n;i++)scanf("%d",&a[i]);printf("1 Bubble 2 Selection 3 Insertion 4 Quick 5 Merge 6 Shell 7 Radix\nChoice: ");scanf("%d",&ch);for(i=0;i<n;i++)b[i]=a[i];switch(ch){case 1:bubble(b,n);break;case 2:selection(b,n);break;case 3:insertion(b,n);break;case 4:quick(b,0,n-1);break;case 5:mergesort(b,0,n-1);break;case 6:shell(b,n);break;case 7:for(i=0;i<n;i++)if(b[i]<0){puts("Radix sort requires non-negative values.");return 1;}radix(b,n);break;default:puts("Invalid choice.");return 1;}printf("Sorted array: ");printa(b,n);return 0;}
