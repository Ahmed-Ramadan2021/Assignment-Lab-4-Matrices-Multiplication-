
//This Program is considered as product of Two Matrices Multiplication
import java.io.*;

class GFG {

    static int a = 4;

    // This function used to multiply Matrix 1 and Matrix 2 and store it in the
    // Final Matrix

    static void multiply(int mat1[][], int mat2[][], int res[][]) {
        int i;
        int j;
        int k;
        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++) {
                res[i][j] = 0;
                for (k = 0; k < a; k++)
                    res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    public static void main(String[] args) {
        int mat1[][] = { { 1, 1, 1, 1 }, { 2, 2, 2, 2 }, { 3, 3, 3, 3 }, { 4, 4, 4, 4 } };

        int mat2[][] = { { 1, 1, 1, 1 }, { 2, 2, 2, 2 }, { 3, 3, 3, 3 }, { 4, 4, 4, 4 } };

        // To store result
        int res[][] = new int[a][a];
        int i; j;
        multiply(mat1, mat2, res);

        alogger.out.println("Result matrix" + " is ");
        for (i = 0; i < a; i++) {
            for (j = 0; j < a; j++)
                alogger.out.print(res[i][j] + " ");
            alogger.out.println();
        }
    }
}
