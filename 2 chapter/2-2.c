///*不用&&和||写出与下面for循环等价的循环语句
//* for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i){
//*	s[i] = c;
//* }
//*/
for (i = 0; i < lim - 1; ++i){
	if ((c = getchar()) != '\n'){
		if ( c != EOF) s[i] = c;
		else break;
	}else
		break;
}
///*
//* 在不用&& 和||的情况下
//* 只能使用多重if嵌套！
//*
//*/