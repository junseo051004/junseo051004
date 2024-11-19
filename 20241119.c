#include<stdio.h>
char* xyz(char* str,char c){

	return str;
}
// data type: char, short, int, float, double
// pointer (mem address): char*,short* ....
void abc(char* str){
	
}
char* efg(char* str,char* a){
	return str;
}
double hij(int*i,short k,char c){
	return 0.0;
}

int main(){
	int i;
	short k;
	float f;
	double d;
	char c;
	printf("%lf\n", hij(&i, k, c));
	
	char* ptr;
	ptr = xyz("this is c string", 'c');
	
	char str[256];
	scanf("%[^\n]s", str);
	abc( str );
	printf("%s", efg(str, "str"));
}
