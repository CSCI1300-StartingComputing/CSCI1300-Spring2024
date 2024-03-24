#### **CSCI 1300 CS1: Starting Computing**
#### **Naidu/Godley - Spring 2024**
#### **Recitation 7 - Week of March 4, 2024**

# Table of contents
1. [Exercises](#exercises)
   1. [Question 1 - Spot the Errors](#spot)
   2. [Question 2 - The Great ASCII Art Decryptathon](#decryptathon)
3. [Deliverables](#deliverables)


# Exercises <a name="exercises"></a>
### 1. **Spot the errors**. <a name="spot"></a>

a.
The program below intends to prints average of the scores. Fix the error in the code.
```cpp
#include <iostream>
#include <string> 
using namespace std;
int main()
{
    int size = 5;
    double scores[size] = {85.4, 90.3, 100, 89, 74.5, 95.0};
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += scores[i];
    }
    int avg = sum / 5.0;
    cout << "Average = " << avg << endl;
    return 0; 
}
```

b. The program below displays transpose of a given matrix. The transpose of a matrix is simply a flipped version of the original matrix by switching its rows with its columns. Fix the error in the code.
```cpp

#include <iostream>
using namespace std;

// Function to calculate the transpose of a matrix
void transposeMatrix(int matrix[][3], int n, int m) 
{ 
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    return matrix;
} 

int main() 
{
    const int rows = 3;
    const int cols = 3;
    int originalMatrix[rows][cols] = 
    {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };

    // Calculate the transpose matrix using the function
    int result[rows][cols] = transposeMatrix(int originalMatrix[3][3], rows, cols);

    // Display the transpose matrix
    cout << "Transpose Matrix:" << endl;
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
```

c. The program below tries to print all the items specified in the item array. Fix the error in the code.
```cpp
#include <iostream>
using namespace std;

int main()
{
    int N;
    int item[] = {"book", "pen", "pencil", "eraser"};

    //printing all the items
    for (int i = 0; i < N i++)
    {
        cout << "The item list has " << items[j] << endl;
    }
    return 0;
}
```

d. The program below prints the strings that have length equal to 4.
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    const int N = 6;
    string animals[N] = {"lion", "cat", "bear", "dog", "elephant", "fox"};
    for (int i = 0; i < N; i++) 
    {
        if (animals.length() == 4)
        {
            cout << animals[i] << endl;
        }
    }
    return 0;
}
```

### 2. The Great ASCII Art Decryptathon! <a name="decryptathon"></a>

In recitation this week, we will be doing something different. You will be participating in an ASCII Art Decryption Hackathon!! 

Please refer to the worksheet distributed in the recitation for this activity.

-----------------------------
# Deliverables for Recitation <a name="deliverables"></a>
Submit your work on [Canvas](https://canvas.colorado.edu/courses/100891/assignments/1968895?module_item_id=5342164).
