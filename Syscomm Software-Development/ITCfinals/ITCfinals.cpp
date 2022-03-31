#include "pch.h"

using namespace System;
using namespace System::Windows::Forms;


int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ITCfinals::SignInForm sf;
    Application::Run(% sf);

    return 0;
}
