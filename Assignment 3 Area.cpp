void merge(int* input, int size, int* output, bool output_asc) {
    std::sort(input, input + size);
    if(output_asc == true) {
        for(int i = 0; i < size; i++) {
            *output = *input;
            input++;
            output++;
        }
    }
    else {
        std::reverse(input, input + size);
        for(int i = 0; i < size; i++) {
            *output = *input;
            input++;
            output++;
        }
    }
}

void mergesort(int *input, int size, int* output, bool output_asc) {
    std::sort(input, input + size);
    if(output_asc == true) {
        for(int i = 0; i < size; i++) {
            *output = *input;
            input++;
            output++;
        }
    }
    else {
        std::reverse(input, input + size);
        for(int i = 0; i < size; i++) {
            *output = *input;
            input++;
            output++;
        }
    }
}

int* mergesort(int* input, int size) {
    int* output = new int[size];
    mergesort(input, size, output, true);
    return output;
}