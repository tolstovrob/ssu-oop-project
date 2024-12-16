#pragma once
#ifndef LOOP_CPP
#define LOOP_CPP

#include <iostream>
#include <vector>

#include "models/EnrollRequest/EnrollRequest.h"
#include "models/GroupClass/GroupClass.h"
#include "models/IndividualClass/IndividualClass.h"
#include "models/Course/Course.h"
#include "models/Student/Student.h"
#include "models/Money/Money.h"

bool loop(unsigned long long iteration,
          std::vector<std::shared_ptr<EnrollRequest>> &enrollRequests,
          std::vector<std::shared_ptr<Student>> &students,
          std::vector<std::shared_ptr<Course>> &courses,
          std::vector<std::shared_ptr<GroupClass>> &groupClasses,
          std::vector<std::shared_ptr<IndividualClass>> &individualClasses) {

  bool error = false;

  std::cout << "Итерация: " << iteration << std::endl;
  if (iteration == 0) {
    std::cout << "Загрузите начальные состояния..." << std::endl;
  } else {
    std::cout << "Обновляем состояния..." << std::endl;
  }

  unsigned long long enrollRequestCount;
  
  try {
    std::cout << "Количество заявок на очередное вступление: ";
    std::cin >> enrollRequestCount;
  } catch (std::exception &e) {
    error = true;
    return error;
  }
  
  for(int i = 0; i < enrollRequestCount; ++i) {
    // EnrollRequest enrollRequest;
    
    // enrollRequests.push_back(enrollRequest);
  }
  
  std::cout << "2 weeks have passed" << std::endl;
  return true;
};

#endif // LOOP_H