#include "../../common/student_info.h"

int main(void){student_info();int a[200],b[200],na=0,nb=0,ch,x,i;do{printf("\n1.Enqueue 2.Dequeue 3.Display 0.Exit\nChoice: ");scanf("%d",&ch);if(ch==1){if(na==200)puts("Queue full.");else{printf("Value: ");scanf("%d",&x);a[na++]=x;}}else if(ch==2){if(nb==0){while(na>0)b[nb++]=a[--na];}if(nb==0)puts("Queue empty.");else printf("Dequeued: %d\n",b[--nb]);}else if(ch==3){printf("Queue:");for(i=nb-1;i>=0;i--)printf(" %d",b[i]);for(i=0;i<na;i++)printf(" %d",a[i]);puts("");}}while(ch!=0);return 0;}
