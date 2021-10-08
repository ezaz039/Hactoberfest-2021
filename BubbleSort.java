package com.company;

import java.util.Arrays;

public class BubbleSort {
    public static void main(String[] args) {
        int[] arr = {-5, 83, 1, 0};
        bubble(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void bubble(int[] arr) {
        boolean swap;

        for (int i = 0; i < arr.length ; i++)  {          //parsing through length of the array
            swap = false;

            for (int j = 1; j < arr.length - i ; j++) {  //comparing the elements
                if(arr[j] < arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;

                    swap = true;
                }
            }

            if(!swap){                   //if swapping of elements is not executing, swap = false and break the loop  to save time
                break;
            }
        }
    }
}
