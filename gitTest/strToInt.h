#ifndef STRTOINT
#define STRTOINT

int StrToInt(char str[]) {
int intResult=0;
for (int index=0; str[index]!='\0'; index++) {
intResult=intResult * 10 + (str[index]-'0');
}
	return intResult;
}

#endif

