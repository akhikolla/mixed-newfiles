testlist <- list(n = 0L)
result <- do.call(torch:::cpp_set_num_interop_threads,testlist)
str(result)