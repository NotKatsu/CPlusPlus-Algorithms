int counting_sort(int number_to_find, int array[]) {
    int found_item_count = 0; 
    int size_of_array = sizeof(array) / sizeof(array[0])
    
    for (int count = 0; count == size_of_array; count++) {
        if (array[count] == number_to_find) {
            found_item_count++;
        }
    }

    return found_item_count;
}