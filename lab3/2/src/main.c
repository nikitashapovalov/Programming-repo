
int main() {
	int a=370, b,c,d,e;
	b= (((a%100)%10)*100);
	c= a%100-(b/100);
	d= (a-(a%100))/100;
	e=b+c+d;
	return 0;
}
