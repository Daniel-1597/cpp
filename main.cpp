#include <iostream>
#include <cmath>
#include <vector>


int numbers(){
    std::cout<<"hello world"<<std::endl;
    for (int i = 1; i < 101; i++){
        if (int (i % 10) !=0){
            std::cout<<i<<",";
        }
        else{
            std::cout<<i;    
        }
        
        // i % 10 != 0 ? std::cout<<i<<"," : std::cout<<i; # one liner code

        if (int (i % 10) == 0){
            std::cout<<std::endl;
            }
        }
    }

double* axis_transformation(double angle, double x, double y, double a, double b);


int main(){
	double *arr = axis_transformation(90, 1, 2, 3, 4);
	std::cout<<arr<<std::endl;
	std::cout<<arr[0]<<','<<arr[1]<<std::endl;
}

double* axis_transformation(double angle, double x, double y, double a, double b){
	x = a - x; 
	y = b - y;
	double x1, y1;

	x1 = cos(angle)*x + sin(angle)*y;
	y1 = -sin(angle)*x + cos(angle)*y;

	double* arr = new double[2];
	arr[0] = x1;
	arr[1] = y1;
	return arr;
}



int main_pointers(){
	int a[2] = {1, 2};
	int* b = a;
	b[0] = 3;
	std::cout<<a[0];


}
std::pair<int,int> pairs(){
	std::pair<int, int> a;
	a = std::make_pair(1, 2);

	
	return a;
}
int mainPair(){
	std::pair<int, int> a = pairs();
	std::cout<<a.first<<','<<a.second<<std::endl;
}

int main32(){
	std::vector<std::pair<double, double>> v;
	std::pair<double, double> a;
	for(int i = 0; i < 100; i++){
		a.first = i;
		a.second = i+1;
		v.push_back(a);
		std::cout<<v[i].first<<","<<v[i].second<<std::endl;
	}
}

