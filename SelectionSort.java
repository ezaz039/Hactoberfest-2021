package com.company;

import java.util.Arrays;

public class SelectionSort {
    public static void main(String[] args) {
        int[] arr = {5, 4, 3, 2, 1};
        selection(arr);
        System.out.println(Arrays.toString(arr));
    }

    static void selection(int[] arr){
        for (int i = 0; i < arr.length ; i++) {
            int last = arr.length - i - 1;

            int max = large(arr, 0, last);

            swapping(arr, max, last);
        }
    }

    static int large(int[] arr, int start, int last) { //function for finding out the largest number
        int l = start;
        for (int i = 1; i <= last; i++) {
            if (arr[i] > arr[l]) {
                l = i;
            }
        }
        return l;
    }

    static void swapping(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
