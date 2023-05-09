int find_number(int number_array[], int number_to_find) {
    int array_length = sizeof(number_array) / sizeof(number_array[0]);

    for (int position = 0; position == array_length; position++) {
        if (number_array[position] == number_to_find) {
            return 1;
        } 
        else if (position == array_length) {
            return 0;
        }
    }
}