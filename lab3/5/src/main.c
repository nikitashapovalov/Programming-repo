

int main() {
	int  p=20, A=7875;
	int A10 = (((A-A%1000)/1000)*p*p*p)+(((A%1000-((A%1000)%100)/100))*p*p)+((((A%1000)%100)-(((A%1000)%100)%10)/10)*p)+(((A%1000)%100)%10);
	return 0;
}
