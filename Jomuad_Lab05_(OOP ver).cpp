#include <iostream>
#include <cmath>
#include <iomanip>

class basicStat{
    private:
        int array[10];
        int size = 0;
    public:
        // Class constructor (asks user for input)
        basicStat(){
            // For loop for user inputs. Ends when encounters 0 or if it reaches max size (10).
            for (int i = 0; i < 10; i++){
                std::cout << "Input integer: ";
                std::cin >> array[i];
                size++;
                if(array[i]==0) break;
            }
        }

        // Method to print the calculations
        void printResults(){
            std::cout<< "\nCalculations:\n";
            std::cout<< "Largest: " << findLargest() << "\n";
            std::cout<< "Smallest: " << findSmallest() << "\n";
            std::cout<< "Average: " << round(calcAvg()) << "\n";
            std::cout<< "Standard Deviation: " << std::fixed <<std::setprecision(2) << calcStdDev() << "\n";
            std::cout<< "Variance: " << std::fixed << std::setprecision(2) << calcVar() << "\n";
        }
        
        // Method to find smallest value in array
        int findSmallest(){
            int min = array[0];

            for(int i = 0; i < size; i++){
                if (min > array[i]) min = array[i];
            }

            return min;
        }

        // Method to find largest value in array
        int findLargest(){
            int max = array[0];

            for(int i = 0; i < size; i++){
                if (max < array[i]) max = array[i];
            }

            return max;
        }

        // Method to calculate the mean or average of the values in the array
        double calcAvg(){
            double avg = 0;

            // Stores the summation of all the values
            for(int i = 0; i < size; i++){
                avg += array[i];
            }

            // Returns the summation divided by size
            return (avg/size);
        }

        // Method to calculate the variance of the values in the array
        double calcVar(){
            double result = 0;
            // Stores the summation of the values in the array subtracted by the mean squared
            for(int i = 0; i < size; i++){
                result += pow((array[i] - calcAvg()), 2);
            }
            // Returns the stored summation divied by size
            return (result/size);
        }

        // Method to calculate the standard deviation of the values in the array
        // Standard deviation is the square root of variance.
        double calcStdDev(){
            // Returns the square root of the value returned by calcVariance()
            return sqrt(calcVar());
        }
};

int main(){
    std::cout << "Programming Exercise 05\nSubmitted by: Precious Mae E. Jomuad";
    std::cout << "\n-------------------------------------------------------------";
    std::cout << "\nThis program will ask the user to input various numbers (positive or negative but not zero)\nand perform basic statistics on these numbers.\n\n";
    
    // Creates an object of class basicStat (which will also call the constructor thus asking for input)
    basicStat calculation;
    // Calls the printResults method
    calculation.printResults();
}