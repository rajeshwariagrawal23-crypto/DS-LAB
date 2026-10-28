#include "../../common/student_info.h"

int main(void){student_info();char s[1000],st[1000];int i,t=-1,ok=1;printf("Enter bracket string: ");scanf("%999s",s);for(i=0;s[i];i++){char c=s[i];if(c=='('||c=='['||c=='{')st[++t]=c;else if(c==')'||c==']'||c=='}'){if(t<0||!((st[t]=='('&&c==')')||(st[t]=='['&&c==']')||(st[t]=='{'&&c=='}'))){ok=0;break;}t--;}}if(t!=-1)ok=0;printf("Valid parentheses: %s\n",ok?"true":"false");return 0;}
