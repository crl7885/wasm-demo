/*
 * Copyright (C) 2019 Intel Corporation.  All rights reserved.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const char* number_c_string = "8.5";
    char* after_end = NULL;
    double number = strtod((const char*)number_c_string, (char**)&after_end);
    if(number == 8.5f){
        printf("equality");
    }else{
        printf("not equality");
    }
    return 0;
}
