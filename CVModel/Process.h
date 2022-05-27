#pragma once

using namespace System;
namespace CVModel {
    public ref class Process {
    public:
        property int Salary;
        property int Work_hours;
        property String^ State; //estado en que se encuentra en el proceso de seleccion (acpetado, rechazado, siguiente etapa)

    };
}