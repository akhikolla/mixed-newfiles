// AUTOMATICALLY GENERATED BY RCPPDEEPSTATE PLEASE DO NOT EDIT BY HAND, INSTEAD EDIT
// cpp_lantern_configure_DeepState_TestHarness_generation.cpp and cpp_lantern_configure_DeepState_TestHarness_checks.cpp

#include <fstream>
#include <RInside.h>
#include <iostream>
#include <RcppDeepState.h>
#include <qs.h>
#include <DeepState.hpp>

void cpp_lantern_configure(int log);

TEST(,){
  static int rinside_flag = 0;
  if(rinside_flag == 0)
  {
    rinside_flag = 1;
    RInside R;
  } std::time_t current_timestamp = std::time(0);
  std::cout << "input starts" << std::endl;
  IntegerVector log(1);
  log[0]  = RcppDeepState_int();
  std::string log_t = "/home/akhila/fuzzer_packages/fuzzedpackages/torch/inst/testfiles/cpp_lantern_configure/libFuzzer_cpp_lantern_configure/libfuzzer_inputs/" + std::to_string(current_timestamp) +
          "_log.qs";
  qs::c_qsave(log,log_t,
		"high", "zstd", 1, 15, true, 1);
  std::cout << "log values: "<< log << std::endl;
  std::cout << "input ends" << std::endl;
  try{
    cpp_lantern_configure(log[0]);
  }
  catch(Rcpp::exception& e){
    std::cout<<"Exception Handled"<<std::endl;
  }
}