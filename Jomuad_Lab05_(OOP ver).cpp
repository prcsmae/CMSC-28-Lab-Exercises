#include <iostream>
#include <cmath>

class basicStat{
    private:
        int array[10];
        int size = 0;
    public:
        basicStat(){
            std::cout << "Input integers to calculate basic statics for: \n";
            for (int i = 0; i < 10; i++){
                std::cin >> array[i];
                size++;
                if(array[i]==0) break;
            }
        }

        void printResults(){
            std::cout<< "Calculations:\n";
            std::cout<< "Largest: " << findLargest() << "\n";
            std::cout<< "Smallest: " << findSmallest() << "\n";
            std::cout<< "Average: " << calcAvg() << "\n";
            std::cout<< "Standard Deviation: " << calcStdDev() << "\n";
            std::cout<< "Variance: " << calcVar() << "\n";
        }
        
        int findSmallest(){
            int min = array[0];

            for(int i = 0; i < size; i++){
                if (min > array[i]) min = array[i];
            }

            return min;
        }

        int findLargest(){
            int max = array[0];

            for(int i = 0; i < size; i++){
                if (max < array[i]) max = array[i];
            }

            return max;
        }

        double calcAvg(){
            double avg = 0;
            
            for(int i = 0; i < size; i++){
                avg += array[i];
            }

            return (avg/size);
        }

        double calcVar(){
            double result = 0;

            for(int i = 0; i < size; i++){
                result += pow((array[i] - calcAvg()), 2);
            }

            return (result/size);
        }

        double calcStdDev(){
            return sqrt(calcVar());
        }
};

int main(){
    basicStat calculation;
    calculation.printResults();
}