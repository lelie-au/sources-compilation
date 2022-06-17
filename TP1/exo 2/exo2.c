#include<stdio.h>

int main( int argc, char* argv[])
{
   
    char T;
    int nb= 0, i = -1;

	FILE* f = fopen(argv[2],"r");
    //f= fopen('test.txt',"w");
   
    printf("%s \n", argv[2]);
    while((T=(char)getc(f))!=EOF)
	{
		if(T=='m'|| T=='u' || T=='r'){
			if((T=='m')&&(i==-1)) {
				i = 0;
			}
			if((T=='u')&&(i==0)) {
				i = 1;
			}
			if((T=='r')&&(i==1)) {
				i = 2;
			}
			if(i==2){
				nb = nb+ 1;
				i = -1;
			} 
		}
		else {
			i=-1;
		}
	}
    printf("Le nombre d'occurence est: %d\n",nb);

	return 0;
}