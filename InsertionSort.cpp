
j  = i - 1; // step 3

while (j >= 0 && arr[j] > temp) // step 4
{
arr[j + 1] = arr[j]; //step 4a
j--; //step 4b
}

arr[j + 1] = temp; //step 5
}
}