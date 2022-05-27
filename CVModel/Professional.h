/**
 * Project Untitled
 */


#pragma once

#include "Job_candidates.h"

using namespace System;
namespace CVModel {
    public ref class Professional : public Job_candidates {
    public:
        property String^ University_name;
        property String^ Thesis;
    };
}
