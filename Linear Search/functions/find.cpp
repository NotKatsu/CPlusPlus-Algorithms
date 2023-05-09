int find_number(int number_array[], int array_length, int number_to_find) {
    for (int position = 0; position < array_length; position++) {
        if (number_array[position] == number_to_find) {
            return 1;
        } 
    }
    return 0;
}