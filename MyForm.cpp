#include "MyForm.h"


using namespace ������Ŀ;


int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm^ form = gcnew MyForm;
	Application::Run(form);
	return 0;
}