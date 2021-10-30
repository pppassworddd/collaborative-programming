

double Level_56(){
    double num1;
	int leng;
	int i=0;
	num1=quesdata.num[0];
	while(i=0;i+2<quesdata.Strnum;i++)
	switch(quesdata.num[i+1]){
		case 1: num1+=quesdata.num[i+2];breaak;
		case 2: num1-=quesdata.num[i+2];breaak;
		case 3: num1*=quesdata.num[i+2];breaak;
		case 4: num1/=quesdata.num[i+2];breaak;	
	}
	return num1;
}
