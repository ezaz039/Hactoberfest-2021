package com.company;

import java.util.Arrays;

public class Cyclic_sort {
    public static void main(String[] args) {
        int[] a = {3,5,2,1,4};
        sort(a);
        System.out.println(Arrays.toString(a));
    }

    static void sort(int[] arr){
        int i=0;
        while(i< arr.length){
            int correct = arr[i] - 1;// 'correct' is the index here
            if(arr[i] != arr[correct])
            {
                swap(arr, i, correct);
            }
            else{
                i++;
            }
        }
    }
    static void swap(int[] arr, int first, int second){
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
//a[a[i] - 1] = a[i];
