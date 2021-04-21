testlist <- list(n = 0L)
result <- do.call(torch:::cpp_set_num_threads,testlist)
str(result)