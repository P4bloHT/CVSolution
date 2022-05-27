/**
 * Project Untitled
 */


//#ifndef _COLLEGE_H
//#define _COLLEGE_H
#pragma once

#include "Job_interns.h"

using namespace System;

namespace CVModel {
    public ref class College : public Job_interns {
    public:
        property String^ Stage;

    };
}
//#endif //_COLLEGE_H