///*����&&��||д��������forѭ���ȼ۵�ѭ�����
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
//* �ڲ���&& ��||�������
//* ֻ��ʹ�ö���ifǶ�ף�
//*
//*/