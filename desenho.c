int desenho(int d){
	int a=0;
	int b=0;
	a=d/20;
	if(a*20==d)return 5;
	a=d/10;
	if(a*10==d)return 3;
	a=d/4;
	if(a*4==d)return 2;
	return 0;
}
