struct Time{
	int m,h,s;
};

void getTime(Time&);
//create 3 functions

//1.  getTime function
void getTime(Time &t){
	std::cout<<std::endl<<"h : ";
	std::cin>>t.h;
	std::cout<<"m : ";
	std::cin>>t.m;
	std::cout<<"s : ";
	std::cin>>t.s;
}
//2. subtract fuctions
Time subtract(Time &t2, Time &t1){
	Time t ;
	int sum1,sum2,sum,dummy;
	sum1 = t1.s + t1.m*60 + t1.h*3600 ;
	sum2 = t2.s + t2.m*60 + t2.h*3600 ;
	sum = sum2-sum1 ;
	if (sum < 0) {
		sum += 3600*24 ;
	}

	t.h = sum/3600;
	sum -= t.h*3600;

	t.m = sum/60;
	sum -= t.m*60;

	t.s = sum;

	return t ;
}
//3. display functions

void display (Time &t) {
	std::cout<<setfill('0')<<setw(2)<<t.h<<':'<<setfill('0')<<setw(2)<<t.m<<':'<<setfill('0')<<setw(2)<<t.s<<endl;
}