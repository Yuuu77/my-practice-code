#include <stdio.h>
int main(){
		int a,b,c,d,max,y;
		scanf("%d",&y);
	a=y/100;b=y/10%10;c=y%10;printf("%d %d %d\n",a,b,c);
	if(a>=b&&b>=c) max=a*100+b*10+c;
		if(a>=b&&c>=b) max=a*100+c*10+b;
			if(b>=a&&a>=c) max=b*100+a*10+c;
				if(b>=c&&c>=a) max=b*100+c*10+a;
					if(c>=b&&b>=a) max=c*100+b*10+a;
						if(c>=a&&a>=b) max=c*100+a*10+b;
						printf("%d",max);
						return 0;
}
