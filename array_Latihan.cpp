#include<stdio.h>

int main(){
		int len,wid;
	scanf("%d%*c%d", &len, &wid);
	getchar();
	char map[len][wid];
	for(int i=0; i<len; i++){
		for(int j=0; j<wid; j++){
		scanf("%c", &map[i][j]);
		if(map[i][j] == '\n'){
			scanf("%c", &map[i][j]);
		} 
	}
}
printf("\n\nOutput : \n");
	for(int i=0; i<len; i++){
		for(int j=0; j<wid; j++){
		printf("%c", map[i][j]);
	}
	printf("\n");
}
	return 0;
}
