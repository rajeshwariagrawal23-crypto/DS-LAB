#include "../../common/student_info.h"

int prec(char c){if(c=='^')return 3;if(c=='*'||c=='/'||c=='%')return 2;if(c=='+'||c=='-')return 1;return 0;}
int main(void){student_info();char in[300],out[300],st[300];int i,k=0,t=-1;printf("Enter infix expression (single-letter/digit operands): ");scanf("%299s",in);
 for(i=0;in[i];i++){char c=in[i];if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))out[k++]=c;else if(c=='(')st[++t]=c;else if(c==')'){while(t>=0&&st[t]!='(')out[k++]=st[t--];if(t>=0)t--;}else{while(t>=0&&st[t]!='('&&(prec(st[t])>prec(c)||(prec(st[t])==prec(c)&&c!='^')))out[k++]=st[t--];st[++t]=c;}}
 while(t>=0)if(st[t]!='(')out[k++]=st[t--];else t--;out[k]='\0';printf("Postfix: %s\n",out);return 0;}
