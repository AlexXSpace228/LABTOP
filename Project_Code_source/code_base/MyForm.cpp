#include "MAIN_Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    bebe::MAIN_Form^ mainForm = gcnew bebe::MAIN_Form();
    Application::Run(mainForm);

    return 0;
}