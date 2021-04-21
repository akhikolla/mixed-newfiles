testlist <- list(log = 0L)
result <- do.call(torch:::cpp_lantern_configure,testlist)
str(result)