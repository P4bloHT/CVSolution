/**
 * Project Untitled
 */


#pragma once

#include "Job_candidates.h"
using namespace System;

namespace CVModel {
    //trade es oficio, el que antes era Low_level
    public ref class Trade : public Job_candidates {
    public:
        property String^ School_name;
        property String^ Grade;
    };
}
