/**
 * Project Untitled
 */


#pragma once

#include "User.h"

using namespace System;

namespace CVModel {
    public ref class Postulant : public User {
    public:
        
        property int DNI;
        property String^ Address;
        property String^ Email;
        property String^ Academic_level;
        property int Phone_Number;
        property String^ English_level;
        property String^ Achievements;

        //void verificar();

        //void notificar_entrevistador();
    };
}
