int desenho(int d){
	int a=0;
	int b=0;
	a=d/20;
	if(a*20==d)return 5;
	a=d/10;
	if(a*10==d)return 3;
	a=d/2;
	if(a*2==d)return 2;
	return 0;
}
