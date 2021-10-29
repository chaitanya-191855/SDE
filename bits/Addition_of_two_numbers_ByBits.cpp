while(b!=0){
	count=a&b;
	a=a^b;
	b=count<<1;
}

----------------
input: a=10 //1010
	   b=8  //1000
	   
ex:
	a&b=  1010
		  1000
		  ----
	count=1000
	
	a=a^b=0010
	
	a=a^b=0010^10000=10010=18
