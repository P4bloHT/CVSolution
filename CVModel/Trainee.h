#pragma once

#include "Job_candidates.h"

using namespace System;
namespace CVModel {
    public ref class Trainee : public Job_candidates {
    public:
        property String^ Bachiller;
    };
}