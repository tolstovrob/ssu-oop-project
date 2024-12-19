#pragma once
#ifndef UTILS_CPP
#define UTILS_CPP

#include <algorithm>
#include <vector>
#include <memory>

unsigned long long getFreeId(const std::vector<unsigned long long>& ids) {
  unsigned long long maxId = 0;

  for (const auto& id : ids) {
    maxId = std::max(maxId, id);
  }

  return maxId + 1;
}

void clearConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

#endif // UTILS_CPP