#include "MyForm.h"


using namespace ¿ÎÉèÏîÄ¿;


int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm^ form = gcnew MyForm;
	Application::Run(form);
	return 0;
}