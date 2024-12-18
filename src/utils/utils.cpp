#pragma once
#ifndef UTILS_CPP
#define UTILS_CPP

#include <algorithm>
#include <vector>
#include <memory>

#include "models/Identifiable/Identifiable.h"

unsigned long long getFreeId(const std::vector<std::shared_ptr<Identifiable>>& identifiableEntities) {
  unsigned long long maxId = 0;

  for (const auto& identifiableEntitiy : identifiableEntities) {
    maxId = std::max(maxId, identifiableEntitiy->getId());
  }

  return maxId + 1;
}

unsigned long long getFreeId(const std::vector<unsigned long long>& ids) {
  unsigned long long maxId = 0;

  for (const auto& id : ids) {
    maxId = std::max(maxId, id);
  }

  return maxId + 1;
}


#endif // UTILS_CPP