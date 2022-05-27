/**
 * Project Untitled
 */


#pragma once
//#include "pch.h" hay qye poner esto? avergiua esto

#include "Creation_account.h"

using namespace System;
namespace CVModel {
    public ref class User {
    public:
        property String^ First_Name;
        property String^ Second_Name;
        property String^ Last_Names;
        property String^ Password;
    };
}
