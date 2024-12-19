#pragma once
#ifndef CLASSES_CPP
#define CLASSES_CPP

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>

#include "entity/EnrollRequest.cpp"
#include "entity/IndividualClass.cpp"
#include "entity/GroupClass.cpp"

#include "utils/utils.cpp"

void processEnrollRequests(std::vector<EnrollRequest>& enrollRequests,
                           std::vector<IndividualClass>& individualClasses,
                           std::vector<GroupClass>& groupClasses) {
    std::vector<unsigned long long> currentGroup;
    std::vector<unsigned long long> individualIds, groupIds;
    individualIds.reserve(individualClasses.size());
    groupIds.reserve(groupClasses.size());

    for (const auto& request : enrollRequests) {
        if (request.getIsIndividual()) {
            unsigned long long newID = getFreeId(individualIds);
            individualClasses.emplace_back(newID, request.getCourseId(), request.getId(), 0, 0);
        } else {
            currentGroup.push_back(request.getId());

            if (currentGroup.size() >= 10) {
                unsigned long long newID = getFreeId(groupIds);
                groupClasses.emplace_back(newID, request.getCourseId(), currentGroup, 0, 0);
                currentGroup.clear();
            }
        }
    }

    if (!currentGroup.empty()) {
        unsigned long long newID = getFreeId(groupIds);

        if (currentGroup.size() >= 5) {
            groupClasses.emplace_back(newID, enrollRequests[0].getCourseId(), currentGroup, 0, 0);
        }
    }

    enrollRequests.clear();
}


#endif // CLASSES_CPP