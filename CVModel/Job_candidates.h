/**
 * Project Untitled
 */


#pragma once

#include "Postulant.h"
using namespace System;

namespace CVModel {
    public ref class Job_candidates : public Postulant {
    public:

        property String^ Past_positions;

        property String^ Work_experience;
    };

}